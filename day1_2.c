#include <stdio.h>
#include <limits.h>
int main() {
    int a=10,b=20;
    printf("Arithmetic operators");
    printf("%d\n",a-b);
    printf("%d\n",a*b);
    printf("%d\n",a+b);
    printf("%d\n",a/b);
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    age>18?printf("Eligible to vote"): printf("Not eligible ");

    //Relational
    printf("%d",age>0 && age>18);
    //conditional
    printf("%d",5>10);
    //Bitwise
    printf("%d",6>>1);
}