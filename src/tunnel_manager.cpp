#include "tunnel_manager.h"
#include "common.h"

TunnelManager::TunnelManager() {
    unified_ipsec::log(unified_ipsec::LogLevel::Info, "TunnelManager initialized");
}

bool TunnelManager::createTunnel(const TunnelPolicy& policy) {
    unified_ipsec::log(unified_ipsec::LogLevel::Info, "Creating tunnel: " + policy.policyId);
    activeTunnels.push_back(policy);
    return true;
}

bool TunnelManager::destroyTunnel(const std::string& tunnelId) {
    unified_ipsec::log(unified_ipsec::LogLevel::Info, "Destroying tunnel: " + tunnelId);
    // TODO: Remove from activeTunnels
    return true;
}

std::vector<TunnelPolicy> TunnelManager::getActiveTunnels() const {
    return activeTunnels;
}
