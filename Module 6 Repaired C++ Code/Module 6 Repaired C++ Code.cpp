#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
	double v1 = 0.0; //changed to double so if user enters a decimal the application works
	while (v1 != 4) { //changed to v1 != 4 instead of 5 so the user can quit by entering 4
   //displaying menu to user
		puts(" ");
		puts("Enter a number for arithmetic selection.");
		puts("A second number entered is the first number used in the operation.");
		puts("A third number is the second number of the operation.");
		puts("----------------");
		puts("- 1)Add -");
		puts("- 2)Subtract -");
		puts("- 3)Multiply -");
		puts("- 4)Exit -");
		puts("----------------");
		
		//getting users selection
		scanf_s("%lf", &v1);
		double v2;
		double v3;
		double v4;
		double v5;
		double v6;
		double v7;
		double v8;
		double v9; // changed v1 to v9 from int to double so the program can accept decimals without breaking
			if (v1 != 1) {
				if (v1 != 2) {
					if (v1 == 3) {
						scanf_s("%lf %lf", &v3, &v2); //changed all %d to %lf for double
						v9 = v3;
						v4 = v2;
						printf("%lf * %lf = %lf\n", v9, v4, v9 * v4); //changed logical division to multiplcation
						//and display subtracting to display multiplcation
					}
				}
				else {
					scanf_s("%lf %lf", &v3, &v2);
					v7 = v3;
					v8 = v2;
					printf("%lf - %lf = %lf\n", v7, v8, v8 - v7); //Changed the logic to subtraction like it
					//should be
				}
			}
			else {
				scanf_s("%lf %lf", &v3, &v2);
				v5 = v3;
				v6 = v2;
				printf("%lf + %lf = %lf\n", v5, v6, v5 + v6); //Changed the logic to be addition instead of
				//subtraction
			}
	}
	exit(0);
}