// Convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main()
{
    float cel,fah;
    printf("Enter the value of Celcius= ");
    scanf("%f", &cel);

    fah= (9*cel)/5 + 32  ;      //formula for celcius to fahreneit
    printf("The conversion of celcius to Fahreneit is= %f", fah);

    

    // ************For both type of conversions*************

    // float cel, fah;
    // char c;
    // printf("Enter F for Celcius to Fahreneit orr\nC for Fahreneit to Celcius\n");
    // scanf("%c", &c);

    // switch (c)
    // {
    // case 'F':
    //     printf("Enter the value of Celcius=");
    //     scanf("%f",&cel);
    //     fah = (9 * cel) / 5 + 32; // formula for celcius to fahreneit
    //     printf("The conversion of celcius to Fahreneit is= %f", fah);

    //     break;

    // case 'C':
    //     printf("Enter the value of fahreneit=");
    //     scanf("%f",&fah);
    //     cel = (5.0/9)* (fah-32); // formula for fahreneit to celcius
    //     printf("The conversion of fahreneit to celcius is= %f", cel);

    //     break;

    // default:
    //     printf("Undefined choice");
    // }



    return 0;
}



