#include <stdio.h>
int main()
{
    double num;

    printf("Enter a num: ");
    scanf("%lf", &num);

    if (num <= 0.0)
    {
        if (num == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
    }
    else
        printf("You entered a positive number.");
    return 0;
}
