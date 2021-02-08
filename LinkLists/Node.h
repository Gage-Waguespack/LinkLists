#pragma once

template<typename T>
class Node
{
public:
	Node();
	Node(T value);
	Node<T>* next;
	Node<T>* previous;
	T data;
};

//base constructor
template<typename T>
inline Node<T>::Node()
{

}

//overloaded constructor that takes in a valule to set as the node
template<typename T>
inline Node<T>::Node(T value)
{
	previous = T*;
	data = value;
	next = T*;
}