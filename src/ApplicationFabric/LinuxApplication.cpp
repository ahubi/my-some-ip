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
	RandomSubject rndSub;
  IObserver* someIP = (IObserver*) new SomeIPObserver();
  rndSub.addObserver(someIP);

  thread t1(&RandomSubject::run, ref(rndSub));
  cout << "LinuxApplication started" << endl;

	int l_signal;
	sigwait (&l_waitedSignals, &l_signal);
  t1.join();
}
void LinuxApplication::stopApplication()
{

}

