#include <stdio.h>
int main() 
{
float physics, chemistry, maths, total, average;
// Reading PCM marks
printf("Enter marks for Physics:");
scanf("%f",&physics);
printf("Enter marks for Chemistry:");
scanf("%f",&chemistry);
printf("Enter marks for Mathematics:");
scanf("%f",&maths);
// Calculations
total=physics+chemistry+maths;
average=total/3.0;
printf("\n\n");
printf("PCM Total\t:\t%.2f / 300\n",total);
printf("Average Marks\t:\t%.2f%%\n",average);
printf("\n");
// Eligibility check using the conditional operator (condition ? true_case : false_case)
printf("Status\t\t:\t%s\n",(average >= 50)?"ELIGIBLE for Admission":"NOT ELIGIBLE for Admission");
printf("----------------------------------------\n");
return 0;
}
