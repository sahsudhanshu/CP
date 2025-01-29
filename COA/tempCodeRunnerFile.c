int decimal(int *binary, int bits)
{
    int decimal = 0;
    int is_negative = binary[0];

    for (int i = 0; i < bits; i++)
    {
        decimal = (decimal << 1) | binary[i];
    }

    if (is_negative)
    {
        decimal -= (1 << bits);
    }

    return decimal;
}