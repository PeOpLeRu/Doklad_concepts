#include <iostream>

#include <vector>
#include <list>

#include <concepts>

template<typename Iterator, typename Value>
//requires std::integral<Value>
Value sum(Iterator begin, Iterator end, Value res)
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

    std::cout << sum(vector_data.begin(), vector_data.end(), std::vector({1, 2, 3})) << std::endl;

    std::cout << sum(list_data.begin(), list_data.end(), std::string("sss")) << std::endl;

    getchar();
}