#include <string>
#include <vector>

void digit_count() {
    int n = 1234567;
    int digits = 0;
    while (n > 0) { digits += 1; n /= 10; }
    (void)digits;
}

void shift_right() {
    unsigned int n = 256u;
    unsigned int shifted = n >> 3;
    (void)shifted;
}

extern "C" int eager_ember();
extern "C" void swift_ember();
extern "C" void noble_grove();

int main() {
    digit_count();
    shift_right();
    swift_ember();
    noble_grove();
    return eager_ember();
}
