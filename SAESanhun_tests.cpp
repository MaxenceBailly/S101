#include <iostream>
#include <vector>
#include "mesFonctions.h"
using namespace std;

const vector<string> ARTEFACT ={"Vide","Livre","Bourse","Joyau","Sceptre","Collier","Graal"};
const int NBARTEFACT = ARTEFACT.size();
const int VIDE = 0;
const vector<int> VALEUR  ={0,1,2,3,5,8,10};
const vector<int> QUANTITE = {0,6,4,3,2,1,1};

int main() {
    vector<int> sentier1 = {6,1,3,1,2,4,1,3,5,1,2,1,2,3,1,4,2};
    vector<int> sentier2 = {1,1,1,1,2,2,1,3,1,1,2,3,3,4,5,4,6};

	int pos1,pos2;
	pos1 = pos2 = sentier1.size();
    vector<int> sac1(NBARTEFACT+2,5);
    vector<int> sac2(NBARTEFACT,1);

    sac1.push_back(8);

    pos1 = 6;pos2 = 0;
    cout << pos1 << " " << pos2 << endl;

    cout << "-----Je teste les fonctions d'affichage-----"<<endl;
    affiche(sentier1, ARTEFACT, VALEUR, pos1, sac1, sac2);
    affiche(sentier2, ARTEFACT, VALEUR, pos1,  sac1, sac2);

    affiche(sentier1, ARTEFACT, VALEUR, pos2, sac1, sac2);
    affiche(sentier2, ARTEFACT, VALEUR, pos2,  sac1, sac2);

    cout << "-----Je teste la fonction somme-----"<<endl;
    cout << sommeVecteur(sac1) << endl;
    cout << sommeVecteur(sac2) << endl;

    return 0;
}
