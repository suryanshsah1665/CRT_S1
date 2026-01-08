//1.
#include <float.h>
#include <stdio.h>
#include <limits.h>
int main() {
    //Integer dataypes
    int a = 10;
    printf("Integer data type value: %d",a);
    printf("\t""Minimun data type value: %d",INT_MIN);
    printf("\t""Maximun data type value: %d",INT_MAX);
    //float datatypes
    float b = 3.14;
    printf("\n""Float data type value: %f",b);
    printf("\t""Minimun data type value: %f",FLT_MIN);
    printf("\t""Maximun data type value: %f",FLT_MAX);
    //double float datatype
    double c = 3.1432;
    printf("\n""Double data type value: %f",c);
    printf("\t""Minimun data type value: %f",DBL_MIN);
    printf("\t""Maximun data type value: %f",DBL_MAX);
    //charater datatype
    char d = 'A';
    printf("\n""Character data type value: %c",d);
    printf("\t""Minimun data type value: %c",CHAR_MIN);
    printf("\t""Maximun data type value: %c",CHAR_MAX);
}