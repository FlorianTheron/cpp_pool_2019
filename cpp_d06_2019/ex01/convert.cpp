/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** convert
*/

#include <iostream>
#include <string>
#include <iomanip>

float Celsius(float temp)
{
    return ((temp * (9.0f / 5.0f)) + 32.0f);
}

float Fahrenheit(float temp)
{
    return((5.0f / 9.0f) * (temp - 32.0f));
}

void DisplayTemperature(float temp, std::string conversion)
{
    std::cout << std::right 
            << std::setw(16)
            << std::fixed
            << std::setprecision(3)
            << temp
            << std::setw(16)
            << conversion
            << std::endl;
}

int main()
{
    float temp = 0.0f;
    std::string conversion;

    std::cin >> temp >> conversion;
    if (conversion.compare("Celsius") == 0)
        DisplayTemperature(Celsius(temp), "Fahrenheit");
    if (conversion.compare("Fahrenheit") == 0)
        DisplayTemperature(Fahrenheit(temp), "Celsius");
    return 0;
}