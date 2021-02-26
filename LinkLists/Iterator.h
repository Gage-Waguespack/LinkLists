#pragma once

#include "Node.h"

template<typename T>
class Iterator
{
public:
	Iterator();
	Iterator(Node<T>* node);
	Iterator<T> operator++();
	Iterator<T> operator--();
	const bool operator == (const Iterator<T>& iter);
	const bool operator != (const Iterator<T>& iter);
	T operator * ();

private:
	Node<T>* m_current;
};

//base constructor
template<typename T>
inline Iterator<T>::Iterator()
{
}

//overloaded constructor that takes in a node (to point to)
template<typename T>
inline Iterator<T>::Iterator(Node<T>* node)
{
	m_current = node;
}

//overloads "++" operator to move to the next node
template<typename T>
inline Iterator<T> Iterator<T>::operator++()
{
	m_current = m_current->next;
	return *this;
}

//overloads "--" operator to move to the previous node
template<typename T>
inline Iterator<T> Iterator<T>::operator--()
{
	m_current = m_current->previous;
	return *this;
}

//overloads the "==" operator to set the iterator equals to a specific node
template<typename T>
inline const bool Iterator<T>::operator==(const Iterator<T>& iter)
{
	return iter.m_current;
}

//overloads the "!=" operator to make sure the iterator cannot equal a specified node (also used to check in if statements)
template<typename T>
inline const bool Iterator<T>::operator!=(const Iterator<T>& iter)
{
	return iter.m_current != m_current;
}

//overloads the "*" operator to de-reference the iterator
template<typename T>
inline T Iterator<T>::operator*()
{
	return m_current->data;
}