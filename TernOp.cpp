#include <stdio.h>

int a;
int b;
int c;

int main()
{
    int temp;

    printf("Swap the values of the variables a, b and c so that a ≥ b ≥ c.\n");
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    a = (a < b&& a < c&& c < b) ? temp = a, b : a;
}