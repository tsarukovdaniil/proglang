#include <iostream>
#include <utility>

int main() {
    int a = 1, b = 2;

    a, b = b, a; // НЕ меняет значения местами
    std::cout << "После выражения с запятыми: a=" << a
              << ", b=" << b << '\n';

    std::swap(a, b);
    std::cout << "После std::swap: a=" << a
              << ", b=" << b << '\n';
}
