#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* ***1*** */
void main()
{
	printf("Hello Yarin"); 
}

/* ***2*** */
void main()
{
	double PI;
	PI = 3.141592;
	printf("%.2lf", PI);
}

/* ***3*** */
void main()
{
	printf("  *\n ***\n*****\n");
} 

/* ***4*** */  
void main()
{
	int a, b;
	a = 5;
	b = 3;
	printf("a * b = %d\n", a * b);
	printf("a / b = %d\n", a / b);
	printf("a *modulo* b = %d", a % b);
}

/* ***4n*** */
void main()
{
	int a, b;
	printf("Please enter number for A: ");
	scanf("%d", &a);
	printf("Please enter number for B: ");
	scanf("%d", &b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %d\n", a / b);
	printf("a *modulo* b = %d", a % b);
}

/* ***5*** */
void main()
	{
		int a, b, tmp;
		printf("Please enter number for A: ");
		scanf("%d", &a);
		printf("Please enter number for B: ");
		scanf("%d", &b);
		tmp = a;
		printf("After swapping values: A= %d\n", a = b);
		printf("After swapping values: B= %d", b = tmp);
	}

/* ***5XOR*** */
void main() 
{
	int a, b;
	printf("Please enter number for A: ");
	scanf("%d", &a);
	printf("Please enter number for B: ");
	scanf("%d", &b);
	a ^= b;
	b ^= a;
	a ^= b;
	printf("After swapping values: A= %d\n", a);
	printf("After swapping values: B= %d", b);
}

/* ***1*** */
void main()
{
	int currentYear, age;
	printf("Enter the current year: ");
	scanf("%d", &currentYear);
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("You was born in: %d", currentYear - age);
}

/* ***2WithLoops***  */
void main()
{
	int row, column, norows = 7; // varibales: שורה,תור,עמודה
	for (row = 0; row < norows; row++) { //for loops- row smaller from norows, row grow.
		for (column = 0; column < norows; column++) { // for loop- column smaller from norows, column grow.
			if ((row == column) || ( row + column) == (norows-1)) // when row equal column and row + column equal norows-1.
				printf("*"); // print star *. 
			else
				printf(" "); // else do space. 
		}
		printf("\n"); 
	}
}

/* ***2PrintStar*** */
void main()
{
	printf("*     *\n");
	printf(" *   *\n");
	printf("  * *\n");
	printf("   *\n");
	printf("  * *\n");
	printf(" *   *\n");
	printf("*     *\n");
		
}

/* ***3*** */
void main()
{
	long iD;
	printf("Enter your id: ");
	scanf("%ld", &iD);

	double wagePerHour;
	printf("Enter your wage per hour: "); 
	scanf("%lf", &wagePerHour);

	int hoursWorkPerDay, daysWorkWeak, finalWorkYear , startWorkYear;

	printf("Enter hours work per day: ");
	scanf("%d", &hoursWorkPerDay);

	printf("Enter day of work in weak: ");
	scanf("%d", &daysWorkWeak);

	printf("Enter which year you stop to work: ");
	scanf("%d", &finalWorkYear);

	printf("Enter which year you start to work: ");
	scanf("%d", &startWorkYear);

	printf("Your Compensation is: %.3lf", ((((wagePerHour * hoursWorkPerDay)*daysWorkWeak) * 4)*(finalWorkYear - startWorkYear)));
	printf(" , Your ID is: %ld", iD);
}

/* ***4*** */
void main()
{
	double priceP1, priceP2;
	printf("Enter the price of product 1: ");
	scanf("%lf", &priceP1); 
	printf("Enter the price of product 2: ");
	scanf("%lf", &priceP2);

	int amount1, amount2;
	printf("Enter the amount from product 1: ");
	scanf("%d", &amount1);
	printf("Enter the amount from product 2: ");
	scanf("%d", &amount2);

	printf("Alice paid in average: %lf", ((priceP1*amount1) + (priceP2*amount2)) / (amount1 + amount2));
	printf(" Nis per item");
}

/* ***5*** */
void main()
{
	int dis, kmhCar;
	printf("Enter distance between city 1 to city 2: ");
	scanf("%d", &dis);
	printf("Enter the speed in kmh of the car: ");
	scanf("%d", &kmhCar);

	int mod = dis % kmhCar;
	int min = (mod*60)/kmhCar;

	printf("The time from city 1 to city 2 is: %d", (dis / kmhCar)) + printf(" hours");
	printf(" and: %d", min) + printf(" minutes\n");
}