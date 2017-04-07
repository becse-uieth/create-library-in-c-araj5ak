# include "header.h"

int main ()
{
	int num1, num2, choice;
	printf ("Enter two Numbers\n");
	scanf ("%d%d", &num1, &num2);
	printf ("____________________MAIN MENU____________________\n");
	printf ("1. Add\n");
	printf ("2. Subtract\n");
	printf ("3. Multiply\n");
	printf ("4. Divide\n");
	printf ("Enter your choice\n");
	scanf ("%d", &choice);
	switch (choice)
	{
		case 1: add (num1, num2);
			break;
		case 2: sub (num1, num2);
			break;
		case 3: mul (num1, num2);
			break;
		case 4: div (num1, num2);
			break;
		default: printf ("Incorrect choice....please try again\n");
	}
	return 0;
}
