// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;

void printarray(int arg[], int length) {
	for (int n = 0; n<length; ++n)
		std::cout << arg[n] << ' ';
	cout << '\n';
}

int main(int argc, char* argv[])
{
	std::cout << "Hello world" << std::endl;

	int n = 10;
	int *ciccio = &n;
	while (n>0)
	{
		cout << n-- << ", ";
		if (n == 3)
		{
			cout << "countdown aborted!" << endl << endl;
			break;
		}
		
	}

	int firstarray[] = { 5, 10, 15 };
	int secondarray[] = { 2, 4, 6, 8, 10 };
	printarray(firstarray, 3);
	printarray(secondarray, 5);

	int i, j;
	int matr[3][5];
	i = 0;
	do
	{
		//firstarray[i]* Secondarray[TUTTO]
		int a = firstarray[i];
		// a*secondarray[j]
		for (int j = 0; j < 5; ++j)
		{
			matr[i][j] = a*secondarray[j];
		}
		i++;
	} while (i < 3);

	return EXIT_SUCCESS;
}

