#pragma once

#include <concepts>
#include <vector>

namespace slearn
{
    template<std::floating_point T>
    class array
    {
    public:

    private:
        std::vector<std::vector<T>> m_data;

    };
}