#include "pch.h"
#include "CppUnitTest.h"
#include "../Book.h"
#include "D:\Project\OOP\LB1\LB_1.2\Book.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest12
{
	TEST_CLASS(UnitTest12)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Book h;
			bool a = h.setYear(0,2000);
			Assert::AreEqual(a, true);

		}
	};
}
