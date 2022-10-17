#include <iostream>

#include <vector>
#include <list>



template<std::random_access_iterator Iter, std::integral Value>
Iter advance(Iter it, Value offset)
{
    std::cout << "Fast advance" << std::endl;

    return it + offset;
}
template<std::forward_iterator Iter, std::integral Value>
Iter advance(Iter it, Value offset)
{
    std::cout << "Long advance" << std::endl;

    while (offset--)
    {
        ++it;
    }

    return it;
}

int main()
{
    std::list list_data = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    auto list_it = advance(list_data.begin(), 2);
    std::cout << "Elem: " << *list_it << std::endl;

    std::vector vector_data = { 1, 2, 3, 4, 5 };
    auto vector_it = advance(vector_data.begin(), 2);
    std::cout << "Elem: " << *vector_it << std::endl;
    getchar();
}