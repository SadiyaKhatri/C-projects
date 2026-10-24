#include <stdio.h>
int main() {
int start, end, i, temp, sum = 0;

printf("Enter two numbers: ");
scanf("%d %d", &start, &end);

if (start > end) { // swap if entered in reverse order
temp = start;
start = end;
end = temp;
}
for (i = start; i <= end; i++) {
if (i % 2 != 0) // odd number
sum = sum + i;
}
printf("Sum of odd numbers = %d\n", sum);
return 0;
}