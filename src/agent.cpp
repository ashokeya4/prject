#include "agent.h"
#include "common.h"

Agent::Agent() : running(false) {
    unified_ipsec::log(unified_ipsec::LogLevel::Info, "Agent constructed");
}

Agent::~Agent() {
    if (running) {
        stop();
    }
}

bool Agent::initialize() {
    unified_ipsec::log(unified_ipsec::LogLevel::Info, "Agent initializing...");
    // TODO: Initialize platform-specific handler
    return true;
}

bool Agent::start() {
    unified_ipsec::log(unified_ipsec::LogLevel::Info, "Agent starting...");
    running = true;
    return true;
}

bool Agent::stop() {
    unified_ipsec::log(unified_ipsec::LogLevel::Info, "Agent stopping...");
    running = false;
    return true;
}

bool Agent::addTunnel(const TunnelPolicy& policy) {
    unified_ipsec::log(unified_ipsec::LogLevel::Info, "Adding tunnel: " + policy.policyId);
    return true;
}

bool Agent::removeTunnel(const std::string& tunnelId) {
    unified_ipsec::log(unified_ipsec::LogLevel::Info, "Removing tunnel: " + tunnelId);
    return true;
}
