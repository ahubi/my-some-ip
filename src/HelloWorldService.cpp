// HelloWorldService.cpp
#include <iostream>
#include <thread>
#include "ApplicationFabric/LinuxApplicationFabric.h"


int main() {
    LinuxApplicationFabric linuxAppFabric;
    IApplication* app = linuxAppFabric.createApplication();
    if(app)
        app->startApplication();
    else
        cerr <<"Failed to create application error: " << errno << endl;
    return 0;
 }