#include <iostream>

int main() {
    int x = 5;
    int y = 20;

    (++x) = y;  // корректно: ++x обозначает переменную x
    std::cout << "x = " << x << '\n'; // 20
}
