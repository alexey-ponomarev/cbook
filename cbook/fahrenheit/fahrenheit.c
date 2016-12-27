//
//  fahrenheit.c
//  learningc
//
//  Created by Alexey Ponomarev on 26/12/2016.
//  Copyright © 2016 Alexey Ponomarev. All rights reserved.
//

#include <stdio.h>

#define LOWER   0   /* lower limit */
#define UPPER   300 /* upper limit */
#define STEP    20  /* step size */

/* print Fahrenheit-Celsius table
 with two different types of loops and 
 in two directions*/

int main()
{
    float fahr, celsius;
    
    printf("===========================\n");
    printf("Fahrenheit <------> Celsius\n");
    printf(" FOR with 0->300 direction \n");
    printf("===========================\n\n");
    
    fahr = LOWER;
    while (fahr <= UPPER){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }
    printf("\n");
    
    printf("===========================\n");
    printf("Fahrenheit <------> Celsius\n");
    printf("WHILE with 0->300 direction\n");
    printf("===========================\n\n");
    
    
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP){
        printf("%3.0f\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
    printf("\n");
    
}
