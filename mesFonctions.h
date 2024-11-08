#ifndef MESFONCTIONS_H_INCLUDED
#define MESFONCTIONS_H_INCLUDED
#include <string>
#include <vector>
using namespace std;


///Prototype de la fonction affiche qui appelle deux procédures
///afficheSentier et afficheSac pour faire l'affichage
void affiche(const vector<int>&, const vector<string>&, const vector<int>&, int, const vector<int>&, const vector<int>&);


///Prototype de la procédure affihceSentier qui affiche le sentier
void afficheSentier(const vector<int>&, const vector<string>&, int);


///Prototype de la procédure comptePoint qui est utilisé à la fin de la partie pour
///afficher le décompte des point
void comptePoint(const vector<int>& sac1, const vector<int>& sac2, const vector<int>& valeurs, int& pointsJoueur1, int& pointsJoueur2);


///Protyte de la procédure afficheSac qui permet d'afficher les sacs
void afficheSac(const vector<int>&, const vector<int>&, const vector<string>&, const vector<int>&);


///Prototype de la fonction getccurence qui compte le nombre d'occurence d'un entier dans un vecteur
int getOccurence(const vector<int>&, int);


///Prototype de la fonction sommeVecteur fait la somme de tous les entiers d'un vectuer
int sommeVecteur(const vector<int>&);


///Prototype de la fonction getTresor qui renvoie le nom du trésor en fonction de sa valeur
string getTresor(int, const vector<string>&);


///Prototype de la fonction avanceJoueur qui permet de faire avancer les joueurs
int avanceJoueur(int, int, vector<int>&, vector<int>&);

#endif // MESFONCTIONS_H_INCLUDED
