#include "Lab08.StudentCPP.h"
// ��������� ����� ��������
void StudentCPP::set_name(std::string student_name)
{
	StudentCPP::name = student_name;
}
// ��������� ����� ��������
std::string StudentCPP::get_name()
{
	return StudentCPP::name;
}
// ��������� ������� ��������
void StudentCPP::set_last_name(std::string student_last_name)
{
	StudentCPP::last_name = student_last_name;
}
// ��������� ������� ��������
std::string StudentCPP::get_last_name()
{
	return StudentCPP::last_name;
}
// ��������� ������������� ������
void StudentCPP::set_scores(int scores[])
{
	for (int i = 0; i < 5; ++i) {
		StudentCPP::scores[i] = scores[i];
	}
}
// ��������� �������� �����
void StudentCPP::set_average_score(double ball)
{
	StudentCPP::average_score = ball;
}
// ��������� �������� �����
double StudentCPP::get_average_score()
{
	return StudentCPP::average_score;
}