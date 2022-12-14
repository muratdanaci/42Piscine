#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int index;
	int tmp;

	index = 0;
	while (index < size / 2)
	{
		tmp = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = tmp;
		index++;
	}
}
 
void putarr(int arr[], int size)
{
    for (int i = 0; i < (size -1); i++)
        printf("%d, ", arr[i]);
    printf("%d\n", arr[size - 1]);
}

int		main (void)
{
	int tab[] = {1, 2, 3, 4};
	int size;
	
	size = 4;

	printf("Original: ");
	putarr(tab, size);

	ft_rev_int_tab(tab, size);

	printf("Modified: ");
	putarr(tab, size);
}
