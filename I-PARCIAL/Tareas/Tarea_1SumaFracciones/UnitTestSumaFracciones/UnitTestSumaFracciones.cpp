#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestSumaFracciones
{
	TEST_CLASS(UnitTestSumaFracciones)
	{
	public:
		
		TEST_METHOD(add1)
		{
			//Arrange
			int frac1 = 1;
			int frac2 = 1;
		
			int resultadoEsperado = 1;

			//Act
			int actual = Op.suma(frac1, frac2);

			Assert::AreEqual(resultadoEsperado, actual);
			
		}
	};
}
