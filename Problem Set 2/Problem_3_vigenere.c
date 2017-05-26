/*

Problem Statement:
Implement a program that encrypts messages using Vigenère’s cipher, per the below.

$ ./vigenere ABC
plaintext:  HELLO
ciphertext: HFNLP



# Specification
1) Design and implement a program that encrypts messages using Vigenère’s cipher.

2) Implement your program in a file called vigenere.c in a directory called vigenere.

3) Your program must accept a single command-line argument: a keyword, k, composed entirely of alphabetical characters.

4) If your program is executed without any command-line arguments, with more than one command-line argument, or with one 
command-line argument that contains any non-alphabetical character, your program should print an error (of your choice) 
and exit immediately, with main returning 1 (thereby signifying an error).

5) Otherwise, your program must proceed to prompt the user for a string of plaintext, p, (as by a prompt for plaintext:) 
which it must then encrypt according to Vigenère’s cipher with k, ultimately printing the result (prepended with ciphertext:
and ending with a newline) and exiting, with main returning 0.

6) With respect to the characters in k, you must treat A and a as 0, B and b as 1, …​ , and Z and z as 25.

7) Your program must only apply Vigenère’s cipher to a character in p if that character is a letter. All other characters 
(numbers, symbols, spaces, punctuation marks, etc.) must be outputted unchanged. Moreover, if your code is about to apply
the jth character of k to the ith character of p, but the latter proves to be a non-alphabetical character, you must wait
to apply that jth character of k to the next alphabetical character in p; you must not yet advance to the next character in k.

8) Your program must preserve the case of each letter in p.
*/



Program: 

#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
 int main(int argc, string argv[])
 {

     string plaintext,key ;
     char ciphertext[100000];
     int j=0;
     int k[100000];
     
     if(argc==2)
     {
        for(int i=0;i<strlen(argv[1]);i++)
     {
         if((argv[1][i]>='a' && argv[1][i]<='z') ||(argv[1][i]>='A' && argv[1][i]<='Z')){
         continue;}
         else{
             printf("No numeric input allowed\n");
         return 1;
             
         }
     }
        key=argv[1];
     }    
             
             
         
     
     else
     {
         printf("missing or more than one command line arguments\n");
         return 1;
     }
     for(int i=0;i<strlen(key);i++)
     {
         if(key[i]>='a' && key[i]<='z'){
         k[i]=key[i]-97;
     }
        if(key[i]>='A' && key[i]<='Z'){
         k[i]=key[i]-65;
     }
     }
   
     
     printf("plaintext: ");
   
     plaintext=get_string();
     
     for(int i=0;i<strlen(plaintext);i++)
     {              
                if(plaintext[i]>='a' && plaintext[i]<='z'){
                  ciphertext[i]=(plaintext[i]-97+k[j])%26;
                ciphertext[i]=97+ciphertext[i];
                 j++;
                }
                
                else if (plaintext[i]>='A' && plaintext[i]<='Z'){
             ciphertext[i]=(plaintext[i]-65+k[j])%26;
                ciphertext[i]=65+ciphertext[i];
                
                     j++;
                }
                else{
                    ciphertext[i]=plaintext[i];
                }
                 
                  if(j==strlen(key)){
                      j=0;
                  }
                 // printf("ciphertext: %c\n",k[i]);
     }
    printf("ciphertext: %s\n",ciphertext);
     return 0;
 }
     
