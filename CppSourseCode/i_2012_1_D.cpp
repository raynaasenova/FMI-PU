// i_2012_1_D.cpp : Defines the entry point for the console application.
//
// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

const int max_players = 1000;

struct Shcool_Player {
	char player_name[50];
	char player_city[20];
	char player_school[30];
	int player_points;
};

typedef Shcool_Player Player[max_players];
Player info;

void input(Shcool_Player &pl) {

	cout << "Player name: " << endl;
	cin.getline(pl.player_name, 50);
	cout << "Player's city:" << endl;
	cin.getline(pl.player_city, 20);
	cout << "Player's shcool:" << endl;
	cin.getline(pl.player_school, 30);
	cout << "Player's points" << endl;
	cin >> pl.player_points;
	cin.ignore();
	cout << "_______________" << endl;
}

void output(Shcool_Player pl) {

	cout << pl.player_name << ", " << pl.player_city << ", " <<
		pl.player_school << ", " << pl.player_points << " points" << endl;
}

void inPlayer(Player pl, int n) {
	for (int i = 1; i <= n; i++) {
		input(pl[i]);
	}
}

void outPlayer(Player pl, int n) {
	for (int i = 1; i <= n; i++) {
		output(pl[i]);
	}
}

void SortByResult(Player pl, int n) {
	for (int i = 2; i <= n; i++) {
		for (int j = n; j >= i; j--) {
			if (pl[j - 1].player_points > pl[j].player_points) {
				Shcool_Player p = pl[j - 1];
				pl[j - 1] = pl[j];
				pl[j] = p;
			}
		}
	}
}

void SortByCityName(Player pl, int n) {
	for (int i = 2; i <= n; i++) {
		for (int j = n; j >= i; j--) {
			if (strcmp(pl[j - 1].player_school, pl[j].player_school) > 0 ||
				strcmp(pl[j - 1].player_school, pl[j].player_school) == 0 &&
				pl[j - 1].player_points > pl[j].player_points) {
				Shcool_Player p = pl[j - 1];
				pl[j - 1] = pl[j];
				pl[j] = p;
			}
		}
	}
}

void OutSortByCityName(char c[], Player pl, int n){

	for (int i = 1; i <= n; i++) {
		if (strcmp(c, pl[i].player_city) == 0) {
			output(pl[i]);
		}
	}
}

double AveragePlayersPoint(Player pl, int n) {

	double sum = 0.0, result = 0.0;
	int count = 0;
	for (int i = 1; i <= n; i++) {
		sum += pl[i].player_points;
		count++;
	}

	result = sum / count;

	return result;
	//	cout << "Average all points is" << result << endl;

}

void GetSOYstr(Player pl, int n) {

	double result = AveragePlayersPoint(pl, n);

	char soy[4] = "SOU";
	for (int i = 1; i <= n; i++) {
		if (strcmp(soy, pl[i].player_school) == 0 && result < pl[i].player_points) {
			output(pl[i]);
		}
	}
}


///////////////////// MAIN()
int main() {

	int n; char city[20];
	cout << "Enter count:" << endl;
	cin >> n;

	while (n > max_players || n < 1) {
		cout << "Not valid! Enter count:" << endl;
		cin >> n;
	}
	cin.ignore();
	cout << "___________________INPUT__________________" << endl;
	inPlayer(info, n);

	cout << "__________________OUTPUT___________________" << endl;
	outPlayer(info, n);


	cout << "__________________OUTPUT SORT BY RESULT___________________" << endl;
	SortByResult(info, n);
	outPlayer(info, n);


	cout << "__________________ENTER CITY NAME___________________" << endl;
	cin.getline(city, 20);
	cout << "__________________OUTPUT SORT BY NAME___________________" << endl;
	SortByCityName(info, n);
	OutSortByCityName(city, info, n);

	cout << "__________________OUTPUT AVERAGE___________________" << endl;
	double result = AveragePlayersPoint(info, n);
	cout << result << endl;

	GetSOYstr(info, n);
	outPlayer(info, n);
	return 0;
} // end main() function

