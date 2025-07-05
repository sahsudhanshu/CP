#include <stdio.h>
#include <string.h>
#include <math.h>

void boothAlogo(int a, int b, int size);
void addBin(char *a, char *b, int size);
void twosCompl(char *str, int size);
void DtoB(int n, char *str, int size);
void ASR(char *A, char *Q, char *Qn1, int size);
int BtoD(char *str, char *str1, int size);

int main()
{
    int a, b, size;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter Bit Size : ");
    scanf("%d", &size);
    boothAlogo(a, b, size);
    return 0;
}

void boothAlogo(int a, int b, int size)
{
    char Qn1 = '0';
    char A[size + 1], Q[size + 1], M[size + 1], Mn[size + 1];

    DtoB(a, M, size);
    DtoB(b, Q, size);
    memset(A, '0', size);
    A[size] = '\0';

    strcpy(Mn, M);
    twosCompl(Mn, size);

    for (int i = 0; i < size; i++)
    {
        if (Q[size - 1] == '1' && Qn1 == '0')
        {
            addBin(A, Mn, size);
        }
        else if (Q[size - 1] == '0' && Qn1 == '1')
        {
            addBin(A, M, size);
        }
        ASR(A, Q, &Qn1, size);
    }
    printf("Product is: %s%s\n", A, Q);
    printf("Product in Decimal is: %d\n", BtoD(A, Q, size));
}

void DtoB(int n, char *str, int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        str[i] = (n & 1) + '0';
        n >>= 1;
    }
    str[size] = '\0';
}

int BtoD(char *str, char *str1, int size)
{
    int n = 0;
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        n = n + pow(2,j)*(str1[i] - '0');
        j++;
    }
    for (int i = 0; i < size; i++)
    {
        n = n + pow(2,j)*(str[i] - '0');
        j++;
    }
    
    return n;
}

void twosCompl(char *str, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        str[i] = (str[i] == '0') ? '1' : '0';
    }

    char one[size + 1];
    memset(one, '0', size);
    one[size] = '\0';
    one[size - 1] = '1';

    addBin(str, one, size);
}

void addBin(char *a, char *b, int size)
{
    int carry = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        int sum = (a[i] - '0') + (b[i] - '0') + carry;
        a[i] = (sum % 2) + '0';
        carry = sum / 2;
    }
}

void ASR(char *A, char *Q, char *Qn1, int size)
{
    *Qn1 = Q[size - 1];

    for (int i = size - 1; i > 0; i--)
    {
        Q[i] = Q[i - 1];
    }
    Q[0] = A[size - 1];

    for (int i = size - 1; i > 0; i--)
    {
        A[i] = A[i - 1];
    }
    A[0] = A[1];
}
