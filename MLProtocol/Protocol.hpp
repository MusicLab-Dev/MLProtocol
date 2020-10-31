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
};