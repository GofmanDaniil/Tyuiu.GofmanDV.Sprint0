// Tyuiu.GofmanDV.Sprint0.Task6.V3.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

class Service3 : public ISprint0Task6 
{
	virtual int Calculate(float a, int b) override 
	{
		return (5 + (a * b / 3));
	}
};
