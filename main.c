/*name  :   AYUSH ASHOK HALWAI
uin     :   251M032     ROLL NO.    :29
CLASS   :   F.E MECHANICAL DIV  :   F*/

#include <stdio.h>

int main() {
    int number;

    
    printf("Enter an integer: ");
    scanf("%d", &number);

   
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}