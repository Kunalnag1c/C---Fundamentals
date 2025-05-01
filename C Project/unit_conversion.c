#include <stdio.h>

// Function declarations with arguments and return values
float km_to_m(float km);
float inches_to_foot(float inches);
float cm_to_inches(float cm);
float pound_to_kg(float pounds);
float inches_to_m(float inches);

int main() {
    int n;
    float input, result;

    printf("Enter the number according to your task:\n");
    printf("1 -> km to meter\n");
    printf("2 -> inches to foot\n");
    printf("3 -> cm to inches\n");
    printf("4 -> pound to kg\n");
    printf("5 -> inches to meter\n");
    scanf("%d", &n);

    // Perform conversion based on user input
    switch (n) {
        case 1:
            printf("Enter the value in kilometers: ");
            scanf("%f", &input);
            result = km_to_m(input);
            printf("%.2f km is equal to %.2f meters.\n", input, result);
            break;

        case 2:
            printf("Enter the value in inches: ");
            scanf("%f", &input);
            result = inches_to_foot(input);
            printf("%.2f inches is equal to %.2f feet.\n", input, result);
            break;

        case 3:
            printf("Enter the value in centimeters: ");
            scanf("%f", &input);
            result = cm_to_inches(input);
            printf("%.2f cm is equal to %.2f inches.\n", input, result);
            break;

        case 4:
            printf("Enter the value in pounds: ");
            scanf("%f", &input);
            result = pound_to_kg(input);
            printf("%.2f pounds is equal to %.2f kilograms.\n", input, result);
            break;

        case 5:
            printf("Enter the value in inches: ");
            scanf("%f", &input);
            result = inches_to_m(input);
            printf("%.2f inches is equal to %.2f meters.\n", input, result);
            break;

        default:
            printf("Invalid number.\n");
    }

    return 0;
}

// Function definitions
float km_to_m(float km) {
    return km * 1000;
}

float inches_to_foot(float inches) {
    return inches / 12;
}

float cm_to_inches(float cm) {
    return cm / 2.54;
}

float pound_to_kg(float pounds) {
    return pounds * 0.453592;
}

float inches_to_m(float inches) {
    return inches * 0.0254;
}
