#include <stdio.h>
int main(){ 
	int myInt = 10;
	printf("My Integer is: %d\n", myInt);
	//char myLetter = "A";
	//printf("My Letter as a character: %c \n", myLetter);
	//printf("My Letter as an integer:  %\n", myLetter);

	int a = 5;
	int b = 2;
	float result = a / b;
	float realResult = (float)a / b;
	printf("Wrong Result: %n, Right Result: %f", result, realResult);


	return 0;
}

