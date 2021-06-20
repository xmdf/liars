/**
 * @file dice.hpp
 * @author xmdf
 * @date 9 June 2021
 * @brief Dice objects
 */

#pragma once

#include <cstdint>


namespace lrs {

    class Die
    {
    public:
        /**
         * @brief Creates lrs::Die object
         */
        Die();

        /**
         * @brief "Rolls" die - sets val to U[1,6]
         *
         * Simulates rolling a die. Sets "val" member of Die to uniformly random value
         * between 1 and 6 (inclusive).
         */
        void roll();

        /**
         * @brief Returns value of last call to roll()
         * @return value of last call to roll()
         */
        uint8_t get_val();

        ~Die();
        Die(const Die&) = delete;
        Die& operator= (const Die&) = delete;

    private:
        /// Last value of roll
        uint8_t val_;
    };

} // end namespace lrs