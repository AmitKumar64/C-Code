#include <stdio.h>
int main()
{
    char c;
    float kmsToMiles = 0.621371;
    float inchesToFoot = 0.083333;
    float cmsToinches = 0.3938701;
    float poundTokgs = 0.453592;
    float inchesToMeters = 0.0254;
    float first, second;

    while (1)
    {
        printf("Enter the input character, q to Quit\n    1. kms to miles\n    2. inches to foot\n    3. cms to inches\n    4. pound to kgs\n    5. inches to miles\n   Enter:\n ");

        scanf(" %c", &c);
        switch (c)
        {
        case 'q':
            printf("Quiting the programm....!");
            goto end;
            break;

        case '1':
            printf("Enter the quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * kmsToMiles;
            printf("%.2f kms is equal to miles %.2f\n\n\n", first, second);
            break;

        case '2':
            printf("Enter the quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * inchesToFoot;
            printf("%.2f inches is equal to Foot %.2f\n\n\n", first, second);
            break;

        case '3':
            printf("Enter the quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * cmsToinches;
            printf("%.2f cms is equal to inches %.2f\n\n\n", first, second);
            break;

        case '4':
            printf("Enter the quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * poundTokgs;
            printf("%f pound is equal to kgs %f\n\n\n", first, second);
            break;

        case '5':
            printf("Enter the quantity in term of first unit\n");
            scanf("%f", &first);
            second = first * inchesToMeters;
            printf("%.2f inches is equal to meters %.2f\n\n\n", first, second);
            break;

        default:
        printf("Invalid Input!\n\n\n\n");
            break;
        }
    }
end:
    return 0;
}