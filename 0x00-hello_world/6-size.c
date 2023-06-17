#include <stdio.h>
/**
 * main - A program that prints the size of an input
 * Return: 0 (Success)
 */ 
int  main(void)
{
int a;
float b;
char c;
long int d;
long long int e;

printf("Size of a char :%lu byte(s) \n ",sizeof(c));
printf("Size of an int :%lu byte(s)\n ",sizeof(a));
printf("Size of a long int :%lu byte(s)\n  ",sizeof(d));
printf("Size of a long long int :%lu byte(s)\n  ",sizeof(e));


return(0);
}
