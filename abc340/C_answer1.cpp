#include <iostream>

int main() {
    using namespace std;
    unsigned long N;
    cin >> N;

    unsigned long fN = N - 1;
    fN |= fN >> 1;
    fN |= fN >> 2;
    fN |= fN >> 4;
    fN |= fN >> 8;
    fN |= fN >> 16;
    fN |= fN >> 32;
    fN = (fN & 0x5555555555555555) + (fN & 0xAAAAAAAAAAAAAAAA) / 2;
    fN = (fN & 0x3333333333333333) + (fN & 0xCCCCCCCCCCCCCCCC) / 4;
    fN = (fN & 0x0F0F0F0F0F0F0F0F) + (fN & 0xF0F0F0F0F0F0F0F0) / 16;
    fN = (fN & 0x00FF00FF00FF00FF) + (fN & 0xFF00FF00FF00FF00) / 256;
    fN = (fN & 0x0000FFFF0000FFFF) + (fN & 0xFFFF0000FFFF0000) / 65536;
    fN = (fN & 0x00000000FFFFFFFF) + (fN & 0xFFFFFFFF00000000) / 4294967296;

    cout << N * (fN + 1) - (1UL << fN) << endl;
    
    return 0;
}
