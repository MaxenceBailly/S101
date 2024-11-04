#include <iostream>
#include <vector>
#include <string>
using namespace std;

void afficheSentier(vector<int> sentier) {
    for(int i=0;i<sentier.size();i++) {
        cout << sentier[i] << " ";
    }
    cout << endl;
}
