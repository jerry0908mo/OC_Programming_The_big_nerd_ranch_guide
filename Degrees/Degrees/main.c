//
//  main.c
//  Degrees
//
//  Created by jerrysher on 18/01/2017.
//  Copyright © 2017 ChiChiTeam. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


void x();
float fahrenheitFromCelsius(float cel);
float average(float a, float b);
//需要先定义函数，然后才能实现。或者把函数写在 main 函数之前。


int main(int argc, const char * argv[]) {
    float freezeInc = 0.0f;
    float freezeInf = fahrenheitFromCelsius(freezeInc);
    printf("Water freezes at %f degrees Fahrenheit.\n", freezeInf);
    x();
    
    average(10, 2);
    return EXIT_SUCCESS;
}

float fahrenheitFromCelsius(float cel) {
    float fahr = cel * 1.8 + 32.0;
    printf("%f Celsius is %f Fahrenheit \n", cel, fahr);
    return fahr;
}

void x () {
    return ;
}


float average(float a, float b) {
    return (a + b) / 2.0;
    printf("The mean justifies the end.\n");
}
