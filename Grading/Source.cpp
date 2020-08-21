#include <stdio.h>
int main()
{
	int x;
	scanf_s("%d", &x);
	if (x >= 0 && x <= 100)
	{
		if (x < 50) printf("Grade F");
		else if (x < 60) printf("Grade D");
		else if (x < 70) printf("Grade C");
		else if (x < 80) printf("Grade B");
		else if (x <= 100) printf("Grade A");
	}
	else printf("Error");
}