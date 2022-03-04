// HelloWorldClient.cpp
#include <iostream>
#include <string>
#include <unistd.h>
#include <CommonAPI/CommonAPI.hpp>
#include <v1/commonapi/HelloWorldProxy.hpp>
#include <v1/commonapi/CustomTypes.hpp>
#include <signal.h>

using namespace v1_0::commonapi;
using namespace std;
int main() {
    std::shared_ptr < CommonAPI::Runtime > runtime = CommonAPI::Runtime::get();
    std::shared_ptr<HelloWorldProxy<>> myProxy = runtime->buildProxy<HelloWorldProxy>("local", "test");

    cout << "Checking availability!" << std::endl;
    myProxy->getAttrStatusAttribute().getChangedEvent().subscribe([&](const CustomTypes::AttributeStruct& val)
    {
        std::cout << "Received status attribute: " << val.getAttrNum() << " " << val.getAttrName() << std::endl;
    });
    // Subscribe to broadcast
    myProxy->getStatusEvent().subscribe([&](const std::string& val) {
        cout << "Received status event: " << val << std::endl;
    });

    CommonAPI::CallStatus callStatus;
    std::string returnMessage;
    myProxy->sayHello("Bob", callStatus, returnMessage);
    cout << "Got message: '" << returnMessage << "'\n";

    sigset_t l_waitedSignals;
	sigemptyset (&l_waitedSignals);
	sigaddset (&l_waitedSignals, SIGTERM);
	sigprocmask (SIG_BLOCK, &l_waitedSignals, nullptr);
	cout << "The office daemon has successfully started up." << endl;
	int l_signal;
	sigwait (&l_waitedSignals, &l_signal);
    
    return 0;
}