#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1_iter/6.1_iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 5;
			int t[n] = {2, 4, 5, 7, 8};
			int l;
			l = sum(t, n, 0);
			Assert::AreEqual(l, 0);

		}
	};
}
