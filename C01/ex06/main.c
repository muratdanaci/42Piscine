#include <stdio.h>

int ft_strlen(char *str)
{
    int len;
    
    len = 0;
    while(str[len] != '\0')
    {
        len++;
    }
    return (len);
}

int     main(void)
{
    char str[] = "Murat Danaci";
    
    int count = ft_strlen(str);
    
    printf("%d\n", count);
}
