#pragma once
#include "MyInclude.h"

class Point {
private:
	int x;
	int y;
public:
	Point(int x1, int y1) : x(x1), y(y1) {}
	Point() { RandomPoint(-10, 10); }	
	void CinPoint(int i = 0) {
		std::cout << "������� x � y ��� ����� " << i << " >> ";
		Point point;
		std::cin >> x >> y;
	}
	void RandomPoint(int start, int end) {
		x = GetRandomInt(start, end);
		y = GetRandomInt(start, end);
	}
	/*��� �� �� �����*/
	double LengthPoints(Point p) {	
		return sqrt(pow((x - p.x), 2) + pow((y - p.y), 2));
	}
	/*�����  �� ������*/
	double ToCenter() const {	
		return sqrt(pow((x - 0), 2) + pow((y - 0), 2));
	}
	/*������� ������ � ���� � �����*/
	std::string StrInfo() {
		std::string str = "{" + std::to_string(x) + ": " +
			std::to_string(y) + "}";
		return str;
	}
	/*��������� >*/
	bool operator>(const Point& b) {
		if(this->ToCenter() > b.ToCenter())
			return true;		
		return false;
	}
	/*��������� <*/
	bool operator<(const Point& b) {
		if (this->ToCenter() < b.ToCenter())
			return true;
		return false;
	}

	friend std::ostream& operator<< (std::ostream& out, const Point& point);
};

std::ostream& operator<< (std::ostream& out, const Point& point){
	out << "(" << point.x << ": " << point.y << ")";
	return out;
}