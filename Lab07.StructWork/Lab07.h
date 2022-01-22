#pragma once
#include "MyInclude.h"

/*���������� 1. ���������� ��������� Distance*/
struct Distance
{
	int feet;
	double inches;
	void ShowDist()
	{
		std::cout << feet << "\'-" << inches << "\"\n";
	}
};
Distance AddDist(const Distance& d1, const Distance& d2)
{
	Distance d;
	d.feet = d1.feet + d2.feet;
	d.inches = d1.inches + d2.inches;
	if (d.inches >= 12.0)
	{
		d.inches -= 12.0;
		d.feet++;
	}
	return d;
}
Distance InputDist()
{
	Distance d;
	std::cout << "\n������� ����� �����: ";
	std::cin >> d.feet;
	std::cout << "������� ����� ������: ";
	std::cin >> d.inches;
	return d;
}
void ShowDist(Distance d)
{
	std::cout << d.feet << "\'-" << d.inches << "\"\n";
}

void Task01() {
	/*���������� 1. ���������� ��������� Distance*/
	Distance d1 = InputDist();
	Distance d2 = { 1, 6.25 };
	Distance d3 = AddDist(d1, d2);
	ShowDist(d1);
	ShowDist(d2);
	ShowDist(d3);
	d1.ShowDist();
	d2.ShowDist();
	d3.ShowDist();
}

void Task03() {
	/*���������� 3. ������������� ������� ��������*/
	int n;
	std::cout << "������� ������ ������� ���������� ";
	std::cin >> n;
	Distance* masDist = new Distance[n];
	for (int i = 0; i < n; i++)
	{
		masDist[i] = InputDist();
	}
	for (int i = 0; i < n; i++)
	{
		ShowDist(masDist[i]);
	}
	delete[] masDist;
}

/*���������� 4. ���������� �������� ��� ������������� ������*/
void printTupleOfThree(std::tuple<std::string, int, double> t)
{
	std::cout << "("
		<< std::get<0>(t) << ", "
		<< std::get<1>(t) << ", "
		<< std::get<2>(t) << ")" << std::endl;
}


void Task04() {
	/*���������� 4. ���������� �������� ��� ������������� ������*/
	std::vector<std::string> v1{ "one", "two", "three", "four", "five", "six" };
	std::vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
	std::vector<double> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };


	auto t0 = make_tuple(v1[0], v2[0], v3[0]);
	printTupleOfThree(t0);
}

void MainLab07() {
	

	/*������������ ������� 7. ���������� �������� � �������� */
	/*���������� 1. ���������� ��������� Distance*/
	//Task01();

	/*���������� 2. �������� ��������� � ������� �� ������*/
	//Distance AddDist(Distance d1, Distance d2)
	//Distance AddDist(const Distance &d1, const Distance &d2)

	/*���������� 3. ������������� ������� ��������*/
	Task03();

	/*���������� 4. ���������� �������� ��� ������������� ������*/


}