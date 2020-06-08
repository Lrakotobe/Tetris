#include "plateau.h"
#include <iomanip>
#include <chrono>
#include <thread>


using namespace std;

int main(int argc, char const *argv[])
{
	cout << "TETRIS..." <<endl;
	cout << "Un projet de Victorien DELBANO et Lauren RAKOTOBE" << endl;
	this_thread::sleep_for(std::chrono::milliseconds(1200));

	ACCEUIL:
	printf("\033c");
	srand(unsigned(time(0)));  // pour éviter que le random donne toujours le même résultat
	cout <<"\n"<< setw(90) << "■ ■ ■ ■ Bienvenue ■ ■ ■ ■ " << endl;
	cout << "\n\n" <<endl;
	int choice= 0;
	cout << setw(75) << "1. Commencer une nouvelle partie\n\n"<< setw(75)<< "2. Afficher les règles du jeu\n" << endl;
	while ((choice<1)||(choice>2)){
		cout << setw(25) << "► Votre choix:" ;
		cin >> choice;
	}

	if(choice==1){
		printf("\033c");
		cout << setw(30) << "♦ NOUVELLE PARTIE ♦\n"<< endl;
		cout << "   Pamarètres\n"<< endl;

		Plateau jeu;
		while(1)
			jeu.choix_bloc();
	}

	if(choice==2){
		printf("\033c");

		cout << "\n" << endl;
		cout << "  Le Tetris est un jeu où des blocs de différentes formes doivent être posés de sorte que le plateau soit gardé le plus long-temps possible non plein. L’idée est de placer chaque bloc à l’emplacement qui permet d’éliminer un maximum de lignes et/ou de colonnes. Ces dernières sont supprimées automatiquement lorsqu’elles sont pleines." << endl;
		cout << "Votre score augmentera selon le nombre de blocs supprimés." << endl;
		cout << "Si à l’issue de 3 tentatives successives d'insertions de bloc, les positions choisies sont à chaque fois invalides, alors le jeu s’arrête." << endl;
		cout << "\n" << endl;
		cout << "♠ PARAMETREZ VOTRE PARTIE" << endl;
		cout << "Commencez par entrer la taille de votre plateau de jeu. Attention, celle-ci ne devra pas être inférieure à 21!" <<endl;
		cout << "Séléctionnez votre canvas et votre politique de jeu." << endl;
		cout <<setw(9)<< "  * Politique 1: Tout les blocs seront affichés à chaque tours"<< endl;
		cout <<setw(9)<< "  * Politique 2: Le choix de blocs sera limité à 3 pour chaque tours" << endl;
		cout <<setw(9)<< "  * Politique 3: Le choix de blocs sera limité à 3 pour chaque tours. Ces blocs seront plus adaptées au canvas que vous aurez choisi" << endl;
		cout << "\n" << endl;
		cout << "♠ INSERTION DES BLOCS" << endl;
		cout << "Après avoir choisi un bloc vous serez invité à le placer sur le plateau, en fonction de son abscisse (a,b,c,...) et de son ordonnée (A,B,C,...)"<< endl;
		cout << "La cellule du coin inférieur gauche du bloc sera celle sur les coordonnées saisies (même si elle est vide) " << endl;
		cout << "\n\n" << endl;
		cout << "Tapez n'importe quel chiffre pour quitter et revenir à l'acceuil" << endl;
		int quit= 0;
		cin >>quit;
		goto ACCEUIL;
	}



	
	return 0;
}
