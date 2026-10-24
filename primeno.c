#include <stdio.h>
int main() {
// Declare variables for lower limit, upper limit, loop counters, and a prime flag
int lower, upper, i, j, isPrime;
printf("=========================================\n");
printf(" PRIME NUMBERS FINDER USING WHILE LOOP \n");
printf("=========================================\n");

// Prompt the user to enter the range (lower and upper limits)
printf("Enter lower and upper limits: ");
scanf("%d %d", &lower, &upper);

// Swap limits if the user enters the lower limit greater than the upper limit
if (lower > upper) {
int temp = lower;
lower = upper;
upper = temp;
}
printf("\nPrime numbers between %d and %d are:\n", lower, upper);

// Initialize the outer loop counter with the lower limit
i = lower;

// Outer while loop to iterate through every number from 'lower' to 'upper'
while (i <= upper) {

// Numbers less than or equal to 1 are not prime
if (i <= 1) {
isPrime = 0;
} else {
isPrime = 1; // Assume the number is prime initially
j = 2; // Start checking divisors from 2

// Inner while loop to check if 'i' is divisible by any number
while (j < i) {

// If remainder is 0, 'i' is divisible by 'j', hence not prime
if (i % j == 0) {
isPrime = 0; // Mark as not prime
break; // Exit the inner loop early since it's confirmed composite nub
}
j++; // Increment the inner loop counter
}
}
// If 'isPrime' is still 1, it means no divisors were found, so it is prime
if (isPrime == 1) {
printf("%d ", i);
}
i++; // Increment the outer loop counter to check the next number
}
printf("\n-----------------------------------------\n");
return 0;
}
