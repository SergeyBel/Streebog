#ifndef _GOST341112_H_
#define _GOST341112_H_

#include <cstdlib>
#include <cstring>

using namespace std;

class Streebog
{
    private:
        int mode;
        void precalc_mul_table();
        void lps (unsigned char *in, unsigned long long *out);
        void ToHex(long long n, unsigned long long *c);
        void Xor64(unsigned long long *a,unsigned long long *b,unsigned long long *c);
        void Sum(unsigned char*a, unsigned char *b, unsigned char *c);
        void E(unsigned long long *k, unsigned long long *m);
        void g(unsigned char *h, unsigned char *m, unsigned long long *n);

    public:
        Streebog(int mode = 512);
        unsigned char *Hash(unsigned char *M, unsigned int size);
        int GetMode();
        void SetMode(int mode);
};




#endif
