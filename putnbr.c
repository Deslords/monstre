#include <unistd.h>

static void putnbr_long(long n)
{
    if (n >= 10)
        putnbr_long(n / 10);
    char c = '0' + (n % 10);
    write(1, &c, 1);
}

void putnbr(int nb)
{
    long n = nb;
    if (n < 0) {
        write(1, "-", 1);
        n = -n;
    }
    putnbr_long(n);
}
