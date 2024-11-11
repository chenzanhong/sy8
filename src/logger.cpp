#include "Logger.h"

Logger::Logger(const std::string& filename) : file(filename, std::ios::app) {
    if (!file.is_open()) {
        std::cerr << "无法打开日志文件: " << filename << std::endl;
    }
}

void Logger::log(const std::string& message) {
    if (file.is_open()) {
        file << message << std::endl;
    } else {
        std::cerr << "日志文件未打开，无法记录日志: " << message << std::endl;
    }
}

Logger::~Logger() {
    if (file.is_open()) {
        file.close();
    }
}