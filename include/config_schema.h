#pragma once

#include <string>
#include <map>
#include <vector>

struct ConfigSchema {
    std::string agentVersion;
    std::string configFormat;
    bool enableLogging;
    std::string logLevel; // "DEBUG", "INFO", "WARNING", "ERROR"
    int maxTunnels;
    std::vector<std::string> supportedCryptoProfiles;
};
