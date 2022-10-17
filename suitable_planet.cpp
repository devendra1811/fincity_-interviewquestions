#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void find(int n,  vector<vector<vector<float>>>& input){
        float min_E=input[n][0][0];   // min energy range
        float max_E=input[n][0][1];   // max energy range
        
        vector<int> suitable_system;  // the suitable planet around an appropriate red star
        for(int i = 0; i < n; i++){
            
            int sutable_solar= -1;            // index of suitable solar system
            int m = input[i].size();
            float energy = 0;                   //  energy for planet in a solar system
            for(int j = 0; j < m; j++){
                energy =energy+ input[i][j][0]/input[i][j][1];
            }
            if(energy >= min_E && energy <= max_E){
                sutable_solar = i;
                suitable_system.push_back(sutable_solar);
            }
        }
        
        for(int i = 0; i < suitable_system.size(); i++){
            cout << suitable_system[i] << " " ;     // final result display
        }cout << endl;
    return;
}

int main()
{
    int n=2;  // number of soler systems
    vector<vector<vector<float>>> input ={{{0.433, 200}}, {{0.89, 400}, {0.6, 300}}, {{0.003, 0.005}}}; // input
    find(n, input);
    

    return 0;
}