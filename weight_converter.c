#include <stdio.h>

int main ()
{
    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter one of the options: (1 or 2)\n");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Please enter the weight in kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.205;
        printf("%.2f kilograms are %.2f pounds\n", kilograms, pounds);
    }
    else if(choice == 2)
    {
        printf("Please enter the weight in pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.205;
        printf("%.2f pounds are %.2f kilograms\n", pounds, kilograms);
    }
    else {
        printf("Invalid Choice! Please enter the option 1 or 2\n");
    }
    printf("Thank you for using our weight calculator!\n");
    return 0;
}
