//https://www.iostream.vn/article/giai-thuat-de-quy
int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1); // Linear Recursion
}
