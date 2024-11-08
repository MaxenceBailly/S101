#include <iostream>
#include <vector>
#include <string>
#include "mesFonctions.h"
using namespace std;

void affiche(const vector<int>&sentier, const vector<string>&tresor, const vector<int>&valeurs, int position, const vector<int>&sac1, const vector<int>&sac2) {
    afficheSentier(sentier, tresor, position);
    afficheSac(sac1, sac2, tresor, valeurs);
}

void afficheSentier(const vector<int>&sentier, const vector<string>&tresors, int position) {
    cout << "\t<*> Le Sentier <*>" << endl;
    for(int i=position;i<sentier.size();i++) {
        cout << "["  << i-position << "] " << getTresor(sentier[i], tresors) << " (" << sentier[i] << ")" << " | ";
    }
    cout << endl;
    cout << endl;
}

void afficheSac(const vector<int>&sac1, const vector<int>&sac2, const vector<string>&tresor, const vector<int>&valeurs) {
    cout << "\tSac" << "\t_1_" << "\t_2_" << endl;
    for(int cpt=1;cpt<tresor.size();cpt++){
        cout << tresor[cpt] << "\t\t " << getOccurence(sac1, valeurs[cpt]) << "\t " << getOccurence(sac2, valeurs[cpt]) << endl;
    }
    cout << endl;
}

///Fonction getTresor qui renvoie le nom du trésor en fonction de sa valeur
string getTresor(int nb, const vector<string>&tresors) {
    return tresors[nb];
}


///Fonction getccurence qui compte le nombre d'occurence d'un entier dans un vecteur
int getOccurence(const vector<int>&vecteur, int val) {
    int occu=0;
    for(int i=0;i<vecteur.size();i++){
        if(vecteur[i]==val) occu++;
    }
    return occu;
}


///Fonction sommeVecteur fait la somme de tous les entiers d'un vectue
int sommeVecteur(const vector<int>&vecteur) {
    int somme;
    for(int cpt=0;cpt<vecteur.size();cpt++){
        somme += vecteur[cpt];
    }
    return somme;
}


///Fonction avanceJoueur qui permet de faire avancer les joueurs
int avanceJoueur(int position, int nb, vector<int>&sentier, vector<int>&sac) {
    position-=nb;
    sac.push_back(sentier[position]);
    sentier[position] = 0;
    return position;
}


///Procédure comptePoint qui est utilisé à la fin de la partie pour
void comptePoint(const vector<int>& sac1, const vector<int>& sac2, const vector<int>& valeurs, int& pointsJoueur1, int& pointsJoueur2) {
    pointsJoueur1 = 0;
    pointsJoueur2 = 0;

    for (int i = 0; i < valeurs.size(); i++) {
        int quantiteJoueur1 = getOccurence(sac1, valeurs[i]);
        int quantiteJoueur2 =  getOccurence(sac2, valeurs[i]);

        ///Si un joueur a plus de trésors, il gagne les points équivalents à la valeur du trésor
        if (quantiteJoueur1 > quantiteJoueur2) {
            pointsJoueur1 += valeurs[i];
        } else if (quantiteJoueur2 > quantiteJoueur1) {
            pointsJoueur2 += valeurs[i];
        }
    }
}
