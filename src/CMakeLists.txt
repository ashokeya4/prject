set(SRC_FILES
    main.cpp
    agent.cpp
    config_manager.cpp
    tunnel_manager.cpp
    monitoring_service.cpp
)

add_executable(unified-ipsec-agent ${SRC_FILES})

target_include_directories(unified-ipsec-agent
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_SOURCE_DIR}/include
)

# Platform-specific sources (stubs for now)
if (WIN32)
    target_sources(unified-ipsec-agent PRIVATE
        platform/windows/windows_ipsec.cpp
        platform/windows/windows_firewall.cpp
        platform/windows/windows_registry.cpp
    )
elseif (APPLE)
    target_sources(unified-ipsec-agent PRIVATE
        platform/macos/macos_ipsec.cpp
        platform/macos/macos_firewall.cpp
    )
elseif (UNIX)
    target_sources(unified-ipsec-agent PRIVATE
        platform/linux/linux_ipsec.cpp
        platform/linux/linux_firewall.cpp
        platform/linux/linux_systemd.cpp
    )
endif ()
