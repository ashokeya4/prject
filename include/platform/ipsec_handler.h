#pragma once

#include <string>

enum class IpsecTunnelState {
    Down,
    Up,
    Error
};

struct IpsecTunnelConfig {
    std::string id;
    std::string localPeer;
    std::string remotePeer;
    std::string cryptoProfile;
};

class IpsecHandler {
public:
    virtual ~IpsecHandler() = default;

    virtual bool applyConfig(const IpsecTunnelConfig& cfg) = 0;
    virtual bool removeConfig(const std::string& id) = 0;
    virtual IpsecTunnelState getState(const std::string& id) const = 0;
};
