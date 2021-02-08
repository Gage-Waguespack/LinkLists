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
	if (Node.next)
	m_current = Node.next;
	return Iterator<T>(m_current);
}

//overloads "--" operator to move to the previous node
template<typename T>
inline Iterator<T> Iterator<T>::operator--()
{
	if(Node.previous)
	m_current = Node.previous;
	return Iterator<T>(m_current);
}

//overloads the "==" operator to set the iterator equals to a specific node
template<typename T>
inline const bool Iterator<T>::operator==(const Iterator<T>& iter)
{
	m_current = iter;
	return false;
}

//overloads the "!=" operator to make sure the iterator cannot equal a specified node (also used to check in if statements)
template<typename T>
inline const bool Iterator<T>::operator!=(const Iterator<T>& iter)
{
	m_current != iter;
	return false;
}

//overloads the "*" operator to de-reference the iterator
template<typename T>
inline T Iterator<T>::operator*()
{
	return T();
}
