#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GofmanDV.Sprint0.Task5.V3.Lib/Tyuiu.GofmanDV.Sprint0.Task5.V3.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task5* date = new Service1();
			double a = 5.45;
			double b = 2.5;
			int c = 3;
			double d;
			d = date->Zadacha(a, b, c);

			Assert::AreEqual(10.95, d);
		}
	};
}