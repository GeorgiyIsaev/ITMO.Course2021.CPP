#pragma once
#include "MyInclude.h"

/*Задание 4. Рекурсивная функция суммы ряда
Разработайте рекурсивную функцию вычисления суммы ряда
S = 5 + 10 + 15 + … + 5·n,
при n>0.*/

int SumSeries(int start, int end, int mult, int step) {
    if (end >= start) {
        return start * mult + SumSeries(start + step, end, mult, step);
    }
    else {
        return 0;
    }
}


void TestRecFunction() {

}