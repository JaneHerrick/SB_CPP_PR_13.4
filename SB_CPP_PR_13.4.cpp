
#include <iostream>
#include "Helpers.h" // Подключение библиотеки с созданной формулой 

int main()
{
    // Добавление переменной с функцией вычисления 
    int result = squareOfSum(4, 3); // вводим нужные аргументы функции
    std::cout << "Result = " << result << std::endl;
}