//
//  main.c
//  Coolness
//
//  Created by jerrysher on 19/01/2017.
//  Copyright © 2017 ChiChiTeam. All rights reserved.
//

#include <stdio.h>
#include <readline/readline.h>

void countDownNumber (int fromInt) {
    int initFromInt = fromInt;
//    while (initFromInt >= 0){
//        printf("%d\n", initFromInt);
//        initFromInt -= 3;
//    }
//    
    
    int step = 0;
    for (initFromInt = fromInt; initFromInt >= 0 ; initFromInt--) {
        
        if (step == 3) {
            step = 0;
        }
        
        if (step == 0){
            printf("%d\n", initFromInt);
            if (initFromInt % 5 == 0){
                printf("Found one!\n");
                
            }
        }
        
        step++;
        
        
    }
    
}

int main(int argc, const char * argv[]) {
    int i = 0;
    while (i < 12) {
        printf("Jerryzhang is Cool.\n");
        i ++;
    }

    
    for (i = 0; i < 12 ; i++) {
        printf("%d. Jerry is Cool.\n", i);
        if (i + 90 == i * i){
            break;
        }
    }
    printf("Thre anser is %d. \n", i);
    
    printf("input count down from number:");
    const char *name = readline(NULL);
    int formInt = atoi(name);
    printf("%s is Cool!\n\n", name);
    countDownNumber(formInt);
    return 0;
}
