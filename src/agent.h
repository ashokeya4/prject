#pragma once

#include "platform/ipsec_handler.h"
#include "tunnel_types.h"
#include <memory>

class Agent {
private:
    std::unique_ptr<IpsecHandler> ipsecHandler;
    bool running;

public:
    Agent();
    ~Agent();

    bool initialize();
    bool start();
    bool stop();
    bool addTunnel(const TunnelPolicy& policy);
    bool removeTunnel(const std::string& tunnelId);
};
