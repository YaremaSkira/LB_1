#include "pch.h"
#include "CppUnitTest.h"
#include "../../Cursor.h"
#include "D:\Project\OOP\LB1\LB_1.1\Cursor.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest11
{
	TEST_CLASS(UnitTest11)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Cursor h;
				h.Init(2, 3);
				int test = h.Init(2,3);
				Assert::AreEqual(test, 1);
		}
	};
}
