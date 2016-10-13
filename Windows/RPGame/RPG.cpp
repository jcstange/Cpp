#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <ctime>
#include <fstream>

using namespace std;

class Character {
public:
	std::string name;
	int attack;
	int defense;
	int hitpoints;
	int xp;
	int level;
	int goblin;
	int orc;
	int gargoyle;
	int troll;
	int dragon;

	Character() {
		name = "";
		attack = 0;
		defense = 0;
		hitpoints = 0;
		xp = 0;
		level = 1;
		goblin = 0;
		orc = 0;
		gargoyle = 0;
		troll = 0;
		dragon = 0;
	};
	Character(string na, int at, int de, int hi, int x, int le, int go, int oc, int ga, int tr, int dr) {
		name = na;
		attack = at;
		defense = de;
		hitpoints = hi;
		xp = x;
		level = le;
		goblin = go;
		orc = oc;
		gargoyle = ga;
		troll = tr;
		dragon = dr;
	};
	~Character() {
		std::cout << "Character was erased" << endl;
	}
	void Update_character();
	void level_control();

};

class Enemies {
public:
	string name;
	int attack;
	int defense;
	int hitpoints;
	int give_xp;
};

class Monster : public Enemies {
public:
	Monster(string n, int a, int d, int h, int g) {
		name = n;
		attack = a;
		defense = d;
		hitpoints = h;
		give_xp = g;
	}
	~Monster() {
		std::cout << "Monster was erased" << endl;
	};
};

void Character::Update_character() {
	int skill_points = 100 + 25*level;
	int skill_option = 0;
	hitpoints += 250;
	int add_attack = 0;
	int add_defense = 0;
	if (attack == 0) {
		cout << "Type your character name: ";
		cin >> name;
	}
	do {
		cout << name << " have " << skill_points << " skill points" << endl;
		cout << "1) To upgrade attack " << endl;
		cout << "2) To upgrade defense " << endl;
		cin >> skill_option;
		switch (skill_option) {
		case 1:
			cout << "Skill points on attack: ";
			cin >> add_attack;
			if (add_attack > skill_points) {
				cout << "You don't have skill points enough" << endl;
				break;
			}
			else {
				skill_points -= add_attack;
				attack += add_attack;
				cout << "Attach upgraded: " << attack << endl;

			}
			break;
		case 2:
			cout << "Skill points on defense: ";
			cin >> add_defense;
			if (add_defense > skill_points) {
				cout << "You don't have skill points enough" << endl;
				break;
			}
			else {
				skill_points -= add_defense;
				defense += add_defense;
				cout << "Defense upgraded: " << defense << endl;
			}
			break;
		default:
			cout << "Not an option" << endl;
			break;
		}
	} while (skill_points > 0);

	cout << "You have: " << skill_points << " skill points" << endl;
	cout << "Let's start the game" << endl;
}

void Character::level_control() {
	int xp_to_level[100];
	xp_to_level[0] = 0;
	xp_to_level[1] = 1000;
	xp_to_level[2] = 3000;
	for (unsigned i = 3; i < 101; ++i) {
		xp_to_level[i] = xp_to_level[i - 1] * 2;
	}
	int xp_to_next = xp_to_level[level] - xp;
	cout << "XP to next level: " << xp_to_next << endl;


	if (xp_to_next<=0) {
		cout << "Level Up!" << endl;
		++level;
		cout << name << " is on level " << level << endl;
		Update_character();
	}

}

bool Gamestart() {
	int option = 0;
	cout << "Welcome to Warrior vs. Monster RPG" << endl;
	cout << "1) New Game " << endl;
	cout << "2) Load Game " << endl;
	cin >> option;

	switch (option) {
	case 1:
		return false;
		break;
	case 2:
		cout << "Loading Game" << endl;
		return true;
		break;
	default:
		cout << "Invalid Option" << endl;
		Gamestart();
		break;
	}
}

int main() {
	std::string name;
	int attack=0;
	int defense=0;
	int hitpoints=0;
	int xp=0;
	int level=1;
	int goblin=0;
	int orc=0;
	int gargoyle=0;
	int troll=0;
	int dragon=0;
	bool start = Gamestart();
	if (start) {
		ifstream saved("saved.txt");
		saved >> name >> attack >> defense >>  hitpoints >> xp >> level >> goblin >> orc >> gargoyle  >> troll >> dragon;
	}
	srand(time(0));
	Character a(name, attack, defense, hitpoints, xp, level, goblin, orc, gargoyle, troll, dragon);
	Character *ptr = &a;
	if (!start) a.Update_character();
	bool game = 1;
	do {
	chose:
		cout << "Hello " << a.name << endl;
		cout << "Choose your opponent: " << endl;
		cout << "1) Goblin " << endl;
		if (a.level >= 3) {
			cout << "2) Orc " << endl;
		}
		if (a.level >= 6) {
			cout << "3) Gargoyle" << endl;
		}
		if (a.level >= 10) {
			cout << "4) Troll " << endl;
		}
		if (a.level >= 15) {
			cout << "5) Dragon " << endl;
		}
		int option;
		cin >> option;
		string monster_name = "";
		int attack = 0;
		int defense = 0;
		int hitpoints = 0;
		int give_xp = 0;
		int to_recover = 0;
		switch (option) {
		case 1:
			monster_name = "Goblin";
			attack = 10;
			defense = 10;
			hitpoints = 100;
			give_xp = 1000;
			to_recover = 100;
			break;
		case 2:
			monster_name = "Orc";
			attack = 100;
			defense = 100;
			hitpoints = 1000;
			give_xp = 10000;
			to_recover = 200;
			break;
		case 3:
			monster_name = "Gargoyle";
			attack = 250;
			defense = 250;
			hitpoints = 2500;
			give_xp = 25000;
			to_recover = 500;
			break;
		case 4:
			monster_name = "Troll";
			attack = 500;
			defense = 500;
			hitpoints = 5000;
			give_xp = 50000;
			to_recover = 1000;
			break;
		case 5:
			monster_name = "Dragon";
			attack = 1000;
			defense = 1000;
			hitpoints = 10000;
			give_xp = 100000;
			to_recover = 2000;
			break;
		default:
			cout << "Option not allowed" << endl;
			goto chose;
		}
		Monster monster(monster_name, attack, defense, hitpoints, give_xp);
		cout << monster.name << " is waiting for you to fight" << endl;
		std::cout << "Press enter to continue ...";
		std::cin.get();
		float char_to_hit = 20 - (10 + (a.attack / monster.defense));
		float mons_to_hit = 20 - (10 + (monster.attack / a.defense));
		cout << "Initiative: ";
		int init1 = rand() % 20;
		int init2 = rand() % 20;
		cout << a.name << ": " << init1 << " - ";
		cout << monster.name << ": " << init2 << endl;
		string winner = "";
		init1 > init2 ? winner = a.name : winner = monster.name;
		cout << winner << " won" << endl;
		std::cout << "Press enter to continue ...";
		std::cin.get();
		bool start = false;
		if (winner == a.name) start = true;
		else start = false;
		while (monster.hitpoints > 0 && a.hitpoints > 0) {
			srand(time(0));
			if (start) {
				int blow = rand() % 20;
				cout << blow << endl;
				if (char_to_hit <= blow) {
					cout << a.name << " hit" << endl;
					monster.hitpoints -= a.attack;
					cout << monster.name << " has " << monster.hitpoints << endl;
				}
				else cout << a.name << " missed" << endl;
				start = !start;
			}
			else if (!start) {
				int blow = rand() % 20;
				cout << blow << endl;
				if (mons_to_hit <= blow) {
					cout << monster.name << " hit" << endl;
					a.hitpoints -= monster.attack;
					cout << a.name << " has " << a.hitpoints << " hit point" << endl;
				}
				else cout << monster.name << " missed" << endl;
				start = !start;
			}
			std::cout << "Press enter to continue ...";
			std::cin.get();
		}
		cout << "End of the fight" << endl;
		a.hitpoints > monster.hitpoints ? winner = a.name : winner = monster.name;
		cout << "The winner is " << winner << endl;
		if (winner == a.name) {
			a.xp += monster.give_xp;
			cout << a.name << " won " << monster.give_xp << " xp points" << endl;
			cout << "Now has " << a.xp << " and is on " << a.level << " level" << endl;
			a.hitpoints += to_recover;
			cout << a.name << " has " << a.hitpoints << " hit points" << endl;
			system("pause");			
			if (monster.name == "Goblin")  a.goblin++;
			else if (monster.name == "Orc") a.orc++;
			else if (monster.name == "Gargoyle") a.gargoyle++;
			else if (monster.name == "Troll") a.troll++;
			else if (monster.name == "Dragon") a.dragon++;
			cout << a.name << " killed " << a.goblin << " Goblins" << endl;
			cout << a.name << " killed " << a.orc << " Orcs" << endl;
			cout << a.name << " killed " << a.gargoyle << " Gargoyles" << endl;
			cout << a.name << " killed " << a.troll << " Trolls" << endl;
			cout << a.name << " killed " << a.dragon << " Dragons" << endl;
			monster.~Monster();
			ofstream saved("saved.txt", std::ofstream::trunc);
			saved << ptr->name << " " << ptr->attack << " " << ptr->defense << " " << ptr->hitpoints << " " << ptr->xp << " " << ptr->level << " " << ptr->goblin << " " << ptr->orc << " " << ptr->gargoyle << " " << ptr->troll << " " << ptr->dragon;
			saved.close();
			a.level_control();
		}
		else {
			cout << a.name << " is dead" << endl;
			cout << "GAME OVER" << endl;
			a.~Character();
			game = 0;
			std::cout << "Press enter to continue ...";
			std::cin.get();
		}
	} while (game);


	return 0;
}



