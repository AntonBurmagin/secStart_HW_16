#include <iostream>

int main () {
    // 16.6.1 speedometer
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


    return 0;
}