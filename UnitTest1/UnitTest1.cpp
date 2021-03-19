#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba2.1/Money.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money b(5, 6);
			int test = b.summa();
			Assert::AreEqual(30, test);

		}
	};
}
