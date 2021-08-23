#ifndef SMART_POINTER_MY
#define SMART_POINTER_MY

#include <iostream>

template<class T>
class Auto_ptr1
{
	T* m_ptr;
public:
	// Получаем указатель для "владения" через конструктор
	Auto_ptr1(T* ptr = nullptr)
		:m_ptr(ptr)
	{
	}

	// Деструктор позаботится об удалении указателя
	~Auto_ptr1()
	{
		delete m_ptr;
	}

	// Выполняем перегрузку оператора разыменования и оператора ->, чтобы иметь возможность использовать Auto_ptr1 как m_ptr
	T& operator*() const { return *m_ptr; }
	T* operator->() const { return m_ptr; }
};

#endif/*SMART_POINTER_MY*/
