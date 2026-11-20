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

void leading_zeros() {
    unsigned int n = 0b000101u;
    int zeros = 0;
    while ((n & 1u) == 0u) { zeros += 1; n >>= 1; }
    (void)zeros;
}

void sum_evens() {
    int values[5] = {2, 4, 6, 8, 10};
    int acc = 0;
    for (int i = 0; i < 5; ++i) acc += values[i];
    (void)acc;
}

extern "C" int eager_ember();
extern "C" void swift_spruce();
extern "C" void radiant_haven();
extern "C" void noble_cove();

int main() {
    digit_count();
    shift_right();
    leading_zeros();
    sum_evens();
    swift_spruce();
    radiant_haven();
    noble_cove();
    return eager_ember();
}
