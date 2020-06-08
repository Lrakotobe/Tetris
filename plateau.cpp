#include "plateau.h"
#include <algorithm>
#include <iostream>
#include <ctype.h>
#include <iomanip>
#include <chrono>
#include <thread>

using namespace std;

void Plateau::set_plateau(){
	//initialise_grille();
	switch(forme){
		case 1:
			cercle();
			break;
		case 2:
			losange();
			break;
		case 3:
			triangle();
			break;
	}
	for(auto vec : grille){
		for(auto x : vec)
			cout<<x;
		cout << endl;
	}


}

void Plateau::set_taille(){
	cout << "► Entrez la taille: "<<endl;
	cin >> largeur;
	while (largeur<21){
		cout << "Oops trop petit: "<< endl;
		cin >> largeur;
	}
	if(largeur%2 == 0)
		largeur++;
	cout << "\n" << endl;
}

void Plateau::set_forme(){
	do{
	cout << "► Choisissez la forme de votre canvas: " << endl;
	cout << "  1.Cercle\n  2.Losange\n  3.Triangle" << endl;
	cout << "Votre choix: ";
	cin >> forme; //1-Cercle, 2-Losange, 3-Triangle 
	}while(forme < 1 || forme > 3);
	cout << "\n" << endl;
}

void Plateau::set_pol(){
	do{
	cout << "► Choisissez la politique de sélection des blocs: " << endl;
	cout << "  1.Afficher tous les blocs\n  2.Afficher 3 blocs\n  3.Afficher 3 blocs (fonction avancée)" << endl;
	cout << "Votre choix: ";
	cin >> pol;
	}while(pol < 1 || pol > 3);
	cout << "\n" << endl;
}

vector<Blocs> Plateau::get_blocs(){
	return vec_blocs;
}

void Plateau::initialise_grille(){
	switch(forme){
		case 1:
			longueur = largeur;
			break;
		case 2:
			longueur = largeur;
			break;
		case 3:
			longueur = (largeur / 2) + 2;
			break;
	}

	for (int i= 0; i < longueur + 1; ++i){
		grille.push_back(vector<string>(largeur + 1, "  "));
	}

	for (int i = 2; i < largeur; ++i){
		string lettre;
		lettre = i + '_';
		lettre += ' ';
		grille[0][i] = lettre;
	}

	for (int i = 2; i < longueur; ++i){
		string lettre;
		lettre = i + '?';
		lettre += ' ';
		grille[i][0] = lettre;
	}

	for (int i = 1; i <= largeur; ++i){
		grille[1][i] = "═ ";
		grille[longueur][i] = "═ ";
	}

	for (int i = 1; i <= longueur; ++i){
		grille[i][1] = "║ ";
		grille[i][largeur] = "║ ";
	}

	//initialisation des quatres côtés //╚ ╔ ║ ╗ ╝ ═
	grille[1][1] = "╔ ";
	grille[1][largeur] = "╗ ";
	grille[longueur][1] = "╚ ";
	grille[longueur][largeur] = "╝ ";
}

void Plateau::cercle(){
	for (int i = (largeur / 3) - 1 ; i < (largeur - ((largeur / 3) - 3)); ++i)
		grille[2][i] = ". ";
	for (int i = 3; i <= (longueur/3)-1; ++i){
		for (int j = 2; j <= largeur; ++j)
			grille[i][j] = grille[i-1][j];
		for (int j = 2; j <= largeur; ++j)
			if (grille[i][j] == ". "){
				grille[i][j-1] = ". ";
				if (grille[i][j+1] == "  "){
					grille[i][j+1] = ". ";
					break;
				}
			}
	}
	for (int i = longueur / 3; i < (longueur - ((longueur / 3) -3 )); ++i)
		for (int j = 2; j <= largeur; ++j)
			grille[i][j] = grille[i-1][j];		
	for (int i = (longueur - ((longueur / 3) - 3)); i < longueur; ++i){
		for (int j = 2; j <= largeur; ++j)
			grille[i][j] = grille[i-1][j];
		for (int j = 2; j < largeur; ++j){
			if (grille[i][j+1] != ". "){
					grille[i][j] = "  ";
					grille[i][largeur-j+1] = "  ";
				}
			}
	}
}



void Plateau::losange(){
	int l = 2; //acc sur la longueur
	int acc = 2; //acc sur la largeur
	grille[l][(largeur / 2) + 1] = ". ";
	for (int i = 2; i < longueur; ++i){
		while (l != longueur - 1){
			l++;
			for (int i = 2; i <= largeur; ++i)
				grille[l][i] = grille[l-1][i];
			if (acc < (largeur / 2) + 1){
				for (int i = 2; i <= largeur; ++i)
					if (grille[l][i] == ". "){
						grille[l][i-1] = ". ";
						if (grille[l][i+1] == "  "){
							grille[l][i+1] = ". ";
							break;
						}
					}
			}	
			else{
				for (int i = 2; i < largeur; ++i){
					if (grille[l][i+1] != ". "){
						grille[l][i] = "  ";
						grille[l][largeur-i+1] = "  ";
					}
				}
			}
			acc++;
		}
	}
}

void Plateau::triangle(){
	grille[2][(largeur / 2) + 1] = ". ";
	int taille = 3; //accumulateur sur la taille du plateau
	for (int i = 3; i < longueur; ++i){
		if(grille[i-1][2] != ". "){
			taille++;
			for (int j = 3; j < largeur; ++j)
				grille[i][j] = grille[i-1][j];
			for (int j = 3; j < largeur; ++j)
				if (grille[i][j] == ". "){
					grille[i][j-1] = ". ";
					if (grille[i][j+1] == "  "){
						grille[i][j+1] = ". ";
						break;
					}
				}	
		}
	}
	longueur = taille;
}

void Plateau::show(){
	for(auto vec : grille){
		for(auto x : vec)
			cout << x;
		cout << endl;
	}
}

void Plateau::place_bloc(Blocs b){
	char c1, c2;
	int x, y, count = 0;
	vector <vector <string>> shape = b.bloc_get();
	SAISIE:
	if(count < 3){
	cout << "Entrez l'abscisse du bloc:";
	cin >> c1;
	cout << "\nEntrez l'ordonnée du bloc:";
	cin >> c2;
	x = tolower(c1);
	y = tolower(c2);
	x -= 96; 
	y -= 96;
	}
	
	else{
		printf("\033c");
		cout << setw(45)<< "░ TU AS PERDU ░" << endl;
		cout << "   Ton score:"<< score << endl;
		cout << "\n\n AU REVOIR"<< endl;
		this_thread::sleep_for(std::chrono::milliseconds(1000));

		exit(1);

	}
	for(int i = 0, y1 = (y + 1) - b.get_m(); i < b.get_m(); i++, y1++){ // superpositon du bloc sur la grille
		for(int j = 0, x1 = x; j < b.get_n(); j++, x1++){
			
			if(y1 < 0){
				cout << "Vous ne pouvez pas placer ce bloc ici, veuillez réessayer" << endl;
				count++;
				goto SAISIE;
			}
			if (grille[y1+1][x1+1] == ". " 
				|| (grille[y1+1][x1+1] == "■ " && shape[i][j] == "  ") 
				|| (grille[y1+1][x1+1] == "  " && shape[i][j] == "  ")){
					
				if(shape[i][j] == "■ ")
					grille[y1+1][x1+1] = shape[i][j];
			}	

			else{
				cout << "Vous ne pouvez pas placer ce bloc ici, veuillez réessayer" << endl;
				count++;
				goto SAISIE;
			}
		}
	}
	for (int i = 2; i < largeur; ++i)
		decale(i);
	for (int i = 2; i < longueur; ++i)
		descend(i);
	
	
}

void Plateau::choix_bloc(){
	int choix;
	printf("\033c");
	get_score();
	show();
	if(pol == 1) afficher_tout();
	else         afficher_alea();
	
	cout << "Entrez votre choix: "<< endl;
	cin >> choix;
	vector<Blocs>::iterator it = vec_blocs.begin();
	advance (it, choix-1);
	Blocs a_placer = *it;
  	place_bloc(a_placer);
}

void Plateau::lister_blocs(){
	Blocs_basique a;
	Blocs_cercle b;
	Blocs_losange c;
	Blocs_triangle d;
	list <Blocs> basique = a.liste_get();
	list <Blocs> cercle = b.liste_get();
	list <Blocs> losange = c.liste_get();
	list <Blocs> triangle = d.liste_get();

	for (auto it = basique.begin(); it != basique.end(); ++it){
		Blocs a_inserer = *it;
		vec_blocs.push_back(a_inserer);
	}

	if(pol == 3){
		if(forme == 1){
			for (auto it = cercle.begin(); it != cercle.end(); ++it){
				Blocs a_inserer = *it;
				vec_blocs.push_back(a_inserer);
			}
		}
		else if(forme == 2){
			for (auto it = losange.begin(); it != losange.end(); ++it){
				Blocs a_inserer= *it;
				vec_blocs.push_back(a_inserer);
			}
		}
		else if(forme == 3){
			for (auto it = triangle.begin(); it != triangle.end(); ++it){
				Blocs a_inserer= *it;
				vec_blocs.push_back(a_inserer);
			}
		}
	}
}

void Plateau::shuffle_vec(){
	random_shuffle(vec_blocs.begin(), vec_blocs.end());
}

void Plateau::afficher_tout(){
	int i=1;
	for (auto it = vec_blocs.begin(); it != vec_blocs.end(); ++it){
		Blocs a = *it;

		cout << i++<< "." << endl;
		vector <vector <string>> forme = a.bloc_get();
		for(auto vec : forme){
			for(auto x : vec){
				cout << x;
				cout << "";
			}
			cout << endl;
		}
		cout << "------\n";
	}
}

void Plateau::afficher_alea(){
	shuffle_vec();
	for(int i = 0; i < 3; i++){
		cout << i+1<< "." << endl;
		vector <vector <string>> forme = vec_blocs[i].bloc_get();
		for(auto vec : forme){
			for(auto x : vec){
				cout << x;
				cout << "";
			}
			cout << endl;
		}
		cout << "------\n";
	}
}


void Plateau::get_score(){
	cout<< "Score: "<< score << endl; 
}

int Plateau::pleine_ligne(int ligne){
	for(int j = 0; j < largeur; j++)
		if (grille[ligne][j]== ". "){
			return 0;
		}
	return 1;
}

int Plateau::pleine_colonne(int colonne){
	for(int j = 0; j < longueur; j++)
		if (grille[j][colonne]== ". "){
			return 0;
		}
	return 1;
}


void Plateau::descend(int ligne){
	REVOIS:
	if (pleine_ligne(ligne)==1){
		for (int i = 0; i < largeur; ++i){
			if(grille[ligne][i]== "■ "){
				score++;
				grille[ligne][i]= ". ";
			}
		}
		for (int i = ligne; i > 2; --i)
			for(int j = 0; j < largeur; j++){
				int k=0;
				REVERIFIE:
				if(grille[i+1][j]==". ")
					if(grille[i][j] != "  "){
						if(grille[i-1][j] == ". ")
							grille[i][j]= ". ";
						if(grille[i-1][j] == "■ ")
							grille[i][j]= "■ ";
						if(grille[i-1][j] == "  ")
							grille[i][j]= ". ";
					}
				k++;
				if (k==0)
					goto REVERIFIE;
			}
		goto REVOIS;
	}
	else
		return;
}

void Plateau::decale(int colonne){
	if (pleine_colonne(colonne)==1)
		for (int i = 0; i < longueur; ++i){
			if(grille[i][colonne]== "■ "){
				score++;
				grille[i][colonne]= ". ";
			}
		}
}

