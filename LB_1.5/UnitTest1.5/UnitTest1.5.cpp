#include "pch.h"
#include "CppUnitTest.h"
#include "../Pair.h"
#include "D:\Project\OOP\LB1\LB_1.5\Pair.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest15
{
	TEST_CLASS(UnitTest15)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair a;
			int c = a.Suma_1(2, 4);
			Assert::AreEqual(c, 6);
		}
	};
}
