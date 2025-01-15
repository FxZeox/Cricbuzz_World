
#include <iostream>
#include<string>
#include<iomanip>
#include<Windows.h>
using namespace std;

class Login
{
	string adName, adpass;
public:
	void set_adName();
	void set_adpass();
	string get_adName();
	string get_adpass();
	bool SignIn();
};

class Player
{
public:
	string player_name[13];
	int shirt_no[13];
	float average[13];
	int icc_rank_t20[13];
	int icc_rank_1D[13];
	int icc_rank_test[13];
	double total_runs[13];
	int match_played[13];
	int wickets[13];


	virtual void AddData(int) = 0;
	virtual void Add_Player(int) = 0;
	virtual void Remove_Player() = 0;
	virtual void Search_Player() = 0;
	virtual void Update_Player() = 0;
	virtual void Display(int) = 0;
};

class Team : public Player
{
public:
	string team_name[10];
	int team_icc_rank_t20[10];
	int team_icc_rank_1D[10];
	int team_icc_rank_test[10];
	int no_players[10];
	int matches_won[10];
	int matches_lost[10];
	string team_captain[10];
	string team_coach[10];
	string team_username[10];
	string team_password[10];

	void Remove_Player();
	void Add_Player(int);
	void Add_Data();
	/*void Add_Player(int)
	{
		Player::Add_Player(11);
	}*/
	/*void Remove_Player()
	{
		Player::Remove_Player();
	}*/
	/*void Search_Player()
	{
		Player::Search_Player();
	}*/
	/*void Update_Player()
	{
		Player::Update_Player();
	}*/
	void Search_Player();
	void AddData(int);
	void Update_Captain();
	void Update_Coach();
	void Display_Team();
	void Update_Player();
	void Display(int);
};

class MatchType : public Player
{

	string team1, team2;
	string  date[3];
	string venue[3];
	string matchtype;
	string tournamentname;
	string commentator[3];
	string umpire[3];

public:
	void Search_Player();
	void Add_Player(int);
	void AddData(int);
	void Remove_Player();
	void Update_Player();
	void Display(int);
	void conductmatch();
	void schedulematch();
	void updateworldrecords();
	void updateteamranking();
	void updateplayerranking();
	void displayupcomingmatches();
	void displayrecentmatches();

};

