#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GofmanDV.Sprint0.Task6.V3.Lib/Tyuiu.GofmanDV.Sprint0.Task6.V3.Lib.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:

		TEST_METHOD(TestMethod3)
		{
			ISprint0Task6* data = new Service3();
			float a = 7;
			int b = 6;
			int res;

			res = data->Calculate(a, b);

			Assert::AreEqual(19, res);
		}
	};
}