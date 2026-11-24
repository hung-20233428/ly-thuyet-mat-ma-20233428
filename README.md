# Bai tap Ly thuyet Mat ma - DES, AES-128

Cai dat bang C++17, khong dung thu vien ma hoa.

## Bien dich va chay
    g++ -std=c++17 -Iinclude -o des_run des/des.cpp && ./des_run > output/des_trace.txt
    g++ -std=c++17 -o aes_run aes/aes.cpp && ./aes_run > output/aes_trace.txt

## Test vector
- DES: Key 133457799BBCDFF1, PT 0123456789ABCDEF -> CT 85E813540F0AB405 (K1 = 1B02EFFC7072)
- AES-128 (FIPS-197 B): key 2b7e1516..., PT 3243f6a8... -> CT 3925841d...
- AES-128 (FIPS-197 C.1): key 000102..0f, PT 001122..ff -> CT 69c4e0d8...

## Ket qua
Trace tung trang thai nam trong thu muc `output/` (des_trace.txt, aes_trace.txt).
Moi chuong trinh tu kiem tra ciphertext va giai ma nguoc lai ra plaintext.
