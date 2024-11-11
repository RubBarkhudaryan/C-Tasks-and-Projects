/*
//example 1 

#include <iostream>

int main() {
    // Lambda that adds two integers
    auto add = [](int a, int b) {
        return a + b;
    };

    int result = add(3, 4);  // Call the lambda
    std::cout << "3 + 4 = " << result << std::endl;

    return 0;
}




//exmaple 2

#include <iostream>

int main() {
    int x = 10;
    int y = 20;

    // Capture x by value, y by reference
    auto lambda = [x, &y]() {
        std::cout << "x: " << x << ", y: " << y << std::endl;
        y = 30;  // Can modify y because it's captured by reference
    };

    lambda();  // Invoke the lambda

    std::cout << "After lambda, y: " << y << std::endl;

    return 0;
}




//example 3

#include <iostream>

int main() {
    // Lambda with specified return type
    auto multiply = [](double a, double b) -> double {
        return a * b;
    };

    std::cout << "5.5 * 4.5 = " << multiply(5.5, 4.5) << std::endl;

    return 0;
}





//example 4

#include <iostream>
#include <vector>
#include <algorithm>  // for std::sort

int main() {
    std::vector<int> numbers = {5, 2, 9, 1, 5, 6};

    // Sort in ascending order using lambda
    std::sort(numbers.begin(), numbers.end(), [](int a, int b) {
        return a < b;
    });

    std::cout << "Sorted numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}





//example 5

#include <iostream>

int main() {
    int count = 0;

    // Capture count by value and allow modification with mutable
    auto increment = [count]() mutable {
        count++;
        std::cout << "Count inside lambda: " << count << std::endl;
    };

    increment();  // Outputs: Count inside lambda: 1
    increment();  // Outputs: Count inside lambda: 2

    // Outside the lambda, count remains unchanged
    std::cout << "Count outside lambda: " << count << std::endl;

    return 0;
}





//example 6

#include <iostream>
#include <functional>

// A function that accepts a callback
void doWork(std::function<void(int)> callback) {
    for (int i = 0; i < 5; ++i) {
        callback(i);  // Invoke the callback function
    }
}

int main() {
    // Lambda as a callback
    doWork([](int value) {
        std::cout << "Callback called with value: " << value << std::endl;
    });

    return 0;
}

*/