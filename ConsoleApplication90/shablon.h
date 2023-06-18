#pragma once
#include<iostream>
using namespace std;
template <typename T>
class shablon
{
	T* mass;
	int size{};
public:
	shablon() {};
	shablon(T* mas, int size) :mass{ mas }, size{ size } {
		mass = new T[size];
		cout << "начало работы, выделена память"<<endl;
	}

	void set_mass() {
		for (int i{}; i < size; ++i) {
			mass[i] = rand()%15;
		}
		cout << "массив создан!" << endl;
	}
	void print_mass() {
		for (int i{}; i < size; ++i) {
			cout << mass[i] << " ";
		}
		cout << endl;
	}
	void maks() {
			int a_max{};
			for (int i{}; i < size; ++i) {
				if (mass[i] > a_max)
					a_max = mass[i];
			}
			cout<<"максимальное число: " << a_max << endl;
	}
	void min() {
		int a_min{size};
		for (int i{}; i < size; ++i) {
			if (mass[i] < a_min)
				a_min = mass[i];
		}
		cout << "минимальное число: " << a_min << endl;
	}
	void bubbleSort()
	{
		T tmp;

		for (int i = 0; i < size - 1; ++i) // i - номер прохода
		{
			for (int j = 0; j < size - 1; ++j) // внутренний цикл прохода
			{
				if (mass[j + 1] < mass[j])
				{
					tmp = mass[j + 1];
					mass[j + 1] = mass[j];
					mass[j] = tmp;
				}
			}
		}
	}

	int BinarySearch( int key)
	{
		int left = 0, right = size, midle;
		while (left <= right)                       // Гоняем в цикле;
		{
			midle = left + (right - left) / 2;
			if (key < mass[midle]) right = midle - 1;
			else if (key > mass[midle]) left = midle + 1;
			else return midle;
		}
		return -1;
		cout << endl;

	}


	void zamena(int ind, T zam) {
		if (!((ind-1) > size) && !((ind-1) < 0)) {
			mass[ind-1] = zam;

		}
		else
			cout << "неверный индекс";
	}











};

