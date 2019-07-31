#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
    return(((octet & 0xf0 )>> 4)|((octet & 0x0f)<< 4));
}
