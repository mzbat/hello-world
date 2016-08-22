/*
//
//  Created by @thedevilsvoice on 3/28/13.
//  Copyright (c) 2013 #fubaria. All rights reserved.

Build it this way:

cc ayy_lmao.c -o ayy_lmao

*/
#include <stdio.h>

#define AYY 0
#define LMAO 1
#define ayy_lmao(format, ...) fprintf (stderr, format, __VA_ARGS__)


int main(int argc, const char * argv[])
{
    int turnt = 8;
    // muffled ayy lmao from @da_667 in the distance
    ayy_lmao("all lit up    : %d  \n", turnt );
    
    for (int x = 1; x < 101; x++)
    {
        // is x a multiple of 3?
        if ((x % 3 == 0) && (x % 5 == 0))
            printf("AyyLmao\n");
        else if (x % 3 == 0)
            printf("Ayy\n");
        // is x a multiple of 5?
        else if (x % 5 == 0)
            printf("Lmao\n");
        else
            printf("%d\n",x);
    }
    return 0;
}
