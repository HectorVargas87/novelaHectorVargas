#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
using namespace sf;

class Novel {

public:
	void intro();
	void spring();
	void summer();
	void autumn();
	void winter();
	void ending();
};

void Novel::intro() {
	RenderWindow window(VideoMode(800,534),"Mi Historia");
	sf::Texture _intro;
	_intro.loadFromFile("IMAGEN/_inicio.png");
	sf::Sprite spriteIntro;
	spriteIntro.setTexture(_intro);
	window.clear();
	window.display();
	system("pause");
}

void Novel::spring(){
	sf::Texture _spring;
	_spring.loadFromFile("IMAGEN/_primavera");
	sf::Sprite spriteSpring;
	spriteSpring.setTexture(_spring);
}

void Novel::summer(){
	sf::Texture _summer;
	_summer.loadFromFile("IMAGEN/_verano");
	sf::Sprite spriteSummer;
	spriteSummer.setTexture(_summer);
}

void Novel::autumn(){
	sf::Texture _autumn;
	_autumn.loadFromFile("IMAGEN/_otoño");
	sf::Sprite spriteAutumn;
	spriteAutumn.setTexture(_autumn);
}

void Novel::winter(){
	sf::Texture _winter;
	_winter.loadFromFile("IMAGEN/_invierno");
	sf::Sprite spriteWinter;
	spriteWinter.setTexture(_winter);
}

void Novel::ending(){
	sf::Texture _ending;
	_ending.loadFromFile("IMAGEN/_final");
	sf::Sprite spriteEnding;
	spriteEnding.setTexture(_ending);
}


int main() {
	Novel history;
	int opc;
	bool exit = false;


	while (!exit) {

		cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
		cout << "\n  BIENVENIDO  A LAS ETAPAS DE LA VIDA  \n" << endl;
		cout << "Elija una opcion una de las siguientes opciones para aprender mas de ellas " << endl;
		cout << "\n*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
		cout << "Intro..................1" << endl;
		cout << "Primavera..............2" << endl;
		cout << "Verano.................3" << endl;
		cout << "Otoño..................4" << endl;
		cout << "Invierno...............5" << endl;
		cout << "Despedida..............6" << endl;
		cout << "SALIR..................7" << endl;
		cout << "=*=*=*=*=*=*=*=*=*=*=*=*\n" << endl;
		cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
		cout << "A continuacion elije una enseñanza que deseas aprender\n" << endl;
		cout << "\nElija una opcion: ";
		cin >> opc;
		cout << "\n*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n\n" << endl;
		switch (opc)
		{
		case 1:
			history.intro();
			break;
		case 2:
			history.summer();
			break;
		case 3:
			history.spring();
			break;
		case 4:
			history.autumn();
			break;
		case 5:
			history.winter();
			break;
		case 6:
			history.ending();
			break;
		case 7:
			cout << "------------------------------------------------------" << endl;
			cout << "          Has decidido abandonar la historia          ";
			cout << "\n------------------------------------------------------\n" << endl;
			system("pause");
			exit = true;
			break;
		default:
			cout << "Esa opcion no aparece en la historia, porfavor elija opcion valida para aprender mas" << endl;
			break;
		}

	}
	
	return 0;
}