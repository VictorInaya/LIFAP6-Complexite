#include <iostream>

class Situation {
public:
	int map[5][4] = {
						{1,2,0,0},
						{1,0,1,1},
						{0,1,1,1},
						{1,1,1,0},
						{1,2,1,0}
						};

	int tableau[3][3] = {{0}};
	
	void afficher() {
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++)
				std::cout << tableau[i][j];
			std::cout << std::endl;
		}
	}

	Situation() {
		for(int i=0;i<5;i++){
			for(int j=0;j<map[i][2];j++){
				//si la voiture est verticale
				if((int)map[i][3] == 0) {
					//on construit vers le bas
					tableau[(int)map[i][0]+j][(int)map[i][1]] = 1;
				}
				//si la voiture est horizontale
				if((int)map[i][3] == 1) {
					//on construit vers la droite
					tableau[(int)map[i][0]][(int)map[i][1]+j] = 1;
				}
				
			}
		}
	}

};

int main () {
	Situation S;
	S.afficher();
	std::cout << (int)'5';
    return 0;
}
