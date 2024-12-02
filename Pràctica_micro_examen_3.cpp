// Pràctica_micro_examen_3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 

class Array {
private: 
	int* arr;
	int size, capacity; 
public: 
	Array()
	{
		arr = nullptr;
		size = 0;
		capacity = 0;
	}
	
	Array(int* _arr, int _size, int _capacity)
	{
		arr = new int[_capacity]; 
		size = _size; 
		capacity = _capacity;

		for (int i = 0; i < size; i++)
		{
			arr[i] = _arr[i]; 
		}
	}

	void invert()
	{
		for (int i = size; i >= 1; i--)
		{
			cout << arr[i - 1] << "  ";
		}

		cout << endl; 
	}

	void printArray()
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << "  ";
		}

		cout << endl;
	}
};

int main()
{ 
	int myCapacity = 4; 
	int* myArray = new int[myCapacity]; 
	myArray[0] = 1; myArray[1] = 7; myArray[2] = 0; myArray[3] = 9; 

	Array myClass(myArray, 4, myCapacity); 

	myClass.printArray();
	myClass.invert(); 

	system("pause"); 
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
