#pragma once

#include <string>
#include <vector>

struct TunnelPeer {
    std::string id;
    std::string ipAddress;
    std::string peerType; // "initiator" or "responder"
};

struct EncryptionConfig {
    std::string algorithm;    // e.g., "AES-256-GCM"
    std::string integrityAlgo; // e.g., "SHA256"
    int keyLength;
};

struct TunnelPolicy {
    std::string policyId;
    TunnelPeer localPeer;
    TunnelPeer remotePeer;
    EncryptionConfig encryption;
    int lifetimeSeconds;
};
