#include <iostream>
#include <vector>
#include "mesFonctions.h"
using namespace std;

const vector<string> ARTEFACT ={"Vide","Livre","Bourse","Joyau","Sceptre","Collier","Graal"};
const int NBARTEFACT = ARTEFACT.size();
const int VIDE = 0;
const vector<int> VALEUR  = {0,1,2,3,5,8,10};
const vector<int> QUANTITE = {0,6,4,3,2,1,1};
int pointsJoueur1 = 0;
int pointsJoueur2 = 0;

int main() {
    vector<int> sentier;
    sentier = {6,1,3,1,2,4,1,3,5,1,2,1,2,3,1,4,2};

	int pos1,pos2;
	pos1 = pos2 = sentier.size();
    vector<int> sac1(NBARTEFACT,0);
    vector<int> sac2(NBARTEFACT,0);

    bool positionTour = true;
    int avance;

    while(pos1>0||pos2>0){
        affiche(sentier, ARTEFACT, VALEUR, sentier.size()-(positionTour?pos1:pos2), sac1, sac2);
        cout << "Le joueur " << (positionTour?"1":"2") << " avance de combien de case ? ";
        cin >> avance;

        while((positionTour?pos1:pos2)-avance==(positionTour?pos2:pos1)||(positionTour?pos1:pos2)-avance<0){
            cout << "La manoeuvre est impossible veuillez reessayez: " << endl;
            affiche(sentier, ARTEFACT, VALEUR, (positionTour?pos1:pos2), sac1, sac2);
            cout << "Le joueur " << (positionTour?"1":"2") << " avance de combien de case ? ";
            cin >> avance;
        }

        (positionTour?pos1:pos2) = avanceJoueur((positionTour?pos1:pos2), avance, sentier, (positionTour?sac1:sac2));
        cout << "position joueur 1 : " << pos1 << endl << "position joueur 2 : " << pos2 << endl << endl;
        if(pos1==0){
            pos1=-1;
        }
        else if(pos2==0){
            pos2=-1;
        }
        positionTour = !positionTour;
    }

    comptePoint(sac1, sac2, VALEUR, pointsJoueur1, pointsJoueur2);

    cout << "Points Joueur 1: " << pointsJoueur1 << endl;
    cout << "Points Joueur 2: " << pointsJoueur2 << endl;

    if(pointsJoueur1>pointsJoueur2){
        cout << "Le joueur 1 remporte la partie avec : " << pointsJoueur1 << " points." << endl;
    }
    else if(pointsJoueur1==pointsJoueur2){
        cout << "Partie terminee à egalite." << endl;
    }
    else{
        cout << "Le joueur 2 remporte la partie avec : " << pointsJoueur2 << " points." << endl;
    }


    return 0;
}
