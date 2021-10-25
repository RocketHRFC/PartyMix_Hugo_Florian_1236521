#pragma once
#include "Cancion.h"
#include <string>
#include <iostream>

using namespace System;
using std::string;

template <typename T>

class Pila
{
	struct Node
	{
		T* item;
		Node* next;

		Node(T* item)
		{
			this->item = item;
			this->next = nullptr;
		}
	};

	Node* Head;

	int size = 0;

public:

	int getSize() {
		return this->size;
	}

	bool isEmpty()
	{
		return this->size == 0;
	}

	void Push(T* item);
	T* Pop();

	

};

template<typename T>
inline void Pila<T>::Push(T * item)
{
	Node* node = new Node(item);
	node->item = item;
	node->next = Head;
	Head = node;

	size++;

}

template<typename T>
inline T * Pila<T>::Pop()
{
	if (Head == nullptr)
		return nullptr;
	T* retorno = Head->item;
	Node* Top = Head;
	Head = Head->next;

	delete(Top);
	return retorno;
}


