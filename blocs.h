#include <iostream>
#include <vector>
#include <list>
#include <cstring>

using namespace std;

class Blocs{
private:
	int m, n; //longueur(m), largeur(n)
	vector <vector <string>> bloc;
public:
	void set_bloc(vector <vector <string>> bloc);
	void set_m(int m);
	void set_n(int n);
	void initialise_bloc(int m, int n);
	vector <vector <string>> bloc_get();
	int get_n();
	int get_m();
};

class Blocs_basique{
private:
	list <Blocs> liste;
public:
	list <Blocs> liste_get();
	void bloc1();
	void bloc2();
	void bloc3();
	void bloc4();
	void bloc5();
	void bloc6();
	void bloc7();
	void bloc8();
	void bloc9();
	void bloc10();
	void bloc11();
	void bloc12();
	void bloc13();
	void bloc14();
	void bloc15();
	void bloc16();
	void bloc17();
	void bloc18();
	void bloc19();
	void bloc20();
	//blocs_basique();
	//~blocs_basique();
	
};

class Blocs_cercle{
private:
	list <Blocs> liste;
public:
	list <Blocs> liste_get();
	void bloc1();
	void bloc2();
	void bloc3();
	void bloc4();
	void bloc5();
	void bloc6();
	void bloc7();
	void bloc8();
	void bloc9();
	void bloc10();
	void bloc11();
	void bloc12();
};

class Blocs_losange{
private:
	list <Blocs> liste;
public:
	list <Blocs> liste_get();
	void bloc1();
	void bloc2();
	void bloc3();
	void bloc4();
	void bloc5();
	void bloc6();
	void bloc7();
	void bloc8();
	void bloc9();
	void bloc10();
	void bloc11();
	void bloc12();
	void bloc13();
	void bloc14();
};

class Blocs_triangle{
private:
	list <Blocs> liste;
public:
	list <Blocs> liste_get();
	void bloc1();
	void bloc2();
	void bloc3();
	void bloc4();
	void bloc5();
	void bloc6();
	void bloc7();
	void bloc8();
	void bloc9();
	void bloc10();
	void bloc11();
};