/*
Problem Statement:
Implement a program that, given a person’s name, prints a person’s initials, per the below.

$ ./initials
Regulus Arcturus Black
RAB

# Specification
1) Design and implement a program, initials, that, given a person’s name, prints a person’s initials.

2)Implement your program in a file called initials.c in a directory called initials.

3)Your program should prompt a user for their name using get_string to obtain their name as a string.

4)You may assume that the user’s input will contain only letters (uppercase and/or lowercase) plus single spaces between words. 
You don’t need to worry about names like Joseph Gordon-Levitt, Conan O’Brien, or David J. Malan!

5) Your program should print the user’s initials (i.e., the first letter of each word in their name) with no spaces or periods,
followed by a newline (\n).
*/


Program:
#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>

int main(void)
{
    string name;
    char initial[5];
    int j=0;
    int read_next_character=0;
    name=get_string();

    
    
    
    for(int i=0;i<strlen(name);i++)
    {
        if(i==0){
            read_next_character=1;
        }
        if(name[i]==' '){
            read_next_character=1;
            continue;
        }
        if(read_next_character==1)
        {
            
                initial[j]=toupper(name[i]);
                 j++;
                
                
    
                
            }
            read_next_character=0;
           
        }
        printf("%s\n",initial);
        
    }
        
   
