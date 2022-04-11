#pragma once
#include <iostream>
using namespace std;
class Pair
{
	protected:
		//��������
		int first;
		int second;
	public:
		//�������������
		virtual ~Pair();
		//������������
		Pair(void);
		Pair(int, int);
		Pair(const Pair&);
		//���������
		int Get_first() { return first; }
		int Get_second() { return second; }
		//������������
		void Set_first(int);
		void Set_second(int);
		//���������� ������������ 
		Pair& operator=(const Pair&);
		//���������� ���������� ���������
		friend bool operator> (const Pair& p1, const Pair& p2);
		friend bool operator<= (const Pair& p1, const Pair& p2);
		friend bool operator< (const Pair& p1, const Pair& p2);
		friend bool operator>= (const Pair& p1, const Pair& p2);
		friend bool operator== (const Pair& p1, const Pair& p2);
		friend bool operator!= (const Pair& p1, const Pair& p2);
		//���������� ����� ������
		friend istream& operator>> (istream& in, Pair&p);
		friend ostream& operator<< (ostream& out, const Pair& p);
};

