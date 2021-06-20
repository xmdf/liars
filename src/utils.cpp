/**
 * @file utils.cpp
 * @author xmdf
 * @date 9 June 2021
 * @brief Liars dice utils
 */

#include "utils.hpp"
#include <random>


namespace lrs::utils
{
    int32_t u_randi(int32_t min, int32_t max)
    {
        std::default_random_engine generator;
        std::uniform_int_distribution<int32_t> distribution(min, max);

        return distribution(generator);
    }

} // end namespace lrs::utils