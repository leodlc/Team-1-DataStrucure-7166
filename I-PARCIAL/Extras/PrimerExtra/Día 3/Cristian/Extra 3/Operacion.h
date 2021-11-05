#include "NumeroCientifico.h"

NumeroCientifico<double> factorial(int num, NumeroCientifico<double> res)
{
    double tempNum = num;
    int tempNotation = res.getNotacion();
    while (num > 1)
    {
        while (tempNum >= 10)
        {
            tempNum = tempNum / 10;
            tempNotation++;
        }
        num--;
        tempNum = tempNum * num;
    }
    res.setNotacion(tempNotation);
    res.setNum(tempNum);
    return res;
}
