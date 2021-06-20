/**
 * @file dice.cpp
 * @author xmdf
 * @date 9 June 2021
 * @brief Dice objects
 */

#include "dice.hpp"
#include "utils.hpp"
#include <spdlog/spdlog.h>


namespace lrs {

    Die::Die()
    {
        this->roll();

        spdlog::debug("Created Die");
    }

    Die::~Die()
    {
        spdlog::debug("Destroyed Die");
    }

    void Die::roll()
    {
        this->val_ = utils::u_randi(1, 6);
    }
}