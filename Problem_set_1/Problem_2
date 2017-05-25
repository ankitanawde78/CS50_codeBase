/*
Problem Statement:

Implement a program that reports a user’s water usage, converting minutes spent in the shower to bottles of drinking water.

$ ./water
Minutes: 1
Bottles: 12

$ ./water
Minutes: 10
Bottles: 120

#Specification
1)Write, in a file called water.c in your ~/workspace/pset1/ directory, a program that prompts the user for the length of his 
or her shower in minutes (as a positive integer) and then prints the equivalent number of bottles of water (as an integer)

2)For simplicity, you may assume that the user will input a positive integer, so no need for error-checking (or any loops) this time!
And no need to worry about overflow!

*/

Program:
#include<cs50.h>
#include<stdio.h>
int main(void){
    int n;
   
    do{
        printf("Minutes: ");
        n=get_int(); 
    }while(n<0);
  
    printf("Bottles: %i\n",n*12);
    
}
