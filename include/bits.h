#pragma once
#include <cstdint>

// Hoan vi bit theo mot bang (dung cho IP, PC-1, PC-2, E, P, FP cua DES).
// in      : du lieu dau vao, chi dung in_bits bit thap nhat
// in_bits : so bit hop le cua 'in' (vd 64 cho IP, 32 cho E)
// table   : bang hoan vi, so thu tu bit danh tu 1 va tinh tu BEN TRAI (bit cao nhat)
// out_bits: so phan tu cua bang = so bit cua ket qua
inline uint64_t permute(uint64_t in, int in_bits, const int* table, int out_bits) {
    uint64_t out = 0;
    for (int i = 0; i < out_bits; i++) {
        // Bit thu k tinh tu trai nam o vi tri (in_bits - k) tinh tu phai,
        // nen dich phai (in_bits - k) lan roi lay bit thap nhat.
        int shift = in_bits - table[i];
        uint64_t bit = (in >> shift) & 1ULL;
        // Day bit vua lay vao cuoi ket qua, bit lay truoc nam o vi tri cao hon.
        out = (out << 1) | bit;
    }
    return out;
}
