#include <iostream>

#include <vector>
#include <list>

#include <iterator>
#include <concepts>

template<typename T>
concept arithmetic = std::is_arithmetic<T>::value;

template<typename T>
concept iterator = requires (T it)
{
    *it;
    ++it;
};

template<iterator Iter, arithmetic Value>
Value sum(Iter begin, Iter end, Value res)
{
    for (auto it = begin; it != end; ++it)
    {
        res += *it;
    }
    
    return res;
}

int main()
{
    std::vector vector_data = { 1, 2, 3, 4, 5 };

    std::list list_data = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    std::cout << sum(vector_data.begin(), vector_data.end(), 0) << std::endl;

    std::cout << sum(list_data.begin(), list_data.end(), 0) << std::endl;
}