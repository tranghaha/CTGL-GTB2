
//https://www.iostream.vn/article/giai-thuat-de-quy-A103BL
int ackerman(int m, int n)
{
    if (m == 0)
        return (n + 1);
    else
        if (n == 0)
            return ackerman(m - 1, 1);
        else
            return ackerman(m - 1, ackerman(m, n - 1)); // Nested Recursion
}
