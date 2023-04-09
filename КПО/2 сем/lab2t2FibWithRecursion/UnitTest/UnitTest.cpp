#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab2t2FibWithRecursion\lab2t2FibWithRecursion.cpp"
#include <functional>
#include <assert.h>
#include <fstream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 5;
			float seconds = TimeFib(n);
			Assert::IsTrue(seconds <= 5);
		}
		TEST_METHOD(TestMethod2)
		{
			int n = 10;
			long long int F = Fib(n);
			Assert::AreEqual(F, 55);
		}
		TEST_METHOD(TestMethod3)
		{

		}
		TEST_METHOD(TestMethod4)
		{

		}
		TEST_METHOD(TestMethod5)
		{

		}
	};
}
