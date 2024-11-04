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
    vector<int> sentier;
    sentier = {6,1,3,1,2,4,1,3,5,1,2,1,2,3,1,4,2};

	int pos1,pos2;
	pos1 = pos2 = sentier.size();
    vector<int> sac1(NBARTEFACT,0);
    vector<int> sac2(NBARTEFACT,0);

    afficheSentier(sentier);


    return 0;
}
