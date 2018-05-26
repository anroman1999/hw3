#ifndef NHANSU_H
#define NHANSU_H
#include <iostream>
#include <string>
using namespace std;
class nhansu
{
protected:
	string TenNS;
	float luongcoban;
public:
	nhansu():TenNS(""),luongcoban(0){}
	nhansu(string a, float b):TenNS(a),luongcoban(b){}
	void print()
	{
		cout<<"Ho va Ten: "<<TenNS<<endl;
		cout<<"Luong co ban la: "<<luongcoban<<endl;
	}
	void settenNS(string ten)
	{
		this->TenNS=ten;
	}
	void setluong(float luong)
	{
		this->luongcoban=luong;
	}
	string gettenNS()
	{
		return this->TenNS;
	}
	float getluongcoban()
	{
		return this->luongcoban;
	}

};
/*int main()
{
	nhansu a;
	a.settenNS("Tran Van Son");
	a.setluong(30613);
	a.print();
	cout<<endl;
	return 0;
}*/
class nhanvien: public nhansu
{
private:
	float hesoluong;
public:
	nhanvien():hesoluong(0){}
	nhanvien(float x):hesoluong(x){}
	void sethesoluong(float x)
	{
		this->hesoluong=x;
	}
	float gethesoluong()
	{
		return this->hesoluong;
	}
	float tinhluong()
	{
		return luongcoban*this->hesoluong;
	}
};
class quanli:public nhansu 
{
private:
	float heSoLuong;
public:
	quanli():heSoLuong(0){}
	quanli(float y):heSoLuong(y){}
	void setHeSoLuong(float y)
	{
		this->heSoLuong=y;
	}
	float getHeSoLuong()
	{
		return this->heSoLuong;
	}
	float TinhLuong()
	{
		return luongcoban*this->heSoLuong;
	}
};