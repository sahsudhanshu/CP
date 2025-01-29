#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void binary(int num, int bits, char *bin) {
    int i;
    for (i = bits - 1; i >= 0; i--) {
        bin[i] = (num & 1) + '0';
        num >>= 1;
    }
    bin[bits] = '\0';
}

void binarySub(char *bin1, char *bin2, char *result, int bits) {
    int borrow = 0;
    for (int i = bits - 1; i >= 0; i--) {
        int bit1 = bin1[i] - '0';
        int bit2 = bin2[i] - '0';
        int diff = bit1 - bit2 - borrow;

        if (diff < 0) {
            diff += 2;
            borrow = 1;
        } else {
            borrow = 0;
        }

        result[i] = diff + '0';
    }
    result[bits] = '\0';
}

int decimal(char *bin, int bits) {
    int num = 0;
    int is_negative = (bin[0] == '1');

    for (int i = 0; i < bits; i++) {
        num = (num << 1) + (bin[i] - '0');
    }

    if (is_negative) {
        num -= (1 << bits);
    }

    return num;
}

int main() {
    while (1) {
        int num1, num2, bits;
        printf("\nBinary Subtraction of Signed Numbers\n");
        printf("First Input Number: ");
        scanf("%d", &num1);
        printf("Second Input Number: ");
        scanf("%d", &num2);
        printf("Enter no. of bits to present signed number: ");
        scanf("%d", &bits);

        char bin1[bits + 1], bin2[bits + 1], result[bits + 1];

        binary(num1, bits, bin1);
        binary(num2, bits, bin2);

        printf("\n%d-bit binary equivalent of %d: %s\n", bits, num1, bin1);
        printf("%d-bit binary equivalent of %d: %s\n", bits, num2, bin2);

        binarySub(bin1, bin2, result, bits);

        int decimal_result = decimal(result, bits);

        printf("\nBinary Subtraction of %d and %d: %s\n", num1, num2, result);
        printf("Decimal subtraction: %d\n", decimal_result);

        char choice;
        printf("\nDo you want to subtract more numbers (Y/N)? ");
        scanf(" %c", &choice);
        if (choice != 'Y' && choice != 'y') {
            break;
        }
    }
    return 0;
}
