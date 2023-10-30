#pragma once
#include <iostream>

class PalindromeChecker
{
	long long number;
	bool isParindrome;
public:
	void setNumber(long long n)
    {
        this->number = n;
    }

	bool checkNumber()
    {
        long long reverse_number = 0;
        long long number_copy = number;
        while (number_copy)
        {
            reverse_number = 10 * reverse_number + number_copy % 10;
            number_copy /= 10;
        }

        if (number == reverse_number)
            isParindrome = true;
        else
            isParindrome = false;

        return isParindrome;
    }

	void printAnswer()
    {
        if (isParindrome)
            std::cout << "Number " << number << " is a palindrome.\n";
        else
            std::cout << "Number " << number << " is not a palindrome.\n";
    }
};

