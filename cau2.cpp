#ifndef HCN_H
#define HCN_H
#include <iostream>
#include "cau1.cpp"
using namespace std;
class DIEM
{
protected:
	float hoanhdo;
	float tungdo;
public:
	DIEM():hoanhdo(0),tungdo(0){}
	DIEM(float x, float y):hoanhdo(x),tungdo(y){}
	void sethoanhdo(float x)
	{
		this->hoanhdo=x;
	}
	void settungdo(float y)
	{
		this->tungdo=y;
	}
	float gethoanhdo()const
	{
		return this->hoanhdo;
	}
	float gettungdo()const
	{
		return this->tungdo;
	}

};
class HCN:public Hinh,public DIEM
{
private:
	DIEM DT;
public:
	HCN():Hinh(0,0){}
	HCN(float a, float b):Hinh(a,b){}
	void setDTx(float x)
	{
		DT.sethoanhdo(x);
	}
	void setDTy(float y)
	{
		DT.settungdo(y);
	}
	float getDTx()const
	{
		return DT.gethoanhdo(x);
	}
	float getDTy()const
	{
		 return DT.gettungdo(y);
	}
	HCN operator +(HCN t)
	{
		HinhCN kq(this->dai + t.getdai(), this->rong + t.getrong());
		kq.setDTx(DT.getX());
		kq.setDTy(DT.getY());
		return kq;
	}
};