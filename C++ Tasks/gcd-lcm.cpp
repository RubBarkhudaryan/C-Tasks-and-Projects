template <typename T>
T gcd(T num1, T num2)
{
    if (0 == num2)
        return num1;
    return gcd(num2, num1 % num2);
}

template <typename T>
T lcm(T num1, T num2)
{
    return num1 * (num2 / gcd(num1, num2));
}