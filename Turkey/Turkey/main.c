//
//  main.c
//  Turkey
//
//  Created by jerrysher on 16/01/2017.
//  Copyright © 2017 ChiChiTeam. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float weight;
    weight = 14.2;
    
    printf("The turkey weights is %f \n", weight);
    
    float cookingTime;
    
    cookingTime = 15.0 + 15.0 * weight;
    
    printf("Cook it for %f minutes. \n", cookingTime);
    return 0;
}
