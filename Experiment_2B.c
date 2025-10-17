/*name  :   AYUSH ASHOK HALWAI
uin     :   251M032     ROLL NO.    :29
CLASS   :   F.E MECHANICAL DIV  :   f*/

#include<stdio.h>
int main()
{
    int first,last, sum=0;
    printf("enter the first number : \n");
    scanf("%d", &first);
    printf("enter a number bigger than %d: \n", first);
    scanf("%d",&last);
    for(int i= first; i<=last; i++)
    {
        if(i%2!=0)
        sum += i;
    }
    printf("sum of all the odd number between %d and %d is: %d\n",first,last,sum);
    return 0;
}

