#include <cstdio>
#include "bits.h"

int main() {
    // Test 1: bang dong nhat 1..64, ket qua phai giong dau vao
    int id[64];
    for (int i = 0; i < 64; i++) id[i] = i + 1;

    // Test 2: bang dao nguoc 64..1, bit thap nhat nhay len bit cao nhat
    int rev[64];
    for (int i = 0; i < 64; i++) rev[i] = 64 - i;

    uint64_t x = 0x0123456789ABCDEFULL;
    printf("identity : %016llX (ky vong 0123456789ABCDEF)\n",
           (unsigned long long)permute(x, 64, id, 64));
    printf("reverse  : %016llX (ky vong 8000000000000000)\n",
           (unsigned long long)permute(0x1ULL, 64, rev, 64));
    return 0;
}
