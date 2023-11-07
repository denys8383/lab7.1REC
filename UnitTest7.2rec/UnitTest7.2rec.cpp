#include "pch.h"
#include "CppUnitTest.h"
#include "../Project7.1rec/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest72rec
{
	TEST_CLASS(UnitTest72rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int rowCount = 7;
			const int colCount = 9;
			int** a = new int* [rowCount];
			for (int i = 0; i < rowCount; i++)
				a[i] = new int[colCount];

			int S = 0;
			int k = 0;
			Calc(a, rowCount, colCount, S, k, 0, 0);
			Assert::AreEqual(0, S);
			Assert::AreEqual(0, k);
			for (int i = 0; i < rowCount; i++) {
				delete[] a[i];
			}
			delete[] a;
		}
	};
}
