#pragma once
#include "Cancion.h"
#include <string>
#include <iostream>
#include "Comparator.h"

using namespace System;
using std::string;


template <typename T>

class Lista
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

	int size = 0;
	
public:

	int getSize() {
		return this->size;
	}
	bool isEmpty()
	{
		return this->size == 0;
	}

	void add(T* item)
	{
		Node* node = new Node(item);

		if (this->isEmpty())
		{
			this->Head = this->Tail = node;
		}
		else
		{
			this->Tail->next = node;
			this->Tail = this->Tail->next;
		}

		this->size++;
	}

	T* get(int index)
	{
		if (index >= this->size || index < 0)
		{
			return nullptr;
		}

		Node* iterator = this->Head;

		int i = 0;

		while (i < index)
		{
			if (iterator != nullptr) {
				iterator = iterator->next;
				i++;
			}
			
		}

		return iterator->item;

	}

	int buscar(string name, string artist) 
	{
		int index = 0;

		for (Node* indice = Head; indice != nullptr; indice = indice->next) {

			if ((indice->item->getArtista() == artist) && (indice->item->getTitutlo() == name)) {

				
				return index;
			}

			index++;
		}
		return -1;
		
	}

	void remove(string name, string artist)
	{
		Node* Actual = Head;
		int index = buscar(name, artist);

		if (index == 0)
			Head = Head->next;
		else {
			Node* Previus;
			for (int i = 0; i < index; i++) {
				Previus = Actual;
				Actual = Actual->next;
			}

			Previus->next = Actual->next;
		}

		delete(Actual);
		size--;
	
	}

	Lista<Cancion>* LeerCanciones(String^ filePath);

	void MarshalString(String^ s, string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

	Lista<T>* bubbleSort(Comparator<T>* comparator) {

		Node** i = &(this->Head);

		while (*i != nullptr) {

			Node** j = &(*i)->next;

			while (*j != nullptr) {
				T** itemA = &(*i)->item;
				T** itemB = &(*j)->item;

				if (comparator->compare(**itemA, **itemB)>0) {
					T* aux = *itemA;
					*itemA = *itemB;
					*itemB = aux;
				}

				j = &(*j)->next;
			}

			i = &(*i)->next;
		}

		return this;
	}

	Lista<T>* Al_Sort() {


		for (int k = 0; k < this->getSize(); k++) {

			Random^ random = gcnew Random();
			int x = random->Next(0, this->getSize()-1);
			Random^ random_2 = gcnew Random();
			int y = random_2->Next(0, this->getSize()-1);


			Node** i = &(this->Head);

			for (int p = 0; p < x; p++)
			{
				i = &(*i)->next;
			}

			Node** j = &(this->Head);

			for (int q = 0; q < y; q++)
			{
				j = &(*j)->next;
			}

			T** itemA = &(*i)->item;
			T** itemB = &(*j)->item;

			T* aux = *itemA;
			*itemA = *itemB;
			*itemB = aux;
			
					
		}

		return this;

	}



};



template<typename T>
inline Lista<Cancion>* Lista<T>::LeerCanciones(String ^ filePath)
{
	Lista<Cancion>* ListaCanciones = new Lista<Cancion>();

	array<String^> ^lineas = System::IO::File::ReadAllLines(filePath);
	

	for (int i = 0; i < lineas->Length; i++) {

		array<String^> ^lineas_Canciones = lineas[i]->Split(',');

		for (int i = 0; i < lineas_Canciones->Length; i++) {

			if (lineas_Canciones[i] != "") {


				array<String^> ^linea = lineas_Canciones[i]->Split('-');

				string name;
				string artist;

				if (linea->Length == 1) {

					MarshalString(linea[0], name);
					artist = "Desconocido";

				}
				else {

					MarshalString(linea[0], name);
					MarshalString(linea[1], artist);

				}

			
				Cancion* cancion = new Cancion(name, artist);

				ListaCanciones->add(cancion);
			}

		}

	}

	return ListaCanciones;
}


