#include "pch.h"
#include "CppUnitTest.h"
#include "../OS_coloq_codePart/FibonaciPrinter.h"
#include "../OS_coloq_codePart/PalindromeChecker.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests1
{
	TEST_CLASS(UnitTests1)
	{
	public:
		
		TEST_METHOD(TestPalindrome1)
		{
			PalindromeChecker pc;
			pc.setNumber(1234567654321);
			Assert::IsTrue(pc.checkNumber());
		}
		TEST_METHOD(TestPalindrome2)
		{
			PalindromeChecker pc;
			pc.setNumber(123456124213525);
			Assert::IsFalse(pc.checkNumber());
		}
		TEST_METHOD(TestPalindrome3)
		{
			PalindromeChecker pc;
			pc.setNumber(0);
			Assert::IsTrue(pc.checkNumber());
		}

		TEST_METHOD(TestFibonaci1)
		{
			FibonaciPrinter fp;
			fp.setAmountOfNumbers(4);
			std::vector<long long> res = fp.calculateFirstNFibonaciNumbers();

			Assert::IsTrue(res[3] == res[2] + res[1]);
		}
		TEST_METHOD(TestFibonaci2)
		{
			FibonaciPrinter fp;
			fp.setAmountOfNumbers(10);
			std::vector<long long> res = fp.calculateFirstNFibonaciNumbers();

			Assert::IsTrue(res[6] == res[5] + res[4]);
		}
		TEST_METHOD(TestFibonaci3)
		{
			FibonaciPrinter fp;
			fp.setAmountOfNumbers(0);
			std::vector<long long> res = fp.calculateFirstNFibonaciNumbers();

			Assert::IsTrue(res.empty());
		}
	};
}
