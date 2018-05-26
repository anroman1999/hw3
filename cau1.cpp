#ifndef HINH_H
#define HINH_H
#include <iostream>
using namespace std;
class Hinh
{
protected:
	float chieudai;
	float chieurong;
public:
	Hinh():chieudai(0),chieurong(0){}
	Hinh(float a, float b):chieudai(a),chieurong(b){}
	void setchieudai(float a)
	{
		this->chieudai=a;
	}
	void setchieurong(float b)
	{
		this->chieurong=b;
	}
	float getchieudai()const
	{
		return this->chieudai;
	}
	float getchieurong()const
	{
		return this->chieurong;
	}
	float chuvi()const
	{
		return (this->chieudai+this->chieurong)*2;
	}
	float dientich()
	{
		return this->chieurong*this->chieudai;
	}
};