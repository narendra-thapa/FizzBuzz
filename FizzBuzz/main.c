//
//  main.c
//  FizzBuzz
//
//  Created by Narendra Thapa on 2015-11-25.
//  Copyright © 2015 Narendra Thapa. All rights reserved.
//
//  Program Description:
//  This program prints numbers from 1 to 100. For the multiples of 3, it prints "Fizz" instead of the number and for the multiples of 5, it prints "Buzz" instead of the number. For numbers which are multiples of both 3 and 5, it prints "FizzBuzz"

#include <stdio.h>

int divide(int a, int b)                                // this function returns remainder after division
{
    return a%b;
}

int main(int argc, char **argv)
{
    int i;                                              // initialising counter variable
    for (i=1;i<=100;i++)                                // for loop to increment 'i' from 1 to 100
    {
        int remainder3 = divide(i,3);                   // function call for remainder value after division by 3
        int remainder5 = divide(i,5);                   // function call for remainder value after division by 5
        
        if (remainder5 == 0 && remainder3 == 0 )        // checks if remainder value is 0 for both division
        {
            printf("FizzBuzz\n");                       // prints "FizzBuzz" instead of integer value
        }
        else if (remainder5 == 0 && remainder3 != 0)    // checks if remainder value is 0 for division by 5 only
        {
            printf("Buzz\n");                           // prints "Buzz" instead of integer value
        }
        else if (remainder5 != 0 && remainder3 ==0)     // checks if remainder value is 0 for division by 3 only
        {
            printf("Fizz\n");                           // prints "Fizz" instead of integer value
        }
        else
        {
            printf("%d\n", i);                          // prints integer value
        }    
    }
    return 0;
}

