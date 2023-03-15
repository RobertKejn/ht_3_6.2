#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

int main()
{
    std::array<int,6> a1 = {1,5,1,3,4,4};
    std::cout << "[IN]\n";
    std::for_each(a1.begin(), a1.end(), [](int const& a)->void {(std::cout << a << "\n"); });
    std::sort(a1.begin(), a1.end(), [](int const& a, int const& b) -> bool {return a > b; });
    std::vector<int> v1;
    for (auto i = a1.begin(); i != a1.end(); i++) {
        if (v1.empty()) v1.push_back(*i);
        else if (v1.back() != *i)v1.push_back(*i);
    }
    std::cout << "\n[OUT]\n";
    std::for_each(v1.begin(), v1.end(), [](int const& a)->void {(std::cout << a << "\n"); });
}
