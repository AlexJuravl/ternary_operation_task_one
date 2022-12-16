#include <stdio.h>

int rechange(int one, int *two);

int a;
int b;
int c;

int main()
{
    int temp;

    printf("Swap the values of the variables a, b and c so that a ≥ b ≥ c.\n");
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    a = (a < b && a < c && c < b) ? rechange(a, &b) : a;
    a = (a < b && a < c && b < c) ? rechange(a, &c) : a;
    b = (b < c) ? rechange(b, &c) : b;

    b = (a < b && a == c) ? rechange(b, &c) : b;
    a = (a < b && b == c) ? rechange(a, &c) : a;

    printf("Answer: a = %d, b = %d, c = %d", a, b, c);
}

int rechange(int one, int *two)
{
    int temp;

    temp = *two;
    *two = one;

    return temp;
}