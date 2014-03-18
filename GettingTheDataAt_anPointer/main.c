//
//  main.c
//  GettingTheDataAt_anPointer
//
//  Created by ammar falmban on 3/18/14.
//  Copyright (c) 2014 SDKaizen.com. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int i = 17;
    int *addressOfI = &i;
    // ①
    /* The first is in the declaration where you declare the variable addressOfI to be an int *. That is, it is a pointer to a place where an int can be stored.*/
    printf(" I Stores its value at %p \n",addressOfI);
    printf(" The int stored at addressIO : %d \n",*addressOfI);

    //
    /* The second is where you read the int value that is stored at the address stored in addressOfI. (Pointers are also called references. Thus, using the pointer to read data at the address is sometimes called dereferencing the pointer.) */
    
    *addressOfI = 89;
    printf(" Now i is : %d\n",i);
    return 0;
}

