/*
Problem:

Implement a program that calculates the minimum number of coins required to give a user change.

$ ./greedy
O hai! How much change is owed?
0.41
4

# Specification
1) Write, in a file called greedy.c in your ~/workspace/pset1/ directory, a program that first asks the user how much change is owed and 
then spits out the minimum number of coins with which said change can be made.

2) Use get_float from the CS50 Library to get the user’s input and printf from the Standard I/O library to output your answer.
Assume that the only coins available are quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢).

3) We ask that you use get_float so that you can handle dollars and cents, albeit sans dollar sign. In other words, 
if some customer is owed $9.75 (as in the case where a newspaper costs 25¢ but the customer pays with a $10 bill), assume 
that your program’s input will be 9.75 and not $9.75 or 975. However, if some customer is owed $9 exactly, assume that your program’s 
input will be 9.00 or just 9 but, again, not $9 or 900. Of course, by nature of floating-point values, your program will likely work 
with inputs like 9.0 and 9.000 as well; you need not worry about checking whether the user’s input is "formatted" like money should be.

4) You need not try to check whether a user’s input is too large to fit in a float. Using get_float alone will ensure that the user’s
input is indeed a floating-point (or integral) value but not that it is non-negative.

5) If the user fails to provide a non-negative value, your program should re-prompt the user for a valid amount again and again until 
the user complies.

6) Incidentally, so that we can automate some tests of your code, we ask that your program’s last line of output be only the
minimum number of coins possible: an integer followed by \n.

*/

Program:

#include<stdio.h>
#include<math.h>
#include<cs50.h>
int main(void)
{
    float change_dollar,change_cent;
    int coin_cnt=0;
    do
        {
            printf("O hai! How much change is owed?\n");
            change_dollar=get_float(); 
        }while(change_dollar<0);
        
        change_cent=change_dollar*100;
        change_cent= round(change_cent);
        
        while(change_cent>=25){
            change_cent=change_cent-25;
            coin_cnt++;
        }
        while(change_cent>=10){
            change_cent=change_cent-10;
            coin_cnt++;
        }
        while(change_cent>=5){
            change_cent=change_cent-5;
            coin_cnt++;
        }
        while(change_cent>=1){
            change_cent=change_cent-1;
            coin_cnt++;
        }
        printf("%i\n",coin_cnt);
}
