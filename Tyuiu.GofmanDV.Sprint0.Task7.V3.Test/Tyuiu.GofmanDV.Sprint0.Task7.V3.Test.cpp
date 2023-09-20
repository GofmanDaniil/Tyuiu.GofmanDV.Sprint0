#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GofmanDV.Sprint0.Task7.V3.Lib/Tyuiu.GofmanDV.Sprint0.Task7.V3.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Init
			ISprint0Task7* date = new Service();
			int a = 12345;
			int b = 4;
			bool r;

			//run
			r = date->Rezalt(a, b);

			//Valid
			Assert::AreEqual(true, r);
		}
	};
}
