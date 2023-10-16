#include "ArrayValueCalculator.h"
#include "ArrayDataException.h"
#include "ArraySizeException.h"
int ArrayValueCalculator::doCalc(char arr[4][4], int cols, int rows)
{
	try
	{
		if (cols != 4 || rows != 4)
		{
			throw ArraySizeException("Incorrect Size");
		}
		int intArr[4][4];
		int sum = 0;
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (arr[i][j] > 57 || arr[i][j] < 48)
				{
					throw ArrayDataException("Incorrect char", i, j);
				}
				std::cout << arr[i][j] << " ";
				intArr[i][j] = int(arr[i][j]) - 48;
				sum += intArr[i][j];
			}
			std::cout << std::endl;
		}
		return sum;
	}
	catch (ArraySizeException exception)
	{
		std::cout << exception.GetMessage();
		return -1;
	}
	catch (ArrayDataException exception)
	{
		std::cout << exception.GetMessage();
		std::cout << "\narr[" << exception.getRow() << "]" << "[" << exception.getRow() << "]" << std::endl;
		return -2;
	}
}
