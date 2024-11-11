#include <iostream>

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

template<typename T>
struct fraction
{
    T numerator{};
    T denumerator{};


    fraction(T numerator = 0, T denumerator = 1)
    {
        T GCD = gcd(numerator, denumerator);
        this->numerator = numerator / GCD;
        this->denumerator = denumerator / GCD;
        if (denumerator < 0)
        {
            this->numerator *= -1;
            this->denumerator *= -1;
        }
    }

    double toNumber() {
        return ((double)this->numerator / (double)this->denumerator);
    }
};

template<typename T>
fraction<T> operator+(const fraction<T>& first, const fraction<T>& second)
{
    const T LCM = lcm(first.denumerator, second.denumerator);
    fraction<T> result(first.numerator * (LCM / first.denumerator)
        + second.numerator * (LCM / second.denumerator), LCM);
    return result;
}

template<typename T>
fraction<T>& operator+=(fraction<T>& first, const fraction<T>& second)
{
    first = first + second;
    return first;
}

template<typename T>
fraction<T>  operator-(const fraction<T>& first, const fraction<T>& second)
{
    const T LCM = lcm(first.denumerator, second.denumerator);
    fraction<T>  result((first.numerator * (LCM / first.denumerator))
        - (second.numerator * (LCM / second.denumerator)), LCM);
    return result;
}

template<typename T>
fraction<T>& operator-=(fraction<T>& first, const fraction<T>& second)
{
    first = first - second;
    return first;
}

template<typename T>
fraction<T>  operator*(const fraction<T>& first, const fraction<T>& second)
{
    fraction<T>  result(first.numerator * second.numerator, first.denumerator * second.denumerator);
    return result;
}
template<typename T>
fraction<T>& operator*=(fraction<T>& first, const fraction<T>& second)
{
    first = first * second;
    return first;
}

template<typename T>
fraction<T>  operator/(const fraction<T>& first, const fraction<T>& second)
{
    fraction<T>  result(first.numerator * second.denumerator, first.denumerator * second.numerator);
    return result;
}


template<typename T>
fraction<T>& operator/=(fraction<T>& first, const fraction<T>& second)
{
    first = first / second;
    return first;
}


template<typename T>
void print(const T& object)
{
    std::cout << object.numerator;
    if (1 != object.denumerator)
        std::cout << '/' << object.denumerator << '\n';
}

int main()
{
    fraction<int> first(2, 4);
    fraction<long> test(3, 4);

    std::cout << test.toNumber();

    print(first);
}