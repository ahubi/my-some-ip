#include "LinuxApplication.h"

LinuxApplication::LinuxApplication()
:IApplication()
{
}

LinuxApplication::~LinuxApplication()
{
}

void LinuxApplication::startApplication()
{
  sigset_t l_waitedSignals;
	sigemptyset (&l_waitedSignals);
	sigaddset (&l_waitedSignals, SIGTERM);
	sigprocmask (SIG_BLOCK, &l_waitedSignals, nullptr);
  mRuntime = CommonAPI::Runtime::get();
  myService = std::make_shared<HelloWorldStubImpl>();
  mRuntime->registerService("local", "test", myService);
  std::cout << "Successfully Registered Service!" << std::endl;

	RandomSubject rndSub;
  shared_ptr<IObserver> someIP((IObserver*) new RandomObserver(myService));
  rndSub.addObserver(someIP.get());

  thread t1(&RandomSubject::run, ref(rndSub));
  
  SyslogSubject sysSub;
  boost::asio::io_service io;
  boost::asio::io_service::work work(io);
  shared_ptr<IObserver> sysLog((IObserver*) new SyslogObserver(myService, io));
  sysSub.addObserver(sysLog.get());

  thread t2(&SyslogSubject::run, ref(sysSub));
  std::thread thread([&]{io.run();});
    
  cout << "LinuxApplication started" << endl;
  int l_signal;
	sigwait (&l_waitedSignals, &l_signal);
  t1.join();
  t2.join();
}
void LinuxApplication::stopApplication()
{

}

