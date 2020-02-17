#include <iostream>
#include <string>
#include <ctime>
using namespace std;
#define MAX_ENEMIES 5

enum class EnemyType {ZOMBIE,VAMPIRE,GHOST,WITCH};

struct Enemy {
	EnemyType type;
	string name;
	int health;
};

bool equalEnemies(Enemy a, Enemy b) {
	if (a.name == b.name && a.type == b.type) {
		return true;
	}
	else {
		return false;
	}
}

Enemy createRandomEnemy() {
	for (int i = 0; i < MAX_ENEMIES; i++) {
		enemies[i].type= rand()%3 ;
		rand();
	}
}

string getEnemyTypeString(EnemyType) {

}

void main() {
	
	int enemies[MAX_ENEMIES];
	createRandomEnemy;
	equalEnemies;

	//range - based for;
}