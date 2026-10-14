#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1/FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double c;
			c = g(0, 1);
			Assert::AreEqual(c, 0.0, 0.0001);
		}
	};
}