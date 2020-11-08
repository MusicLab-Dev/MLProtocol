/**
 * @ Author: Paul Creze
 * @ Description: Protocol common types
 */

#pragma once

#include <cstdint>

namespace Protocol
{
    /** @brief Distance with the studio */
    using NodeDistance = std::uint8_t;

    /** @brief Distance between two nodes */
    using BoardID = std::uint32_t;

    /** @brief Hardware connection type */
    enum class ConnectionType : std::uint8_t {
        None,
        USB,
        WIFI
    };

    /** @brief Describe a parameter data */
    struct Control
    {
        /** @brief Type of control */
        enum class Type : std::uint8_t {
            None,
            Button,
            Potentiometer
        };

        Type type { Type::None };
        std::uint8_t value1 { 0u };
        std::uint8_t value2 { 0u };
        std::uint8_t value3 { 0u };
    };

    /** @brief Discovery packet magic key */
    constexpr std::uint32_t DiscoveryPacketMagicKey = 0xD15C0FFF;

    /** @brief Discovery packet */
    struct alignas(1) DiscoveryPacket
    {
        std::uint32_t magicKey { DiscoveryPacketMagicKey };
        ConnectionType connectionType { ConnectionType::None };
        NodeDistance distance { 0u };
    };

    // static_assert(sizeof(DiscoveryPacket) == 6, "DiscoveryPacket must takes 6 bytes");
    // TO FIX
};