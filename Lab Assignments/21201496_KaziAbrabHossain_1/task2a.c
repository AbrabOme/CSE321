#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float sub(float a, float b)
{
    return a - b;
}

float mul(float a, float b)
{
    return a * b;
}

int main()
{
    float f_num, s_num;
    char operator;

    printf("First Number: ");
    scanf("%f", &f_num);

    printf("Second Number: ");
    scanf("%f", &s_num);

    if (f_num > s_num)
    {
        printf("Result is: %.2f\n", sub(f_num, s_num));
    }
    else if (f_num < s_num)
    {
        printf("Result is: %.2f\n", add(f_num, s_num));
    }
    else
    {
        printf("Result is: %.2f\n", mul(f_num, s_num));
    }

    return 0;
}
