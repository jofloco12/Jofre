#include <iostream>
#include <string>
#include <ctime>


enum class EnemyType {ZOMBIE,VAMPIRE,GHOST,WITCH};

//crea una estructura amb tres varialbes de diferents tipus
struct Enemy {
	EnemyType type;
	std::string name;
	int health;
};

//funcio que compara dos enemics de diferents arrays per veure si son iguals o no
bool equalEnemies(Enemy a, Enemy b) {
	if (a.name == b.name && a.type == b.type) {
		return true;
	}
	else {
		return false;
	}
}

//funcio que inicialitza les variables de struct
Enemy createRandomEnemy() {
	Enemy aux;
	std::string names[5] = { "Alexandra","Roger F","Gripol","Jofresa","Yuan Two"};
	

	aux.health = (rand() % 100 + 100);
	aux.name = names[rand() % 5];
	//per poder crear el tipus random fem un cast dels EnemyType a int i despres
	//per transformar el string que ens retorna a => EnemyType li fem un static_cast<EnemyTpe>
	aux.type = static_cast <EnemyType> (rand() % (int)EnemyType:: WITCH + 1);
	return aux; 
}

//sutilitza per 
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
	
	srand(time(NULL));

	const int MAX_ENEMIES = 5;
	Enemy enemies[MAX_ENEMIES];
	for (int i = 0; i < MAX_ENEMIES;i++) {
		enemies [i] = createRandomEnemy();
		for (int j = 0; j <= i; j++) {
			if (equalEnemies(enemies[i], enemies[j])) {
				enemies [j]= createRandomEnemy();
				enemies[i] = enemies[j];
			}
			else {
				enemies[i] = enemies[j];
			
			}
		}
	}

	//range - based for;
	for (Enemy e : enemies) {
		std::cout << e.name << " is a " << getEnemyTypeString(e.type) << " whose life is " << e.health << std::endl;
	}
	
	
}