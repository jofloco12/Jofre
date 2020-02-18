#include <iostream>
#include <string>
#include <ctime>
#define MAX_ENEMIES 5

enum class EnemyType {ZOMBIE,VAMPIRE,GHOST,WITCH};

struct Enemy {
	EnemyType type;
	std::string name;
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
	Enemy aux;
	std::string names[5];
	names[0] = "Alexandra";
	names[1] = "Roger F";
	names[2] = "Gripol";
	names[3] = "Jofresa";
	names[4] = "Yuan Two";
	srand(time(NULL));
	aux.health = (rand() % 100 + 100);
	aux.name = names[rand() % 5];
	aux.type = EnemyType[rand() % 4];
}

std::string getEnemyTypeString(EnemyType tipo) {
	switch (tipo)
	{
	case EnemyType::ZOMBIE:
		return "Zombie";
		break;
	case EnemyType::VAMPIRE:
		return "Vampire";
		break;
	case EnemyType::GHOST:
		return "Ghost";
		break;
	case EnemyType::WITCH:
		return "Witch";
		break;
	default:
		break;
	}
}

void main() {
	
	EnemyType enemies[MAX_ENEMIES];
	for (int i = 0; i < MAX_ENEMIES;i++) {
		createRandomEnemy[i];
		if (equalEnemies == true){
			createRandomEnemy[i + 1];
		}
		else {
			break;
		}
	}
	createRandomEnemy;
	equalEnemies;

	//range - based for;
}