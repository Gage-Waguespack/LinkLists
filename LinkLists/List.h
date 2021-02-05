#pragma once

#include "Iterator.h"

template<typename T>
class List
{
public:
	List();
	List(List<T>&);
	~List();
	void destroy();
	Iterator<T> begin();
	Iterator<T> end();
	bool contains(const T& object);
	void pushFront(const T& value);
	void pushBack(const T& value);
	bool insert(const T& value, int index);
	bool remove(const T& value);
	const void print();
	void initialize();
	bool isEmpty const;
	bool getData(Iterator<T>& iter, int index);
	int getLength()const;
	List<T>& operator = (const List<T>& otherList);
	void sort();

private:
	Node<T> m_first;
	Node<T> m_last;
	int m_nodeCount;
};

template<typename T>
inline List<T>::List()
{

}

template<typename T>
inline List<T>::List(List<T>&)
{

}

template<typename T>
inline List<T>::~List()
{

}

template<typename T>
inline void List<T>::destroy()
{

}

template<typename T>
inline Iterator<T> List<T>::begin()
{

	return Iterator<T>();
}

template<typename T>
inline Iterator<T> List<T>::end()
{

	return Iterator<T>();
}

template<typename T>
inline bool List<T>::contains(const T& object)
{

	return false;
}

template<typename T>
inline void List<T>::pushFront(const T& value)
{

}

template<typename T>
inline void List<T>::pushBack(const T& value)
{

}

template<typename T>
inline bool List<T>::insert(const T& value, int index)
{

	return false;
}

template<typename T>
inline bool List<T>::remove(const T& value)
{

	return false;
}

template<typename T>
inline const void List<T>::print()
{

	return void();
}

template<typename T>
inline void List<T>::initialize()
{

}

template<typename T>
inline bool List<T>::getData(Iterator<T>& iter, int index)
{

	return false;
}

template<typename T>
inline int List<T>::getLength() const
{

	return 0;
}

template<typename T>
inline List<T>& List<T>::operator=(const List<T>& otherList)
{

	// TODO: insert return statement here
}

template<typename T>
inline void List<T>::sort()
{
	for (int i = 0; i < getLength(); i++)
	{
		for (int j = getLength() - 1; j > i; j--)
		{
			if (m_items[j] < m_items[j - 1])
			{
				int temp = m_items[j];
				m_items[j] = m_items[j - 1];
				m_items[j - 1] = temp;
			}
		}
	}
}
