#include<stdio.h>
#include<stdlib.h>
#include"BIGINT.h"
int main()
{
	struct Node* num1 = EnterBigNumber();
    struct Node* num2 = EnterBigNumber();

    // Add the big numbers
    struct Node* sum = additionofBigNumbers(num1, num2);

    // Subtract the big numbers
    struct Node* difference = subtractionofBigNumbers(num1, num2);

    // Multiply the big numbers
    struct Node* product = multiplicationofBigNumbers(num1, num2);

    // Divide the big numbers
    struct Node* division = divisionofBigNumbers(num1, num2);

    // Print the results
    printf("Number 1: ");
    printBigNumber(num1);
    printf("Number 2: ");
    printBigNumber(num2);
    printf("Sum: ");
    printBigNumber(sum);
    printf("Difference: ");
    printBigNumber(difference);
    printf("Product: ");
    printBigNumber(product);
    printf("Division: ");
    printBigNumber(division);

    // Free memory
    free(num1);
    free(num2);
    free(sum);
    free(difference);
    free(product);
    free(division);

    return 0;
}
