#pragma once

#include "config_schema.h"
#include <string>

class ConfigManager {
private:
    ConfigSchema schema;

public:
    ConfigManager();
    bool loadConfig(const std::string& configPath);
    bool saveConfig(const std::string& configPath);
    const ConfigSchema& getSchema() const;
};
