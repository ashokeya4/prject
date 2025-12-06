#include "monitoring_service.h"
#include "common.h"

MonitoringService::MonitoringService() : enabled(false), metricsInterval(60) {
    unified_ipsec::log(unified_ipsec::LogLevel::Info, "MonitoringService initialized");
}

bool MonitoringService::start() {
    unified_ipsec::log(unified_ipsec::LogLevel::Info, "MonitoringService starting");
    enabled = true;
    return true;
}

bool MonitoringService::stop() {
    unified_ipsec::log(unified_ipsec::LogLevel::Info, "MonitoringService stopping");
    enabled = false;
    return true;
}

bool MonitoringService::collectMetrics() {
    if (enabled) {
        unified_ipsec::log(unified_ipsec::LogLevel::Debug, "Collecting metrics...");
    }
    return true;
}
