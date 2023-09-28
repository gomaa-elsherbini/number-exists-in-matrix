#include <iostream>
#include <iomanip>
using namespace std;


int RandomNubers(int From, int To)
{
	return rand() % (To - From + 1) + From;
}
int readNumber()
{
	int num;
	cout << "Enter Number To check?\n";
	cin >> num;
	return num;
}

void fill3X3MatrixWithRandomNumbers(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			arr[i][x] = RandomNubers(1, 100);
		}
	}
}

void printMatrix3X3(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			cout << setw(3) << arr[i][x] << "	";
			//printf("  %d ", arr[i][x]);
		}
		cout << endl;
	}
	cout << endl;
}

bool IsNumberExistsInMatrix(int arr[3][3], int Rows, int Colos, int num)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			if (arr[i][x] == num)
				return 1;
		}
	}
	return 0;
}

void printResult(int arr1[3][3], int Rows, int Colos, int num)
{
	if (IsNumberExistsInMatrix(arr1, Rows, Colos, num))
		cout << "   Yes it is there.\n";
	else
		cout << "   No it is not there.\n";
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3], num;

	//int arr[3][3] = { {2,0,0},{0, 2, 0},{0, 0, 2} };
	fill3X3MatrixWithRandomNumbers(arr, 3, 3);

	cout << "  The Matrix: \n";
	printMatrix3X3(arr, 3, 3);

	num = readNumber();

	printResult(arr, 3, 3,num);





	return 0;
}



