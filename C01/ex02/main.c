#include <stdio.h>

int    ft_swap(int *a, int *b)
{
    int     c;
    
    c = *a;
    *a = *b;
    *b = c;

    return (a);
}

int main()
{
    int     y = 1;
    int     z = 2;
    
    printf("%d",ft_swap(&y, &z);
}
