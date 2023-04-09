#include <stdio.h>

/**
 * main - does unit conversions for temprature, mass, length 
 * Return: teh converted unit, as per the user's disgression
*/

int main() {

    char conversionType;
    int tempConversion;
    float celsToFah;
    float calcCelsToFah;
    float fahToCels;
    float calcFahToCels;
    float celsToKel;
    float calcCelsToKel;
    float kelToCels;
    float calcKelToCels;
    int massConversion;
    float kiloToPound;
    float calcKiloToPound;
    float poundToKilo;
    float calcPoundToKilo;
    int lengthConversion;
    float metreToFoot;
    float calcMetreToFoot;
    float footToMetre;
    float calcFootToMetre;
    float kiloToMile;
    float calcKiloToMile;
    float mileToKilo;
    float calcMileToKilo;

    printf("Welcome to my unit conversion programme!\n");
    printf("These are the supported types of conversion:\n");
    printf("Temperature (T)\nMass (M)\nlength (L)\n");
    printf("Please enter the type of conversion you would like to perform here: ");
    scanf("%c", &conversionType);

    if (conversionType == 'T')
    {
        printf("You have chosen to convert temperature units\n");
        printf("Which of the following conversions would you like to perform:\n");
        printf("celsius to fahrenheit (1)\n");
        printf("farenheit to celsius (2)\n");
        printf("celsius to kelvin (3)\n");
        printf("kelvin to celsius (4)\n");
        printf("Enter your choice here: ");
        scanf("%d", &tempConversion);

        if (tempConversion == 1)
        {
            printf("Enter the celsius value that you would like to convert to fahrenheit: ");
            scanf("%f", &celsToFah);
            calcCelsToFah = ((celsToFah * 9 / 5) + 32);
            printf("That is %.2fF", calcCelsToFah); /*° symbol doesn't work. prints out to 2 decimals*/
        }
        else if (tempConversion == 2)
        {
            printf("Enter the fahrenheit value that you would like to convert to celsius: ");
            scanf("%f", &fahToCels);
            calcFahToCels = ((fahToCels - 32) * 5 / 9);
            printf("That is %.2fC", calcFahToCels);
        }
        else if (tempConversion == 3)
        {
            printf("Enter the celsius value that you would like to convert to kelvin: ");
            scanf("%f", &celsToKel);
            calcCelsToKel = (celsToKel + 273.15);
            printf("That is %.2fK", calcCelsToKel);
        }
        else if (tempConversion == 4)
        {
            printf("Enter the kelvin value that you would like to convert to celsius: ");
            scanf("%f", &kelToCels);
            calcKelToCels = (kelToCels - 273.15);
            printf("That is %.2fC", calcKelToCels);
        }
    }
    else if (conversionType == 'M')
    {
        printf("You have chosen to convert mass units\n");
        printf("Which of the following conversions would you like to perform:\n");
        printf("kilogram to pound (1)\n");
        printf("pound to kilogram (2)\n");
        printf("Enter your choice here: ");
        scanf("%d", &massConversion);

        if (massConversion == 1)
        {
            printf("Enter the kilogram value you would like to convert to pound: ");
            scanf("%f", &kiloToPound);
            calcKiloToPound = (kiloToPound * 2.20462);
            printf("That is %.2flb", calcKiloToPound);
        }
        else if (massConversion == 2)
        {
            printf("Enter the pound value that you would like to convert to kilogram: ");
            scanf("%f", &poundToKilo);
            calcPoundToKilo = (poundToKilo / 2.20462);
            printf("That is %.2fkg", calcPoundToKilo);
        }
    }
    else if (conversionType = 'L')
    {
        printf("You have chosen to convert length units\n");
        printf("Which of the following conversions would you like to perform:\n");
        printf("metre to foot (1)\n");
        printf("foot to metre (2)\n");
        printf("kilometre to mile (3)\n");
        printf("mile to kilometre (4)\n");
        printf("Enter your choice here: ");
        scanf("%d", &lengthConversion);

        if (lengthConversion == 1)
        {
            printf("Enter the metre value that you would like to convert to foot: ");
            scanf("%f", &metreToFoot);
            calcMetreToFoot = (metreToFoot * 3.28084);
            printf("That is %.2fft", calcMetreToFoot);
        }
        else if (lengthConversion == 2)
        {
            printf("Enter the foot value that you would like to convert to metre: ");
            scanf("%f", &footToMetre);
            calcFootToMetre = (footToMetre / 3.28084);
            printf("That is %.2fm", calcFootToMetre);
        }
        else if (lengthConversion == 3)
        {
            printf("Enter the kilometre value that you would like to convert to mile: ");
            scanf("%f", &kiloToMile);
            calcKiloToMile = (kiloToMile * 0.62137119);
            printf("That is %.2fmi", calcKiloToMile);
        }
        else if (lengthConversion == 4)
        {
            printf("Enter the mile value that you would like to convert to kilogram: ");
            scanf("%f", &mileToKilo);
            calcMileToKilo = (mileToKilo / 0.62137119);
            printf("Tha is %.2fkm", calcMileToKilo);
        }
    }
    else
    {
        printf("Please enter one of the options provided above");
    }
    return (0);
}