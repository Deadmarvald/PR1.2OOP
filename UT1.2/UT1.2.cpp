#include "pch.h"
#include "CppUnitTest.h"
#include "../PR1.2/Matrix.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT12
{
	TEST_CLASS(UT12)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Matrix t;

			unsigned int rowNo = 10;
			unsigned int colNo = 10;
			float a = 10;

			t.Init(rowNo, colNo);
			t.Create();

			Assert::AreEqual(a, t.Max());
		}
	};
}