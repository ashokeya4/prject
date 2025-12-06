#pragma once

#include <string>
#include <iostream>

namespace unified_ipsec {
    const std::string VERSION = "0.1.0";
    const std::string AGENT_NAME = "unified-ipsec-agent";

    enum class LogLevel {
        Debug,
        Info,
        Warning,
        Error
    };

    inline void log(LogLevel level, const std::string& message) {
        std::string levelStr;
        switch (level) {
            case LogLevel::Debug:   levelStr = "[DEBUG]"; break;
            case LogLevel::Info:    levelStr = "[INFO]";  break;
            case LogLevel::Warning: levelStr = "[WARN]";  break;
            case LogLevel::Error:   levelStr = "[ERROR]"; break;
        }
        std::cout << levelStr << " " << message << std::endl;
    }
}
