#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void binary(int n, int bits, int *binary);
void binaryAdd(int *bin1, int *bin2, int *result, int bits);
int decimal(int *binary, int bits);

int main()
{
    int a, b, bits;
    char choice;
    do
    {
        printf("First Input Number: ");
        scanf("%d", &a);
        printf("Second Input Number: ");
        scanf("%d", &b);
        printf("Enter Number of Bits: ");
        scanf("%d", &bits);

        int *bin1 = (int *)calloc(bits, sizeof(int));
        int *bin2 = (int *)calloc(bits, sizeof(int));
        int *result = (int *)calloc(bits, sizeof(int));

        binary(a, bits, bin1);
        binary(b, bits, bin2);
        binaryAdd(bin1, bin2, result, bits);

        printf("\n%d-bit binary equivalent of %d: ", bits, a);
        for (int i = 0; i < bits; i++)
        {
            printf("%d", bin1[i]);
        }
        printf("\n%d-bit binary equivalent of %d: ", bits, b);
        for (int i = 0; i < bits; i++)
        {
            printf("%d", bin2[i]);
        }
        printf("\nBinary Addition Result: ");
        for (int i = 0; i < bits; i++)
        {
            printf("%d", result[i]);
        }

        int decimal_sum = decimal(result, bits);
        printf("\nDecimal Addition Result: %d\n", decimal_sum);

        free(bin1);
        free(bin2);
        free(result);

        printf("\nDo you want to add more numbers (Y/N)? ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');

    return 0;
}

void binary(int n, int bits, int *binary)
{
    for (int i = bits - 1; i >= 0; i--)
    {
        binary[i] = n & 1;
        n >>= 1;
    }
}
void binaryAdd(int *bin1, int *bin2, int *result, int bits)
{
    int carry = 0;
    for (int i = bits - 1; i >= 0; i--)
    {
        int sum = bin1[i] + bin2[i] + carry;
        result[i] = sum % 2;
        carry = sum / 2;
    }
}
int decimal(int *binary, int bits)
{

    int decimal = 0;
    for (int i = 0; i < bits; i++)
    {
        decimal = (decimal << 1) | binary[i];
    }
    return decimal;
}