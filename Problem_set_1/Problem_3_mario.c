/*
Problem:

Implement a program that prints out a half-pyramid of a specified height, per the below.

$ ./mario
Height: 5
    ##
   ###
  ####
 #####
######

$ ./mario
Height: 3
  ##
 ###
####

# Specification
1) Write, in a file called mario.c in your ~/workspace/pset1/ directory, a program that recreates this half-pyramid using hashes (#) 
for blocks.

2) To make things more interesting, first prompt the user for the half-pyramid’s height, a non-negative integer no greater than 23.
(The height of the half-pyramid pictured above happens to be 8.)

3)If the user fails to provide a non-negative integer no greater than 23, you should re-prompt for the same again.

4) Then, generate (with the help of printf and one or more loops) the desired half-pyramid.

5)Take care to align the bottom-left corner of your half-pyramid with the left-hand edge of your terminal window.

*/
Program:
#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int height,space,hash=2;
    do
        {
            printf("Height: ");
            height=get_int(); 
        }while((height<0) || (height>23));
    
    
    space=height-1;
    
    for(int i=0;i<height;i++)
    {
        for(int k=0;k<space;k++)
        {
            printf(" ");
        }
        
        space--;
        
        for(int j=0;j<hash;j++)
        {
            printf("#");
        }
        
        hash++;
        
        printf("\n");
    }
  
}
