#include <stdio.h>
int main() {    

    int number1, number2, sum;
    
    printf("Enter two integers to add: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}
