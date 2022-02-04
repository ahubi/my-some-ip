// HelloWorldService.cpp
#include <iostream>
#include <thread>
#include "ApplicationFabric/LinuxApplicationFabric.h"


int main() {
    #ifdef __linux__ 
        
        LinuxApplicationFabric linuxAppFabric;
        IApplication* app = linuxAppFabric.createApplication();
        if(app)
            app->startApplication();
        else
            cerr <<"Failed to create application error: " << errno << endl;
    
    #elif __QNX__

    #else
    
    #endif
    
    return 0;
 }