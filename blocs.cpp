#include "blocs.h"
#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>

void Blocs::set_m(int a){
	m = a;
}

void Blocs::set_n(int b){
	n = b;
}

void Blocs::set_bloc(vector <vector <string>> shape){
	bloc = shape;
}

void Blocs::initialise_bloc(int m, int n){
	for (int i= 0; i < m; ++i)
		bloc.push_back(vector<string>(n, "  "));
}

vector <vector <string>> Blocs::bloc_get(){
	return bloc;
}

int Blocs::get_n(){
	return n;
}

int Blocs::get_m(){
	return m;
}

list <Blocs> Blocs_basique::liste_get(){
	bloc1();
	bloc2();
	bloc3();
	bloc4();
	bloc5();
	bloc6();
	bloc7();
	bloc8();
	bloc9();
	bloc10();
	bloc11();
	bloc12();
	bloc13();
	bloc14();
	bloc15();
	bloc16();
	bloc17();
	bloc18();
	bloc19();
	bloc20();	
	return liste;
}


void Blocs_basique::bloc1(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(2);
	bloc.set_n(2);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	forme[0][0] = "■ "; 
	forme[1][0] = "■ ";
	forme[1][1] = "■ ";	
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}
void Blocs_basique::bloc2(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(2);
	bloc.set_n(2);

	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	forme[0][0] = "■ "; 
	forme[0][1] = "■ ";
	forme[1][1] = "■ ";	
	bloc.set_bloc(forme);	
	liste.push_back(bloc);
}

void Blocs_basique::bloc3(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(2);
	bloc.set_n(3);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[0][0] = "■ "; 
	forme[1][0] = "■ ";
	forme[1][1] = "■ ";	
	forme[1][2] = "■ ";	
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_basique::bloc4(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(3);
	bloc.set_n(2);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[0][0] = "■ "; 
	forme[0][1] = "■ ";
	forme[1][1] = "■ ";	
	forme[2][1] = "■ ";	
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_basique::bloc5(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(3);
	bloc.set_n(2);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[0][0] = "■ "; 
	forme[1][0] = "■ ";
	forme[1][1] = "■ ";	
	forme[2][0] = "■ ";	
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_basique::bloc6(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(2);
	bloc.set_n(3);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[1][0] = "■ "; 
	forme[1][0] = "■ ";
	forme[1][1] = "■ ";	
	forme[1][2] = "■ ";	
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_basique::bloc7(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(2);
	bloc.set_n(3);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[0][0] = "■ "; 
	forme[0][1] = "■ ";
	forme[1][1] = "■ ";	
	forme[1][2] = "■ ";	
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_basique::bloc8(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(3);
	bloc.set_n(2);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[0][0] = "■ "; 
	forme[1][0] = "■ ";
	forme[1][1] = "■ ";	
	forme[2][1] = "■ ";	
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_basique::bloc9(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(4);
	bloc.set_n(1);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[0][0] = "■ "; 
	forme[1][0] = "■ ";
	forme[2][0] = "■ ";	
	forme[3][0] = "■ ";	
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_basique::bloc10(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(2);
	bloc.set_n(2);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[0][0] = "■ "; 
	forme[1][0] = "■ ";
	forme[1][1] = "■ ";	
	forme[0][1] = "■ ";	
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_basique::bloc11(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(2);
	bloc.set_n(2);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[0][0] = "■ "; 
	forme[0][1] = "■ ";
	forme[1][1] = "■ ";	
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_basique::bloc12(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(2);
	bloc.set_n(2);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[0][0] = "■ "; 
	forme[0][1] = "■ ";
	forme[1][0] = "■ ";	
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_basique::bloc13(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(2);
	bloc.set_n(3);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[0][2] = "■ "; 
	forme[1][0] = "■ ";
	forme[1][1] = "■ ";	
	forme[1][2] = "■ ";	
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_basique::bloc14(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(3);
	bloc.set_n(2);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[0][0] = "■ "; 
	forme[1][0] = "■ ";
	forme[2][0] = "■ ";	
	forme[2][1] = "■ ";	
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_basique::bloc15(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(3);
	bloc.set_n(2);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[0][1] = "■ "; 
	forme[1][1] = "■ ";
	forme[1][0] = "■ ";	
	forme[2][1] = "■ ";	
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_basique::bloc16(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(2);
	bloc.set_n(3);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[0][0] = "■ "; 
	forme[0][1] = "■ ";
	forme[0][2] = "■ ";	
	forme[1][1] = "■ ";	
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_basique::bloc17(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(2);
	bloc.set_n(3);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[0][1] = "■ "; 
	forme[0][2] = "■ ";
	forme[1][0] = "■ ";	
	forme[1][1] = "■ ";	
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_basique::bloc18(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(3);
	bloc.set_n(2);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[1][0] = "■ "; 
	forme[1][1] = "■ ";
	forme[0][1] = "■ ";	
	forme[2][0] = "■ ";	
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_basique::bloc19(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(1);
	bloc.set_n(4);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[0][0] = "■ "; 
	forme[0][1] = "■ ";
	forme[0][2] = "■ ";	
	forme[0][3] = "■ ";	
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_basique::bloc20(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(1);
	bloc.set_n(1);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[0][0] = "■ "; 
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

list <Blocs> Blocs_cercle::liste_get(){
	bloc1();
	bloc2();
	bloc3();
	bloc4();
	bloc5();
	bloc6();
	bloc7();
	bloc8();
	bloc9();
	bloc10();
	bloc11();
	bloc12();	
	return liste;
}

void Blocs_cercle::bloc1(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(4);
	bloc.set_n(4);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "■ "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_cercle::bloc2(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(4);
	bloc.set_n(4);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "■ "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[0][0] = "  ";
	forme[0][3] = "  ";
	forme[3][0] = "  ";
	forme[3][3] = "  "; 
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_cercle::bloc3(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(4);
	bloc.set_n(4);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "■ "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	for (int i = 0; i < bloc.get_m()-1; ++i){
		forme[i][1] = "  ";
		forme[i][2] = "  ";
	}


	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_cercle::bloc4(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(4);
	bloc.set_n(4);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "■ "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	for (int i = 1; i < bloc.get_m(); ++i){
		forme[i][1] = "  ";
		forme[i][2] = "  ";
		forme[i][0] = "  ";

	}

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_cercle::bloc5(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(2);
	bloc.set_n(4);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "■ "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	forme[1][3] = "  ";

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_cercle::bloc6(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(3);
	bloc.set_n(3);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "■ "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	for (int i = 1; i < bloc.get_m()-1; ++i){
		forme[i][1] = "  ";
		forme[i][0] = "  ";

	}

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_cercle::bloc7(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(4);
	bloc.set_n(2);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "■ "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_cercle::bloc8(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(2);
	bloc.set_n(4);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "■ "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_cercle::bloc9(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(5);
	bloc.set_n(1);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "■ "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_cercle::bloc10(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(2);
	bloc.set_n(5);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "■ "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	forme[1][1] = "  ";
	forme[1][2] = "  ";
	forme[1][3] = "  ";

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}


void Blocs_cercle::bloc11(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(1);
	bloc.set_n(5);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "■ "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_cercle::bloc12(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(4);
	bloc.set_n(4);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "■ "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	for (int i = 0; i < 2; ++i){
		forme[i][1] = "  ";
		forme[i][2] = "  ";
		forme[i][3] = "  ";
	}

	forme[2][1] = "  ";
	forme[2][2] = "  ";
		

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

list <Blocs> Blocs_losange::liste_get(){
	bloc1();
	bloc2();
	bloc3();
	bloc4();
	bloc5();
	bloc6();
	bloc7();
	bloc8();
	bloc9();
	bloc10();
	bloc11();
	bloc12();
	bloc13();
	bloc14();	
	return liste;
}

void Blocs_losange::bloc1(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(4);
	bloc.set_n(4);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[0][2] = "■ "; 
	forme[0][3] = "■ ";
	forme[1][2] = "■ ";	
	forme[1][1] = "■ ";	
	forme[2][1] = "■ ";	
	forme[2][0] = "■ ";
	forme[3][0] = "■ ";	
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_losange::bloc2(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(4);
	bloc.set_n(4);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[0][0] = "■ "; 
	forme[0][1] = "■ ";
	forme[1][1] = "■ ";	
	forme[1][2] = "■ ";	
	forme[2][2] = "■ ";	
	forme[2][3] = "■ ";
	forme[3][3] = "■ ";	
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_losange::bloc3(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(4);
	bloc.set_n(4);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "■ "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	for (int i = 1; i < bloc.get_m(); ++i){
		forme[i][0] = "  ";
		forme[i][3] = "  ";
	}

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_losange::bloc4(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(4);
	bloc.set_n(4);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	int j = 0;
	for (int i = 0; i < bloc.get_m(); ++i){
		forme[i][j] = "■ ";
		j++;
	}
	j = 3;
	for (int i = 0; i < bloc.get_m(); ++i){
		forme[i][j] = "■ ";
		j--;
	}
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_losange::bloc5(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(3);
	bloc.set_n(5);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "■ "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	forme[1][0] = "  ";
	forme[1][4] = "  ";
	forme[2][0] = "  ";
	forme[2][1] = "  ";
	forme[2][3] = "  ";
	forme[2][4] = "  ";


	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_losange::bloc6(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(4);
	bloc.set_n(4);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "■ "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_losange::bloc7(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(4);
	bloc.set_n(4);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[0][0] = "■ "; 
	forme[1][0] = "■ ";
	forme[1][1] = "■ ";	
	forme[2][1] = "■ ";	
	forme[2][2] = "■ ";	
	forme[3][2] = "■ ";
	forme[3][3] = "■ ";	
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_losange::bloc8(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(4);
	bloc.set_n(4);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[0][3] = "■ "; 
	forme[1][3] = "■ ";
	forme[1][2] = "■ ";	
	forme[2][2] = "■ ";	
	forme[2][1] = "■ ";	
	forme[3][1] = "■ ";
	forme[3][0] = "■ ";	
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_losange::bloc9(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(5);
	bloc.set_n(1);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "■ "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_losange::bloc10(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(3);
	bloc.set_n(4);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	forme[0][3] = "■ ";
	forme[1][0] = "■ ";	
	forme[1][1] = "■ ";	
	forme[1][2] = "■ ";	
	forme[1][3] = "■ ";
	forme[2][3] = "■ ";

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_losange::bloc11(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(2);
	bloc.set_n(4);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	forme[0][0] = "■ ";	
	forme[0][1] = "■ ";	
	forme[0][2] = "■ ";	
	forme[0][3] = "■ ";
	forme[1][3] = "■ ";

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_losange::bloc12(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(1);
	bloc.set_n(5);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "■ "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_losange::bloc13(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(4);
	bloc.set_n(2);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[0][0] = "■ "; 
	forme[0][1] = "■ ";
	forme[1][1] = "■ ";	
	forme[2][1] = "■ ";	
	forme[3][1] = "■ ";	
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_losange::bloc14(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(4);
	bloc.set_n(2);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());
	
	forme[0][0] = "■ "; 
	forme[1][0] = "■ "; 
	forme[2][0] = "■ ";
	forme[3][0] = "■ ";	
	forme[3][1] = "■ ";	
	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

list <Blocs> Blocs_triangle::liste_get(){
	bloc1();
	bloc2();
	bloc3();
	bloc4();
	bloc5();
	bloc6();
	bloc7();
	bloc8();
	bloc9();
	bloc10();
	bloc11();
	return liste;
}

void Blocs_triangle::bloc1(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(3);
	bloc.set_n(3);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	forme[0][2] = "■ ";	
	forme[1][0] = "■ ";	
	forme[1][1] = "■ ";	
	forme[1][2] = "■ ";
	forme[2][0] = "■ ";

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_triangle::bloc2(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(3);
	bloc.set_n(3);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	forme[0][1] = "■ ";	
	forme[1][1] = "■ ";	
	forme[2][1] = "■ ";	
	forme[0][0] = "■ ";
	forme[2][2] = "■ ";

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_triangle::bloc3(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(3);
	bloc.set_n(3);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	forme[0][0] = "■ ";	
	forme[1][0] = "■ ";	
	forme[1][1] = "■ ";	
	forme[1][2] = "■ ";
	forme[2][2] = "■ ";

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_triangle::bloc4(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(3);
	bloc.set_n(3);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	forme[0][1] = "■ ";	
	forme[1][1] = "■ ";	
	forme[2][1] = "■ ";	
	forme[0][2] = "■ ";
	forme[2][0] = "■ ";

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_triangle::bloc5(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(3);
	bloc.set_n(3);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	int j=2;
	for (int i = 0; i < bloc.get_m(); ++i){
		forme[i][j] = "■ ";
		j--;
	}

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_triangle::bloc6(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(3);
	bloc.set_n(3);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "  "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	int j=0;
	for (int i = 0; i < bloc.get_m(); ++i){
		forme[i][j] = "■ ";
		j++;
	}

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_triangle::bloc7(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(3);
	bloc.set_n(1);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "■ "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_triangle::bloc8(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(1);
	bloc.set_n(3);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "■ "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_triangle::bloc9(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(2);
	bloc.set_n(1);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "■ "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_triangle::bloc10(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(3);
	bloc.set_n(3);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "■ "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	forme[0][0] = "■ ";	
	forme[2][0] = "■ ";	
	forme[0][2] = "■ ";
	forme[2][2] = "■ ";

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}

void Blocs_triangle::bloc11(){
	Blocs bloc;
	vector <vector <string>> forme;
	bloc.set_m(1);
	bloc.set_n(2);
	
	for (int i = 0; i < bloc.get_m(); ++i)
		forme.push_back(vector<string>(bloc.get_n(), "■ "));
	bloc.initialise_bloc(bloc.get_m(), bloc.get_n());

	bloc.set_bloc(forme);
	liste.push_back(bloc);
}
