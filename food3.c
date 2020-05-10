#include<stdio.h>
int main()
{
	printf("pick an item:\n1. pizza\n2. burger\n3. pasta\n4. french fries\n5. sandwich");
	int food=0;
	scanf("%d",&food);
	switch(food)
	{
		case 1:
			printf(" food - pizza\n cost - 239");
			break;
		case 2:
			printf(" food - burger\n cost - 129");
			break;
		case 3:
			printf("food - pasta\n cost - 179");
			break;
		case 4:
			printf("food - french fries\n cost - 99");
			break;
		case 5:
			printf("food - sandwich\n cost - 149");
		default : printf(" choose number between 1 to 5");
	}
}
