//Q1. WAP to check whether a given is Armstrong or not.


#include <stdio.h>
#include <math.h>
int main() {
    int num, num2, remainder, n3 = 0;
    float result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
 num2 = num;
    while (num2 != 0) {
       num2 /= 10;
        ++n3;
    }
    num2 = num;
    while (num2 != 0) {
        remainder = num2 % 10;
        result += pow(remainder, n3);
      num2 /= 10;
    }
    if ((int)result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}


//Q2. WAP to read two integers and print their HCF (Highest Common Factor).

#include <stdio.h>
int findHCF(int n1, int n2) {
    while num2 != 0) {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    return num1;
}

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    int hcf = findHCF(num1, num2);
    printf("HCF of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}