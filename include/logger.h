#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <fstream>
#include <iostream>

class Logger {
public:
    Logger(const std::string& filename);
    void log(const std::string& message);
    ~Logger();

private:
    std::ofstream file;
};

#endif // LOGGER_H