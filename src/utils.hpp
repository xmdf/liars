/**
 * @file utils.hpp
 * @author xmdf
 * @date 9 June 2021
 * @brief Liars dice utils
 */

#pragma once

#include <cstdint>

namespace lrs::utils
{
    /**
     * @brief Generates a uniform random integer in range [min, max]
     * @param min - minimum value of range
     * @param max - maximum value of range
     * @return Uniform random integer in range [min, max]
     */
    int32_t u_randi(int32_t min, int32_t max);

} // end namespace lrs::utils