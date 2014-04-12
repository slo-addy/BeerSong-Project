//
//  main.c
//  BeerSong
//
//  Created by Addison Francisco on 3/23/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>

void singSongFor(int numberOfBottles)
{
    if (numberOfBottles == 0) {
        printf("There are simply no more bottles of beer on the wall.\n\n");
    } else {
        printf("%d bottles of beer on the wall. %d bottles of beer.\n",
               numberOfBottles, numberOfBottles);
        sleep(2);
        int oneFewer = numberOfBottles - 1;
        printf("Take one down, pass it around, %d bottles of beer on the wall.\n\n",
               oneFewer);
        sleep(2);
        singSongFor(oneFewer); // This function calls itself!
        
        // Print a message just before the function ends
        printf("Put a bottle in the recycling, %d empty bottles in the bin.\n",
               numberOfBottles);
    }
}
int main(int argc, const char * argv[])
{
    singSongFor(99);
    return 0;
}

//MAKING SURE MY GIT SKILLZ ARE WORKING!!!!!!!!!