#include <stdio.h>

int main()
{
	int n = 1;

	while (n < 11)
	{
		printf("%d\n", n);
		n = n + 1;
	}

	return 0;
}


// goto style
// int main()
// {
//     int n = 1;

// label:
//     printf("%d\n", n);
//     n = n + 1;
	
//     if (n == 10) goto out;

//     goto label;
// out:
//     return 0;
// }