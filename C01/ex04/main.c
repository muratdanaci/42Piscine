#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int        div;
    int        mod;

    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}

int     main(void)
{
    int i = 89;
    int j = 7;
    
    int *a = &i;
    int *b = &j;
    
    ft_ultimate_div_mod(a,b);
    
    printf("div = %d\n", *a);
    printf("mod = %d", *b);
}
