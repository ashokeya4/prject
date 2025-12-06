#pragma once

#include "tunnel_types.h"
#include <vector>
#include <string>

class TunnelManager {
private:
    std::vector<TunnelPolicy> activeTunnels;

public:
    TunnelManager();
    bool createTunnel(const TunnelPolicy& policy);
    bool destroyTunnel(const std::string& tunnelId);
    std::vector<TunnelPolicy> getActiveTunnels() const;
};
