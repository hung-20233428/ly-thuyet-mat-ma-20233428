#include <cstdio>
#include "bits.h"

// Bang hoan vi ban dau IP (Initial Permutation) cua DES, 64 phan tu
const int IP[64] = {
    58, 50, 42, 34, 26, 18, 10, 2,
    60, 52, 44, 36, 28, 20, 12, 4,
    62, 54, 46, 38, 30, 22, 14, 6,
    64, 56, 48, 40, 32, 24, 16, 8,
    57, 49, 41, 33, 25, 17,  9, 1,
    59, 51, 43, 35, 27, 19, 11, 3,
    61, 53, 45, 37, 29, 21, 13, 5,
    63, 55, 47, 39, 31, 23, 15, 7
};

int main() {
    uint64_t plaintext = 0x0123456789ABCDEFULL;
    uint64_t afterIP = permute(plaintext, 64, IP, 64);

    // Tach thanh nua trai L0 (32 bit cao) va nua phai R0 (32 bit thap)
    uint32_t L0 = (uint32_t)(afterIP >> 32);
    uint32_t R0 = (uint32_t)(afterIP & 0xFFFFFFFFULL);

    printf("Plaintext : %016llX\n", (unsigned long long)plaintext);
    printf("Sau IP    : %016llX\n", (unsigned long long)afterIP);
    printf("L0 = %08X (ky vong CC00CCFF)\n", L0);
    printf("R0 = %08X (ky vong F0AAF0AA)\n", R0);
    return 0;
}
