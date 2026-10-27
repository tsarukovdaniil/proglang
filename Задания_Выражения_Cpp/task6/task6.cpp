#include <iostream>
#include <string>

int main() {
    std::string s;
    for (int i = 0; i < 1000000; ++i)
        s += 'a';

    std::cout << s.size() << '\n'; // 1000000

    std::string t;
    for (int i = 0; i < 1000000; ++i)
        t = t + 'a';

    std::cout << t.size() << '\n'; // тоже 1000000, но обычно медленнее
}
