/*
PRoblem Statement
Implement a program that encrypts messages using Caesar’s cipher, per the below.

$ ./caesar 13
plaintext:  HELLO
ciphertext: URYYB


# Specification
1) Design and implement a program, caesar, that encrypts messages using Caesar’s cipher.

2) Implement your program in a file called caesar.c in a directory called caesar.

3) Your program must accept a single command-line argument, a non-negative integer. Let’s call it k for the sake of discussion.

4) If your program is executed without any command-line arguments or with more than one command-line argument, your program should
print an error message of your choice (with printf) and return from main a value of 1 (which tends to signify an error) immediately.

5) You can assume that, if a user does provide a command-line argument, it will be a non-negative integer (e.g., 1). No need to 
check that it’s indeed numeric.

6) Do not assume that k will be less than or equal to 26. Your program should work for all non-negative integral values of k less 
than 231 - 26. In other words, you don’t need to worry if your program eventually breaks if the user chooses a value for k that’s 
too big or almost too big to fit in an int. (Recall that an int can overflow.) But, even if k is greater than 26, alphabetical 
characters in your program’s input should remain alphabetical characters in your program’s output. For instance, if k is 27, A
should not become [ even though [ is 27 positions away from A in ASCII, per asciichart.com; A should become B, since B is 27 
positions away from A, provided you wrap around from Z to A.

7) Your program must output plaintext: (without a newline) and then prompt the user for a string of plaintext (using get_string).

8) Your program must output ciphertext: (without a newline) followed by the plaintext’s corresponding ciphertext, with each
alphabetical character in the plaintext "rotated" by k positions; non-alphabetical characters should be outputted unchanged.

9) Your program must preserve case: capitalized letters, though rotated, must remain capitalized letters; lowercase letters,
though rotated, must remain lowercase letters.

10) After outputting ciphertext, you should print a newline. Your program should then exit by returning 0 from main.

*/

Program: 

#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
 int main(int argc, string argv[])
 {
     int k;
     string plaintext;
     char ciphertext[100000];
     
     if(argc==2 && atoi(argv[1])>=0)
     {
         
             k=atoi(argv[1]);
             
         
     }
     else
     {
         printf("missing or more than one command line arguments\n");
         return 1;
     }
     printf("plaintext: ");
     plaintext=get_string();
     
     for(int i=0,j=0;i<strlen(plaintext);i++,j++)
     {
         if(plaintext[i]>='a' && plaintext[i]<='z'){
             ciphertext[j]=(((plaintext[i]-97)+1)+k)%26;
             ciphertext[j]=97+ciphertext[j]-1;
         }
         else if(plaintext[i]>='A' && plaintext[i]<='Z'){
             ciphertext[j]=(((plaintext[i]-65)+1)+k)%26;
             ciphertext[j]=65+ciphertext[j]-1;
         }
         else{
             ciphertext[j]=plaintext[i];
         }
         
     }
    
     printf("ciphertext: %s\n",ciphertext);
     
     
     
     
 }
