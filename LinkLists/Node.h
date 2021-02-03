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

template<typename T>
inline Node<T>::Node()
{
	previous = T*;
	data = T*;
	next = T*;
}

template<typename T>
inline Node<T>::Node(T value)
{
	previous = T*
	data = value;
	next = T*
}