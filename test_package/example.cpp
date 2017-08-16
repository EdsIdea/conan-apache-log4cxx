#include <iostream>
#include <log4cxx/logger.h>
#include <log4cxx/basicconfigurator.h>

#ifndef EXIT_SUCCESS
#define EXIT_SUCCESS 0
#endif

int main() {
    log4cxx::BasicConfigurator::configure();
    LOG4CXX_DEBUG(log4cxx::Logger::getRootLogger(), "Hello, World!");

    return EXIT_SUCCESS;
}
