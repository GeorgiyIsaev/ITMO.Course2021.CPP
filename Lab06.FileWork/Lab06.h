#pragma once
#include "MyInclude.h"

void MainLab06() {
	/*������������ ������� 6. ������ � �������*/
	/*���������� 1. ������ � ������ ������ �� ��������� �����*/
	double sum = 0;
	int const n = 100;
	double nums[n];
	for (int i = 0; i < n; i++)
	{
		nums[i] = (rand() % 100);
	}	
	/*������� ������ <fstream>*/
	std::ofstream out("test", std::ios::out | std::ios::binary);
	if (!out) {
		std::cout << "���� ������� ����������\n";		
	}
	/*�������� ����� � �����*/
	out.write((char*)nums, sizeof(nums));
	/*������� �����*/
	out.close();

	/// /// ///
	/*������� ����*/
	std::ifstream in("test", std::ios::in | std::ios::binary);
	if (!in) {
		std::cout << "���� ������� ����������";		
	}
	/*������� ������ �� �����*/
	in.read((char*)&nums, sizeof(nums));
	int k = sizeof(nums) / sizeof(double);
	for (int i = 0; i < k; i++)
	{
		sum = sum + nums[i];
		std::cout << nums[i] << ' ';
	}
	std::cout << "\nsum = " << sum << std::endl;
	in.close(); //������� �����!
}
