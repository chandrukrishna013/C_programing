int disp_count_sum14()
{
    int num, temp, digit, sum, count = 0;

    for (num = 1; num < 100000; num++)
    {
        temp = num;
        sum = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
        }

        if (sum == 14)
        {
            count++;
        }
    }

    return count;
}
