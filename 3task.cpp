#include <iostream>
#include <cmath>

int sumOfOddNumbers(int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += 2 * i + 1;
    }
    return sum;
}

double yearsToReachAmount(double S, double N) {
    double interestRate = 0.20;
    double amount = S;
    int years = 0;
    while (amount < N) {
        amount *= (1 + interestRate);
        ++years;
    }
    return years;
}

void findNumbersWithSquareSum(int k, int g) {
    for (int num = 1; num < k; ++num) {
        int sumOfDigits = 0;
        int temp = num;
        while (temp > 0) {
            sumOfDigits += temp % 10;
            temp /= 10;
        }
        if (sumOfDigits * sumOfDigits == g) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int choice;
    do {
        std::cout << "Choose a task:" << std::endl;
        std::cout << "1. Find sum of odd numbers" << std::endl;
        std::cout << "2. Calculate years to reach a certain amount" << std::endl;
        std::cout << "3. Find numbers with square sum of digits" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        switch (choice) {
            case 1: {
                int n;
                std::cout << "Enter n: ";
                std::cin >> n;
                int result = sumOfOddNumbers(n);
                std::cout << "Sum of odd numbers: " << result << std::endl;
                break;
            }
            case 2: {
                double S, N;
                std::cout << "Enter S: ";
                std::cin >> S;
                std::cout << "Enter N: ";
                std::cin >> N;
                double result = yearsToReachAmount(S, N);
                std::cout << "Years to reach amount: " << result << std::endl;
                break;
            }
            case 3: {
                int k, g;
                std::cout << "Enter k: ";
                std::cin >> k;
                std::cout << "Enter g: ";
                std::cin >> g;
                findNumbersWithSquareSum(k, g);
                break;
            }
            case 0:
                std::cout << "Exiting program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Try again." << std::endl;
                break;
        }
    } while (choice != 0);

    return 0;
}
