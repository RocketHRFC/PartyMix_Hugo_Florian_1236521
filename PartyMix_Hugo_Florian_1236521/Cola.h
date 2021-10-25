#pragma once
#include "Cancion.h"
#include "Lista.h"
#include <string>
#include <iostream>

template <typename T>
class Cola
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
	Node* Tail;



public: 

	void EnColar(T* valor);
	Cola<Cancion>* ColaCanciones(Lista<T>* ListaCanciones);
	void MarshalString(String^ s, string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
	T* DesEncolar() {

		T* Retorno = Head->item;
		Node* Top = Head;
		Head = Head->next;
		if (Head == nullptr)
		{
			Tail = nullptr;
		}

		delete(Top);

		return Retorno;

	}
	int Tamano();
	bool ColaVacia();
	void Limpiar();
};

template<typename T>
inline void Cola<T>::EnColar(T* valor)
{
	Node* node = new Node(valor);
	node->item = valor;
	if (this->Head == nullptr)
	{
		this->Head = node;
		this->Tail = node;
	}
	else
	{
		this->Tail->next = node;
		this->Tail = node;
	}
}

template<typename T>
inline Cola<Cancion>* Cola<T>::ColaCanciones(Lista<T>* ListaCanciones)
{
	Cola<Cancion>* Cola_Canciones = new Cola<Cancion>();

	for (int i = 0; i < ListaCanciones->getSize(); i++)
	{
		string title = ListaCanciones->get(i)->getTitutlo();
		string artist = ListaCanciones->get(i)->getArtista();
		Cancion* cancion = new Cancion(title, artist);


		Cola_Canciones->EnColar(cancion);

	}

	return Cola_Canciones;
}

template<typename T>
inline int Cola<T>::Tamano()
{
	int Cantidad = 0;
	for (Node* i = Head; i != nullptr; i = i->next)
	{
		Cantidad++;
	}
	return Cantidad;
}

template<typename T>
inline bool Cola<T>::ColaVacia()
{
	return (Head == nullptr);
}

template<typename T>
inline void Cola<T>::Limpiar()
{
	while (!ColaVacia())
		DesEncolar();
}


