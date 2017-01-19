//
//  main.c
//  Number
//
//  Created by jerrysher on 18/01/2017.
//  Copyright © 2017 ChiChiTeam. All rights reserved.
//

#include <stdio.h>


int main(int argc, const char * argv[]) {
    long x = 255;
    printf("x is %ld.\n", x);
    printf("x is %ld.\n", x);
    printf("In octal, x is %lo.\n", x);
    printf("In hexadecimal, x is %lx.\n", x);
    
    unsigned long unsignedX = 255;
    printf("unsignedX is %lu.\n", unsignedX);
    printf("In octal, unsignedX is %lo.\n", unsignedX);
    printf("I n hexadecimal, unsignedX is %lx.\n", unsignedX);
    
    
    printf("3 * 3 + 5 * 2 = %d\n", 3 * 3 + 5 * 2);
    printf("11/ 3 = %d\n", 11 /3 );
    printf("11 / 3 = %d remainder of  %d \n ", 11 /3 , 11 % 3);
    
    printf("11 / 3.0 = %f", 11 /3.0);
    return 0;
}
