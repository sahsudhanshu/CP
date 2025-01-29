#include <stdio.h>
#include <stdlib.h>

void binaryGen(int n, int bits, char *binary)
{
    for (int i = bits - 1; i >= 0; i--)
    {
        binary[i] = (n & 1) ? '1' : '0';
        n >>= 1;
    }
    binary[bits] = '\0';
}

void bad(char *binary1, char *binary2, char *binarySum, int bits)
{
    int carry = 0;
    for (int i = bits - 1; i >= 0; i--)
    {
        int bit1 = binary1[i] - '0';
        int bit2 = binary2[i] - '0';
        int sum = bit1 + bit2 + carry;
        binarySum[i] = (sum % 2) + '0';
        carry = sum / 2;
    }
    binarySum[bits] = '\0';
}

int main()
{
    int a, b, bits;
    char choice;

    do
    {
        printf("First number: ");
        scanf("%d", &a);
        printf("Second number: ");
        scanf("%d", &b);
        printf("Enter number of bits: ");
        scanf("%d", &bits);

        char binary1[bits + 1], binary2[bits + 1], binarySum[bits + 1];
        binaryGen(a, bits, binary1);
        binaryGen(b, bits, binary2);

        bad(binary1, binary2, binarySum, bits);

        printf("%d-bit binary equivalent of %d: %s\n", bits, a, binary1);
        printf("%d-bit binary equivalent of %d: %s\n", bits, b, binary2);
        printf("Binary addition of %d and %d: %s\n", a, b, binarySum);
        printf("Decimal Addition:%d \n", a + b);

        printf("Do you want to add more numbers (Input either Y (Yes) or N (No)): ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');

    return 0;
}