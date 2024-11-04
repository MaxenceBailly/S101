#ifndef JOUEURS_H_INCLUDED
#define JOUEURS_H_INCLUDED
#include <iostream>
#include <vector>
using namespace std;

void joueur2(vector<int> &sentier,const vector<int>& Valeur,const vector<int> &j1,vector<int> &j2,int i1, int &i2);

void joueur3(vector<int> &sentier,const vector<int>& Valeur,const vector<int> & j1,vector<int> &j2,int i1, int &i2);

void joueur4(vector<int> &sentier,const vector<int>& Valeur,const vector<int> & j1,vector<int> &j2,int i1, int &i2);

void affiche(const vector<int> &sentier,const vector<int> &sac1,const vector<int> &sac2,int pos1, int pos2, int tour);

void joueurN(vector<int> &sentier,const vector<int> &valeur,const vector<int> &j1,vector<int> &j2,int pos1, int &pos2);

#endif // JOUEURS_H_INCLUDED
