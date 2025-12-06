#include "config_manager.h"
#include "common.h"

ConfigManager::ConfigManager() {
    schema.agentVersion = unified_ipsec::VERSION;
    schema.configFormat = "JSON";
    schema.enableLogging = true;
    schema.logLevel = "INFO";
    schema.maxTunnels = 100;
}

bool ConfigManager::loadConfig(const std::string& configPath) {
    unified_ipsec::log(unified_ipsec::LogLevel::Info, "Loading config from: " + configPath);
    // TODO: Parse JSON config
    return true;
}

bool ConfigManager::saveConfig(const std::string& configPath) {
    unified_ipsec::log(unified_ipsec::LogLevel::Info, "Saving config to: " + configPath);
    // TODO: Write JSON config
    return true;
}

const ConfigSchema& ConfigManager::getSchema() const {
    return schema;
}
