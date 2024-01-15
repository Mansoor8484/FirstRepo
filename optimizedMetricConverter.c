#include <stdio.h>


int main(){
// I will now allow the user to decide what conversion he/she would like to make
    char x;
    int repeat = 1;

    while (repeat == 1) 
    {
        printf("\nHello, welcome to my metric converter\n\tto convert from Feet to yards press 'f'\n\tto convert from yards to meters press 'm'\n\tto convert from pounds to kilos press 'p' \n\tto convert from km to miles, type 'k' \n");
        
        scanf("\n%c", &x);

        switch (x)
        {
        case 'f':
            FeetToYrds();
            break;
        case 'm':
            YrdsToMeters();
            break;
        case 'p':
            poundtokilo();
            break;
        case 'k':
            kmToMiles();
            break;
        default:
            printf("\nplease input a valid character, ");
            break;
    
        }
        printf("\n\twould you like to convert another metric(1 = yes, 2 = no)");
        scanf("%d", &repeat);
        
    }
    
    return 0;
}

void FeetToYrds(){
    int feet;
    int yards;

    printf("\ntype a number in feet and I will give you the equivalent in yards\n");
    scanf("%d", &feet);
    yards = 3*feet;
    printf("\nyards: %d", yards);
}

void YrdsToMeters(){
    int yards;
    float meters;

    printf("\nEnter a value in yards and I will give you the equivalent in meters: \n");
    scanf("%d", &yards);
    meters = yards*.9144;
    printf("\nmeters: %f", meters);

}

void poundtokilo(){
    int pound;
    float kilo;

    printf("enter a mass in pounds and I will return it in kilos: \n");
    scanf("%dpounds: ", &pound);
    kilo = pound*.453592;
    printf("\nkilograms: %f", kilo);

}

void kmToMiles(){
    int km;
    float miles;

    printf("\nenter a value in km and I will give it in miles: \n");
    scanf("%dkilometers", &km);
    miles = km*.621371;
    printf("\nmiles: %f", miles);
}