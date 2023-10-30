#include <iostream>
#include "FibonaciPrinter.h"
#include "PalindromeChecker.h"
#include <list>

int main()
{
    //Фибоначи
    FibonaciPrinter fibonaci_printer;

    long long n;
    std::cout << "Enter amount of Fibonaci numbers: ";
    std::cin >> n;

    fibonaci_printer.setAmountOfNumbers(n);
    fibonaci_printer.calculateFirstNFibonaciNumbers();
    fibonaci_printer.printFibonaciNumbers();

    //Палиндром
    PalindromeChecker palindrome_checker;

    std::cout << "\nEnter number to check palindrome or not: ";
    std::cin >> n;

    palindrome_checker.setNumber(n);
    palindrome_checker.checkNumber();
    palindrome_checker.printAnswer();

    //Развёртывание List итератором
    std::list<int> llong_list;
    
    for (int i = 0; i < 20; i++)
    {
        llong_list.push_back(i);
    }

    std::list<int>::iterator iter = llong_list.begin();

    std::cout << "\nList: ";
    for (iter; iter != llong_list.end(); iter++)
        std::cout << *iter << " ";

    return 0;
}