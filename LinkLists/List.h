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

}

//An overload of the base constructor that takes in a list
template<typename T>
inline List<T>::List(List<T>&)
{

}

//A destructor that destroys the list and all of the things it points to
template<typename T>
inline List<T>::~List()
{

}

//A function that should destroys all the nodes in the list
template<typename T>
inline void List<T>::destroy()
{

}

//returns an iterator pointing to the first node in the list
template<typename T>
inline Iterator<T> List<T>::begin()
{

	return Iterator<T>();
}

//returns the next item after the last node in the list
template<typename T>
inline Iterator<T> List<T>::end()
{

	return Iterator<T>();
}

//checks to see if the given item is in the list
template<typename T>
inline bool List<T>::contains(const T& object)
{

	return false;
}

//adds a new node to the beginning of the list
template<typename T>
inline void List<T>::pushFront(const T& value)
{

}

//adds a new node to the end of the list
template<typename T>
inline void List<T>::pushBack(const T& value)
{

}

//adds a new node at the given index
template<typename T>
inline bool List<T>::insert(const T& value, int index)
{

	return false;
}

//remove all nodes with the given value
template<typename T>
inline bool List<T>::remove(const T& value)
{

	return false;
}

//prints the values for all the nodes
template<typename T>
inline const void List<T>::print()
{

	return void();
}

//set the default values for the first node pointer, the last node pointer, and the node count
template<typename T>
inline void List<T>::initialize()
{

}

//returns whether or not the list has any nodes in it
template<typename T>
inline bool List<T>::isEmpty() const
{

	return false;
}

//sets the given iterator to point to a node at the given index
template<typename T>
inline bool List<T>::getData(Iterator<T>& iter, int index)
{

	return false;
}

//returns the amount of nodes in the list
template<typename T>
inline int List<T>::getLength() const
{

	return 0;
}

//overloads "=" to set a list to be able to set two seperate lists equal to eachother
template<typename T>
inline List<T>& List<T>::operator=(const List<T>& otherList)
{

	// TODO: insert return statement here
}

//sorts the list utilizing the bubble sort method
template<typename T>
inline void List<T>::sort()
{

}
