#include <iostream>
#include "shablon.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(nullptr));
	int* mass{};
	const int size = 15;
	shablon<int> a(mass, size);
	a.set_mass();
	a.print_mass();
	a.maks();
	a.min();
	a.bubbleSort();
	a.print_mass();
	/*cout<<a.BinarySearch(5);*/
	a.zamena(5, 6);
	a.print_mass();















	return 0;
}
