#include <stdio.h>
int main(void)
{
	char str [5] = "dani";
	char dest [6] = "*****";
	char *p = &str[0];

	int i = 0;
	while(dest[i] != '\n' && i < 6)
	{
		dest[i] = *p;
		i++;
		p++;
	}
	printf("str =%s\ndest = %s\n",str,dest);
}
