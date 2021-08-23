#ifndef SMART_POINTER_MY
#define SMART_POINTER_MY

#include <iostream>

template<class T>
class Auto_ptr1
{
	T* m_ptr;
public:
	// �������� ��������� ��� "��������" ����� �����������
	Auto_ptr1(T* ptr = nullptr)
		:m_ptr(ptr)
	{
	}

	// ���������� ����������� �� �������� ���������
	~Auto_ptr1()
	{
		delete m_ptr;
	}

	// ��������� ���������� ��������� ������������� � ��������� ->, ����� ����� ����������� ������������ Auto_ptr1 ��� m_ptr
	T& operator*() const { return *m_ptr; }
	T* operator->() const { return m_ptr; }
};

#endif/*SMART_POINTER_MY*/
