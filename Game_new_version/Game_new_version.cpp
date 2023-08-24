#include <iostream>

const int G = 10;//задаем размер поля(например 10*10)
bool field_empty[G][G];//задаем поле,в котором изначально будут видны *
char field[G][G];//поле,в котором будет находится в клетках либо мина либо значение
//Задаем карту

//заполнение поля:
void new_field(char a = '*') {

	for (int i = 0; i < G; i++)
	{
		for (int k = 0; k < G; k++)
		{

			field[i][k] = a;
			field_empty[i][k] = 0;



		}


	}


};
//расстановка мин
void mines(int count = 5) {

	for (int i = 0; i < count; )
	{
		//размер методом рандом:
		int x = rand() % G;
		int y = rand() % G;
		//проверка на наличие мины в клетке
		if (field_empty[x][y]) {
			field_empty[x][y] = 1;
			i++;
		
		
		}
	
	
	}


};
void display() {
	for (int i = 0; i < G; i++)
	{
		for (int k = 0; k < G; k++)
		{
			std::cout << field[i][k] << " ";


		}
	
		std::cout << std::endl;
	
	
	}
};


//функция Game,которая все запускает.
void Game() {
	new_field();
	mines();
	display();
}


int main() {


	Game();
	return 0;
}
