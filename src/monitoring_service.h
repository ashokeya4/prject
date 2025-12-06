#pragma once

#include <string>

class MonitoringService {
private:
    bool enabled;
    int metricsInterval; // seconds

public:
    MonitoringService();
    bool start();
    bool stop();
    bool collectMetrics();
};
