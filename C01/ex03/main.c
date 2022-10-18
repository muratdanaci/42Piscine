#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
    
}

int     main(void)
{
    int a = 15;
    int b = 3;
    int *div = &a;
    int *mod = &b;
    
    ft_div_mod(a, b, div, mod);
    printf("Bölünebilen: %d\n", *div);
    printf("Bölümünden Kalan: %d\n", *mod);
}
