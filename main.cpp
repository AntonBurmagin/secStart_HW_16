#include <iostream>

double calculatorAction(std::string str, int i) {
    double res = 0;
    double firstNum = std::stod(str.substr(0, i));
    double secondNum = std::stod(str.substr(i + 1, str.length() - i - 1));
    if (str[i] == '+') {
        res = firstNum + secondNum;
    } else if (str[i] == '-') {
        res = firstNum - secondNum;
    } else if (str[i] == '/') {
        res = firstNum / secondNum;
    } else if (str[i] == '*') {
        res = firstNum * secondNum;
    }
    return res;
}

int main () {
    // 16.6.1 speedometer
    /*
    char speed_str[5];
    double speed_value = 0, precision = 0.1, delta;
    do {
        std::cout << "Speed delta: ";
        std::cin >> delta;
        speed_value = (speed_value + delta <= 0 ? 0 : speed_value + delta);
        speed_value = (speed_value <= 150 ? speed_value : 150);
        std::sprintf(speed_str, "%.1f", speed_value);
        std::cout << "Speed: " << speed_str << std::endl;
    } while (speed_value >= precision || speed_value <= -precision);
    std::cout << "You've stopped!" << std::endl;
    */

    // 16.6.2 double constructor
    /*
    std::string number;
    int integer, fraction;
    while (true) {
        std::cout << "Input integer and fractional parts of number: ";
        std::cin >> integer >> fraction;
        number = std::to_string(integer) + "." + std::to_string(fraction);
        std::cout << "String: " << number << std::endl;
        std::cout << "Your double number is " << std::stod(number) << std::endl;
    }
    */

    // 16.6.3 calculator
    /*
    std::string str;
    std::string action = "+-/*";
    int ind = -1;
    while (true) {
        std::cout << "Expression: ";
        std::cin >> str;
        for(auto i : action) {
            if(str.find(i) != -1) {
                ind = str.find(i);
                break;
            }
        }
        if (ind != -1) {
            std::cout << str << " = " << calculatorAction(str, ind) << std::endl;;
        } else {
            std::cout << "Incorrect expression!" << std::endl;
        }
        
    }
    */

    return 0;
}