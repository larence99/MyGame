
#include <SFML\Graphics.hpp>
const int HEIGHT_MAP = 25;//размер карты высота
const int WIDTH_MAP = 40;//размер карты ширина 


sf::String TileMap[HEIGHT_MAP] = {
	"0000000000000000000000000000000000000000",
	"0000000000000000000000000000000000000000",
	"00                                    00",
	"00                                    00",
	"00                                    00",
	"00                                    00",
	"00                                    00",
	"00                                    00",
	"00                                    00",
	"00                                    00",
	"00                                    00",
	"00                                    00",
	"00                                    00",
	"00                                    00",
	"00                                    00",
	"00                                    00",
	"00                                    00",
	"00                                    00",
	"00                                    00",
	"00                                    00",
	"00                                    00",
	"00                                    00",
	"00                                    00",
	"0000000000000000000000000000000000000000",
	"0000000000000000000000000000000000000000",
};
void randomMapGenerate() {//рандомно расставляем ящики и бутылки

	int randomElementX = 0;//случайный элемент по горизонтали
	int randomElementY = 0;//случ эл-т по вертикали
	srand(time(0));//рандом	
	int countBox = 10;//количество ящиков
	int countBottle = 5;//колличество бутылок
	while (countBox > 0){
		randomElementX = 1 + rand() % (WIDTH_MAP - 1);//рандомное по x от 1 до ширина карты-1, чтобы не получать числа бордюра карты
		randomElementY = 1 + rand() % (HEIGHT_MAP - 1);//по y так же

		if (TileMap[randomElementY][randomElementX] == ' ') {//если встретили символ пробел, 
			TileMap[randomElementY][randomElementX] = 's'; //то ставим туда ящик.
			
			
			countBox--;
			
		}
	}
	while (countBottle > 0) {
		randomElementX = 1 + rand() % (WIDTH_MAP - 1);//рандомное по иксу от 1 до ширина карты-1, чтобы не получать числа бордюра карты
		randomElementY = 1 + rand() % (HEIGHT_MAP - 1);//по игреку так же

		if (TileMap[randomElementY][randomElementX] == ' ') {//если встретили символ пробел, 
			TileMap[randomElementY][randomElementX] = 'f'; //то ставим туда бутылку.
			
			
			countBottle--;
		}
	}
}
