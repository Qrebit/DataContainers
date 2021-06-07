#pragma once
#include<iostream>
using namespace std;
template<typename T>class Iterator;
template<typename T>class ForwardList;
#define tab "\t"
template<typename T>
class Element
{
	T Data;		//�������� ��������
	Element<T>* pNext;	//��������� �� ��������� �������
	static int count; // Static ���������������� ������ ��� ������
public:
	Element(T Data, Element<T>* pNext = nullptr);
	~Element();
	friend class ForwardList<T>;
	friend class Iterator<T>;
};
