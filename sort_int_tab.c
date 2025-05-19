void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void sort_int_tab(int *tab, int size)
{
	int i = 0;
	int j = 0;
	while(tab[i])
	{
		j = i + 1;
		while(tab[j])
		{	
			if(tab[i] > tab[j])
			{
				swap(&tab[i],&tab[j]);
			}
			j++;
		}
		i++;
	}
}
#include <stdio.h>



int main()
{
	int i[5] = {1,3,61,6,7};
	sort_int_tab(i,5);
	for(int n = 0;i[n]; n++)
		printf("%d\n",i[n]);
}
