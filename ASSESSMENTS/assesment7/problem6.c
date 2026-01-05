int disp_sum_all_digits(int n)
{
    int sum = 0;

    while (n != 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }

    return sum;
}
