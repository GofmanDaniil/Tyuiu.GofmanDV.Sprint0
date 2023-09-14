// Tyuiu.GofmanDV.Sprint0.Task5.V3.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service1 :public ISprint0Task5
{
	virtual int Zadacha(float a, float b, float c) = 0
	{

		return a + b + c;

	};

};