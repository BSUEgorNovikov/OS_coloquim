#pragma once
#include <vector>
#include <iostream>

class FibonaciPrinter
{
	long long amount_of_numbers;
	std::vector<long long> fibonaci_nums;
	bool anyException;
public:
	void setAmountOfNumbers(long long n)
	{
		this->amount_of_numbers = n;
	}

	long long getAmountOfNumbers()
	{
		return this->amount_of_numbers;
	}

	std::vector<long long> getFibonaciNums()
	{
		return fibonaci_nums;
	}

	std::vector<long long> calculateFirstNFibonaciNumbers()
	{
		std::vector<long long> result;

		try
		{
			if (amount_of_numbers < 0)
			{
				anyException = true;
				throw "Amount is not natural.";
			}

			for (int i = 0; i < amount_of_numbers; i++)
			{
				if (i == 0 || i == 1)
				{
					result.push_back(1);
				}
				else
				{
					if (result[i - 2] + result[i - 1] < 0)
					{
						anyException = true;
						throw 0;
					}

					long long tmp = result[i - 2] + result[i - 1];
					result.push_back(tmp);
				}
			}
		}
		catch (const char* error)
		{
			std::cout << error << "\n";
		}
		catch (int code)
		{
			std::cout << "Calculated number(s) out of long long border.";
		}

		this->fibonaci_nums = result;
		return result;
	}

	void printFibonaciNumbers()
	{
		if (!anyException)
		{
			std::cout << "First " << this->amount_of_numbers << " Fibonaci numbers:\n";
			for (int i = 0; i < fibonaci_nums.size(); i++)
				std::cout << fibonaci_nums[i] << "  ";
			std::cout << "\n";
		}
	}
};

