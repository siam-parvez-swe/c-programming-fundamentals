#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: \n");
    scanf("%d", &marks);
    if( marks>= 80)
    {
        printf("You got A+ grade\n");
    }
    else if(marks >= 70)
    {   
        printf("You got A grade\n");
    }
    else if(marks >= 60)
    {
        printf("You got A- grade\n");
    }
    else if(marks >= 50)
    {
        printf("You got B grade\n");
    }
    else if(marks >= 40)
    {
        printf("You got C grade\n");
    }
    else if(marks >= 33)
    {
        printf("You got D grade\n");
    }
    return 0;
}