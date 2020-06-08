#include "blocs.h"
#include <iostream>
#include <cstring>
#include <vector>
#include <set>
#include <algorithm>
#include <ctime>

using namespace std;

//╚ ╔ ║ ╗ ╝ ═
class Plateau{
private:
	int longueur;
	int largeur;
	int forme; //1-Cercle, 2-Losange, 3-Triangle 
	int pol; //1-Afficher tout, 2-Afficher 3 aléatoirement
	int score;
	vector<Blocs> vec_blocs;
	vector<vector <string>> grille;
	set<int> line_index;
	set<int> col_index;
public:
	Plateau(){
		set_taille();
		set_forme();
		set_pol();
		initialise_grille();
		set_plateau();
		lister_blocs();
		score = 0;
	};
	//~plateau();
	void set_plateau(); //affiche le plateau
	void set_taille(); 
	void set_forme();
	void set_pol();
	void get_score();
	vector<Blocs> get_blocs();
	void initialise_grille();
	void cercle();
	void losange();
	void triangle();
	void show();
	int pleine_ligne(int ligne);
	int pleine_colonne(int colonne);
	void descend(int ligne);
	void decale(int colonne);
	void place_bloc(Blocs b);
	void choix_bloc();
	void lister_blocs();
	void shuffle_vec();
	void afficher_tout();
	void afficher_alea();
};