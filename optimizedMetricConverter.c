#include <stdio.h>


int main(){
// I will now allow the user to decide what conversion he/she would like to make
    char x;
    //repeat variable allows the while loop to run
    int repeat = 1;

    while (repeat == 1) 
    {
        //welcome statement
        printf("\nHello, welcome to my metric converter\n\tto convert from Feet to yards press 'f'\n\tto convert from yards to meters press 'm'\n\tto convert from pounds to kilos press 'p' \n\tto convert from km to miles, type 'k' \n");
        //collects user input
        scanf("\n%c", &x);
        //switch case statement that checks for what type of conversion the user requested
        switch (x)
        {
        case 'f': //in the case of feet to yards
            FeetToYrds();
            break;
        case 'm': //in the case of yards to meters
            YrdsToMeters();
            break;
        case 'p': //in the case of pounds to kilograms
            poundtokilo();
            break;
        case 'k': //in the case of kilometers to miles
            kmToMiles();
            break;
        default: //this default action will run if none of the appropiate inputs are entered
            printf("\nplease input a valid character, ");
            break;
    
        }
        printf("\n\twould you like to convert another metric(1 = yes, 2 = no)");
        //the users input is caught and recorded 
        scanf("%d", &repeat);
        
    }
    
    return 0;
}
// function that converts feet to yards
void FeetToYrds(){
    int feet;
    int yards;

    printf("\ntype a number in feet and I will give you the equivalent in yards\n");
    scanf("%d", &feet);
    yards = 3*feet;
    printf("\nyards: %d", yards);
}
//function that converts yards to meters
void YrdsToMeters(){
    int yards;
    float meters;

    printf("\nEnter a value in yards and I will give you the equivalent in meters: \n");
    scanf("%d", &yards);
    meters = yards*.9144;
    printf("\nmeters: %f", meters);

}
//function that converts pounds to kilograms
void poundtokilo(){
    int pound;
    float kilo;

    printf("enter a mass in pounds and I will return it in kilos: \n");
    scanf("%dpounds: ", &pound);
    kilo = pound*.453592;
    printf("\nkilograms: %f", kilo);

}
//function that converts kilometers to miles
void kmToMiles(){
    int km;
    float miles;

    printf("\nenter a value in km and I will give it in miles: \n");
    scanf("%dkilometers", &km);
    miles = km*.621371;
    printf("\nmiles: %f", miles);
}