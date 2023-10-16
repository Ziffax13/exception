#include <iostream>
#include "ArrayValueCalculator.h"

using namespace std;

int main()
{
	char arr[4][4];
    srand(time(0));
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            arr[i][j] = rand() % 9 + 48;
        }
    }
    cout << ArrayValueCalculator::doCalc(arr, 4, 4);
}