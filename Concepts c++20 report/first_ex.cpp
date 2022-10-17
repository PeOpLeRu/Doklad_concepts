#include <iostream>
#include <vector>

int sum(std::vector<int> v)
{
    int res = 0;

    for (auto& x : v)
    {
        res += x;
    }

    return res;
}


int main()
{
    std::vector data = { 1, 2, 3, 4, 5 };

    std::cout << sum(data);
}