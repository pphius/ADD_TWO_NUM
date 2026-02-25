/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editors.
 */

/* 
 * File:   newmain.c
 * Author: phiuspetrus
 *
 * Created on August 23, 2025, 3:05 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num1;
    int num2;
    int sum;
    printf("Enter num0 and num2\n");
    scanf("%d %d",&num1, &num2);

   sum = num1 + num2;
    printf("Sum of %d and %d is %d", num1, num2,
           sum);
    
    return (EXIT_SUCCESS);
}

