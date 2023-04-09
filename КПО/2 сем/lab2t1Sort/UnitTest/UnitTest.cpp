#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab2t1Sort\lab2t1Sort.cpp"
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
			int n;
			n = 5;
			string* str = new string[n]{ "Ob11", "Ob10" ,"Ob1110","Ob1100","Ob1111" };
			sort(n, str);
			string str1[5] = { "Ob10","Ob11","Ob1100","Ob1110","Ob1111" };
			for (int i = 0; i < n; i++) 
			{
				Assert::AreEqual(str[i], str1[i]);
			}
		}
		TEST_METHOD(TestMethod2)
		{
			int n, k=0;
			n = 6;
			string* str = new string[n]{ "Ob1101", "Ob101" ,"Ob1110","Ob100101","Ob11101", "Ob10"};
			sort(n, str);
			string str1[6] = { "Ob10","Ob100101", "Ob101", "Ob1101" ,"Ob1110", "Ob11101" };
			for (int i = 0; i < n; i++) 
			{
				if (str[i] == str1[i])
				{
					k++;
				}
			}
			Assert::AreEqual(k, 6);
		}
		TEST_METHOD(TestMethod3)
		{
			int n;
			n = 4;
			string* str = new string[n]{ "Ob1001", "Ob0010", "Ob010011", "Ob1110"};
			sort(n, str);
			string str1[5] = { "Ob0010", "Ob010011", "Ob1001", "Ob1110"};
			for (int i = 0; i < n; i++) 
			{
				Assert::AreEqual(str[i], str1[i]);
			}
		}
		TEST_METHOD(TestMethod4)
		{
			int n, k=0;
			n = 7;
			string* str = new string[n]{ "Ob1001", "Ob01001", "Ob0001011", "Ob011111", "Ob000101", "Ob1001", "Ob0001001" };
			sort(n, str);
			string str1[7] = { "Ob1001", "Ob01001", "Ob0001011", "Ob011111", "Ob000101", "Ob1001", "Ob0001001" };
			for (int i = 0; i < n; i++)
			{
				if (str[i]==str1[i])
				k++;
			}
			Assert::AreNotEqual(k, 7);
		}
		TEST_METHOD(TestMethod5)
		{
			int n;
			n = 5;
			string* str = new string[n]{ "Ob10","Ob11","Ob1100","Ob1110","Ob1111" };
			sort(n, str);
			string str1[5] = { "Ob10","Ob11","Ob1100","Ob1110","Ob1111" };
			for (int i = 0; i < n; i++)
			{
				Assert::AreEqual(str[i], str1[i]);
			}
		}
	};
}
