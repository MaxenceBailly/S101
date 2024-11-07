#ifndef MESFONCTIONS_H_INCLUDED
#define MESFONCTIONS_H_INCLUDED
#include <string>
#include <vector>
using namespace std;

void affiche(const vector<int>&, const vector<string>&, const vector<int>&, int, const vector<int>&, const vector<int>&);
void afficheSentier(const vector<int>&, const vector<string>&, int);
void afficheSac(const vector<int>&, const vector<int>&, const vector<string>&, const vector<int>&);
int getOccurence(const vector<int>&, int);
int sommeVecteur(const vector<int>&);
string getTresor(int, const vector<string>&);

#endif // MESFONCTIONS_H_INCLUDED
