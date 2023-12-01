#include <iostream>

int main() {
    int dayNumber;
    std::cout << "Enter the day number (1-5): ";
    std::cin >> dayNumber;
    if (dayNumber < 1 || dayNumber > 5) {
        std::cout << "Invalid day number. Please enter a number between 1 and 5." << std::endl;
        return 1; //типу помилка
    }

    // a) switch
    std::cout << "Using switch:" << std::endl;
    switch (dayNumber) {
        case 1:
            std::cout << "1. IT\n2. IT\n3. IT" << std::endl;
            break;
        case 2:
            std::cout << "1. ПРАВО\n2. IT\n3. IT" << std::endl;
            break;
        case 3:
            std::cout << "1. English\n2. English\n3. English" << std::endl;
            break;
        case 4:
            std::cout << "1. Math\n2. Math\n3. philosophy" << std::endl;
            break;
        case 5:
            std::cout << "1. Mathematics\n2. Physics\n3. Chemistry" << std::endl;
            break;
        default:
            break;
    }

    // b) if
    std::cout << "Using if:" << std::endl;
    if (dayNumber == 1) {
        std::cout << "1. IT\n2. IT\n3. IT" << std::endl;
    } else if (dayNumber == 2) {
        std::cout << "1. ПРАВО\n2. IT\n3. IT" << std::endl;
    } else if (dayNumber == 3) {
        std::cout << "1. English\n2. English\n3. English" << std::endl;
    } else if (dayNumber == 4) {
        std::cout << "1. Math\n2. Math\n3. philosophy" << std::endl;
    } else if (dayNumber == 5) {
        std::cout << "1. Mathematics\n2. Physics\n3. Chemistry" << std::endl;
    return 0;
}

