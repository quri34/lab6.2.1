#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab6.2.1\lab6.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest621
{
	TEST_CLASS(UnitTest621)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[4] = { 1, 2, 3, 4 };
			int min = Min(a, 4);
			Assert::AreEqual(1, min);
		}
	};
}
