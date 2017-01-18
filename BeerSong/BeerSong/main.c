//
//  main.c
//  BeerSong
//
//  Created by jerrysher on 18/01/2017.
//  Copyright © 2017 ChiChiTeam. All rights reserved.
//

#include <stdio.h>


int main(int argc, const char * argv[]) {
    singSongFor(4);
    return 0;
}

int singSongFor (int numberOfBottles) {
    if (numberOfBottles <= 0) {
        printf("there are simplay no more bottles of beer on the wall. \n\n");
    } else {
        printf("%d bottles of beer on the wall. %d bottles of beer. \n", numberOfBottles, numberOfBottles);
        
        int oneFewer = numberOfBottles - 1;
        printf("Take one down,  pass it around, %d bottles of beer.\n", oneFewer);
        
        singSongFor(oneFewer);
        
        printf("Put a bottle in the recycling, %d empty bottles in the bin.\n", numberOfBottles);
    }
    
    return 1;
}
