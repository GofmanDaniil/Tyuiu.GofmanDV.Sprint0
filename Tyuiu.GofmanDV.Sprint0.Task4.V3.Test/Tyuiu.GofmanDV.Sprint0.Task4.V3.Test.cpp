#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GofmanDV.Sprint0.Task4.V3.Lib/Tyuiu.GofmanDV.Sprint0.Task4.V3.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Init
			ISprint0Task4* date = new Service();
			int a = 15;
			int b = 2;
			int c = 4;
			int d = 8;
			int e;

			//run
			e = date->Calculate(a, b, c, d);

			//Valid
			Assert::AreEqual(9, e);

		}
	};
}
