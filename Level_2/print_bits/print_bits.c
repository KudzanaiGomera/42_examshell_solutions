#include <stdio.h>

void	print_bits(unsigned char octet)
{
    int z = 128;
    int oct;

    oct = octet;
    while(z > 0)
    {
        if(oct & z)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        z >>= 1;
    }
}