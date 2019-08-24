#include <stdio.h>

//This statement is outside the main
// Creational Statement
// Global Storage Container
int age = 10; // Data Segment
//printf("age is: %d\n",age); // Erroe Generated
//age=21; //error

int main()
{
	// 1. we are updating value of Global VAriable
	// 2. when age is created in the main as well, it will update it
	age = 33;

	printf("age is: %d\n",age);

	return 0;
}

// Statements: 1. Creational	2. Usage (printing or updating)
// Exploratory : How will i now access global variable in main