#pragma once

#include <iostream>
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
	bool isEmpty() const;
	bool getData(Iterator<T>& iter, int index);
	int getLength()const;
	List<T>& operator = (const List<T>& otherList);
	void sort();

private:
	Node<T> m_first;
	Node<T> m_last;
	int m_nodeCount;
};

//The base constructor
template<typename T>
inline List<T>::List()
{
	m_first = new Node<T>();
	m_last = m_first;
	m_nodeCount = 0;
}

//An overload of the base constructor that takes in a list
template<typename T>
inline List<T>::List(List<T>& list)
{
	this = list;
}

//A destructor that destroys the list and all of the things it points to
template<typename T>
inline List<T>::~List()
{
	destroy();
	delete m_first; 
	delete m_last;
}

//A function that should destroys all the nodes in the list
template<typename T>
inline void List<T>::destroy()
{
	Iterator<T> iter = Iterator<T>(m_first);
	for (int i = 0; i < m_nodeCount; i++)
	{
		if (iter.m_current->previous)
			delete iter.m_current->previous;
		if (!iter.m_current->next)
			delete iter.m_current;
		if (iter.m_current != m_last)
			iter++;
	}
	m_first = new Node<T>();
	m_last = m_first;
	m_nodeCount = 0;
}

//returns an iterator pointing to the first node in the list
template<typename T>
inline Iterator<T> List<T>::begin()
{
	Iterator<T>()->m_first;
	return Iterator<T>();
}

//returns the next item after the last node in the list
template<typename T>
inline Iterator<T> List<T>::end()
{
	Iterator<T>()->m_last;
	return Iterator<T>();
}

//checks to see if the given item is in the list
template<typename T>
inline bool List<T>::contains(const T& object)
{
	List<T>* node = m_first;
	while (node != nullptr) {
		if (node->data != object)
			node = node->next;
		else
			return true;
	}
	return false;
}

//adds a new node to the beginning of the list
template<typename T>
inline void List<T>::pushFront(const T& value)
{
	if (value.previous = nullptr || value.next = nullptr)
	{
		m_first = value;
		m_last = value;
		value.previous = nullptr;
		value.next = nullptr;
	}
	value.previous = nullptr;
	value.next = m_first;
	m_first = value;
}

//adds a new node to the end of the list
template<typename T>
inline void List<T>::pushBack(const T& value)
{
	value.previous = m_last;
	value.next = nullptr;
	m_last = value;
}

//adds a new node at the given index
template<typename T>
inline bool List<T>::insert(const T& value, int index)
{
	Node* temp = newNode(value);
	temp->next = *m_first;
	(*m_first)->previous = temp;
	(*m_first) = temp;
	return false;
}

//remove all nodes with the given value
template<typename T>
inline bool List<T>::remove(const T& value)
{
	Node* temp = newNode(value);
	temp->next = *m_first;
	(*m_first)->m_current = temp;
	(*m_first) = temp;
	return false;
}

//prints the values for all the nodes
template<typename T>
inline const void List<T>::print()
{
	for (Iterator<int> iter = begin(); iter != end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}
}

//set the default values for the first node pointer, the last node pointer, and the node count
template<typename T>
inline void List<T>::initialize()
{
	m_first.previous = nullptr;
	m_last.next = nullptr;
	getLength();
}

//returns whether or not the list has any nodes in it
template<typename T>
inline bool List<T>::isEmpty() const
{
	bool tempBool;
	if (m_first < begin)
	{
		tempBool = true;
	}
	else
	{
		tempBool = false;
	}
	
	return tempBool;
}

//sets the given iterator to point to a node at the given index
template<typename T>
inline bool List<T>::getData(Iterator<T>& iter, int index)
{
	bool tempBool = false;
	auto iter = List.begin();

	while (iter != List.end())
	{
		iter++;

		if (iter = index)
		{
			tempBool = true;
			iter++;
		}
	}

	return tempBool;
}

//returns the amount of nodes in the list
template<typename T>
inline int List<T>::getLength() const
{
	int j = 0;
	for (Iterator i = m_first; i < m_last; i++)
	{
		j++;
	}
	return j;
}

//overloads "=" to set a list to be able to set two seperate lists equal to eachother
template<typename T>
inline List<T>& List<T>::operator=(const List<T>& otherList)
{

	// TODO: insert return statement here
}

//sorts the list 
template<typename T>
inline void List<T>::sort()
{
	
}
