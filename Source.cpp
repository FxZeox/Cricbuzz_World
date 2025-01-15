#include "Header.h";
void Login::set_adName()
{
	cout << "\nName for signUp:\t";
	cin >> adName;
}
void Login::set_adpass()
{
	cout << "Password for signUp:\t";
	cin >> adpass;
}
string Login::get_adName()
{
	return adName;
}
string Login::get_adpass()
{
	return adpass;
}
bool Login::SignIn()
{
	string a, b;
	bool found = false;
	cout << "\nName and Password for signIn:\n";
	while (found != true)
	{
		cin >> a >> b;
		if (a == get_adName() && b == get_adpass())
		{
			found = true;
			break;
		}
		else
		{
			found = false;
			cout << "Unauthorized user! please re-enter the name ans paaaword.\n";
		}
	}

	return found;
}

void Team::Add_Data()
{
	cout << "\n\n\t\t\t\t\tGroup members\n";
	cout << "\n\tHusnain riaz\t\t\t\t\t\t\tUsman Ahmad\n";
	Sleep(5000);
	system("cls");
	cout << "\n\n\t\t\t\tWELCOME TO CRICBUZZ WORLD\n";
	cout << "\nGet the latest cricket news,live scorecard and many more about cricket only on cricbuzz\n";
	Sleep(5000);
	system("cls");
	for (int i = 0; i < 10; i++)
	{
		cout << "-------------------------------->" << endl;
		cout << "\tTeams" << endl;
		cout << "\t1. England\n";
		cout << "\t2. Australia\n";
		cout << "\t3. India\n";
		cout << "\t4. Pakistan\n";
		cout << "\t5. West Indies\n";
		cout << "\t6. South Africa\n";
		cout << "\t7. New Zealand\n";
		cout << "\t8. Afghanistan\n";
		cout << "\t9. Sri Lanka\n";
		cout << "\t10. Bangladesh\n";

		cout << "\nEnter the data of team" << i + 1 << ":\n";
		cout << "Team name:\t";
		cin >> team_name[i];
		cout << "Total no_players :\t";
		cin >> no_players[i];
		cout << "Team ICC T20 rank:\t";
		cin >> team_icc_rank_t20[i];
		cout << "Team ICC ODI rank:\t";
		cin >> team_icc_rank_1D[i];
		cout << "Team ICC Test rank:\t";
		cin >> team_icc_rank_test[i];
		cout << "Matches won:\t";
		cin >> matches_won[i];
		cout << "Matches lost:\t";
		cin >> matches_lost[i];
		cout << "Team captain:\t";
		cin >> team_captain[i];
		cout << "Team coach:\t";
		cin >> team_coach[i];
		system("cls");
	}
}

void Team::Update_Captain()
{
	int count = 0, temp = 0;
	cout << "-------------------------------->" << endl;
	cout << "\tUpdate Captain" << endl;
	string team;
	cout << "Enter Current Captain :";
	cin >> team;
	for (int i = 0; i < 13; i++)
	{
		if (team == team_captain[i])
		{
			temp = i;
			count++;
			cout << "Update captain." << endl;
			cout << "Enter New Captain :";
			cin.ignore();
			getline(cin, team_captain[i]);
			//cin >> team_captain[i];
			cout << "\t\tCaptain is updated";
			cout << endl;
			cout << "======================================================================================================================================>" << endl;
			cout << "     Team Name   \tNo. of Players\t  Ranking  T20 Rank  ODI Rank  Test Rank   Matches Won  Match Lost  Team Captain   Team Coach" << endl;
			cout << "======================================================================================================================================>" << endl;
			for (int i = 0; i < 10; i++)
			{

				cout << team_name[i] << setw(7);
				cout << no_players[i] << setw(12);
				cout << team_icc_rank_t20[i] << setw(8);
				cout << team_icc_rank_1D[i] << setw(10);
				cout << team_icc_rank_test[i] << setw(10);
				cout << matches_won[i] << setw(14);
				cout << matches_lost[i] << setw(10);
				cout << team_captain[i] << setw(8);
				cout << team_coach[i];
				cout << endl;
			}
			cout << "-------------------------------------------------------------------------------------------------->" << endl;
		}
	}
	if (count == 0)
		cout << "The Player you entered is not a Captain\n";
	else
	{
		for (int i = 0; i < 13; i++)
		{
			if (team == player_name[i])
				player_name[i] = team_captain[temp];
		}
	}
}

void Team::Update_Coach()
{
	int count = 0;
	cout << "-------------------------------->" << endl;
	cout << "\tUpdate Coach" << endl;
	string team;
	cout << "Enter Current Coach : ";
	cin >> team;
	for (int i = 0; i < 10; i++)
	{
		if (team == team_coach[i])
		{
			count++;
			cout << "Update coach." << endl;
			cout << "Enter New Coach : ";
			cin.ignore();
			getline(cin, team_coach[i]);
			//cin >> team_coach[i];
			cout << "\t\tCoach is updated";
			cout << endl;
			cout << "======================================================================================================================================>" << endl;
			cout << "     Team Name   \tNo. of Players\t  Ranking  T20 Rank  ODI Rank  Test Rank   Matches Won  Match Lost  Team Captain   Team Coach" << endl;
			cout << "======================================================================================================================================>" << endl;
			for (int i = 0; i < 10; i++)
			{

				cout << team_name[i] << setw(7);
				cout << no_players[i] << setw(12);
				cout << team_icc_rank_t20[i] << setw(8);
				cout << team_icc_rank_1D[i] << setw(10);
				cout << team_icc_rank_test[i] << setw(10);
				cout << matches_won[i] << setw(14);
				cout << matches_lost[i] << setw(10);
				cout << team_captain[i] << setw(8);
				cout << team_coach[i];
				cout << endl;
			}
			cout << "-------------------------------------------------------------------------------------------------->" << endl;
		}
	}
	if (count == 0)
	{
		cout << "The person you entered is not a Coach\n";
	}
}

void Team::Display_Team()
{
	cout << "\n======================================================================================================================================>" << endl;
	cout << "Team Name\tTotal Player\tT20Rank  ODIRank  TestRank   Match Won  Match Lost  Team Captain   Team Coach" << endl;
	cout << "======================================================================================================================================>" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "\nData of team " << i + 1 << ":" << endl;
		cout << "Team name:" << team_name[i] << setw(12);
		cout << "Total no_players :" << no_players[i] << setw(12);
		cout << "Team ICC T20 rank:" << team_icc_rank_t20[i] << setw(12);
		cout << "Team ICC ODI rank:" << team_icc_rank_1D[i] << setw(10);
		cout << "Team ICC Test rank:" << team_icc_rank_test[i] << setw(10);
		cout << "Matches won:" << matches_won[i] << setw(14);
		cout << "Matches lost:" << matches_lost[i] << setw(17);
		cout << "Team captain:" << team_captain[i] << setw(18);
		cout << "Team coach:" << team_coach[i];
		cout << endl;
	}
	cout << "------------------------------------------------------------------------------------------------------------------------------------->" << endl;
}





void Team::AddData(int n)
{
	int choice = n;
	if (choice == 1)
	{
		for (int i = 0; i < 11; i++)
		{
			cout << "\nData of player " << i + 1 << ":\n";
			cout << "\nPlayer Name:\t";
			cin >> player_name[i];
			cout << "Player Shirt No:\t";
			cin >> shirt_no[i];
			cout << "Player Average:\t";
			cin >> average[i];
			cout << "Player ICC T20 rank:\t";
			cin >> icc_rank_t20[i];
			cout << "Player ICC ODI rank:\t";
			cin >> icc_rank_1D[i];
			cout << "Player ICC Test rank:\t";
			cin >> icc_rank_test[i];
			cout << "Player Total runs:\t";
			cin >> total_runs[i];
			cout << "Total matches played\t";
			cin >> match_played[i];
			cout << "Total wickets:\t";
			cin >> wickets[i];
			system("cls");
		}

	}
	else if (choice == 2)
	{

		for (int i = 0; i < 11; i++)
		{
			cout << "\nData of player " << i + 1 << ":\n";
			cout << "\nPlayer Name:\t";
			cin >> player_name[i];
			cout << "Player Shirt No:\t";
			cin >> shirt_no[i];
			cout << "Player Average:\t";
			cin >> average[i];
			cout << "Player ICC T20 rank:\t";
			cin >> icc_rank_t20[i];
			cout << "Player ICC ODI rank:\t";
			cin >> icc_rank_1D[i];
			cout << "Player ICC Test rank:\t";
			cin >> icc_rank_test[i];
			cout << "Player Total runs:\t";
			cin >> total_runs[i];
			cout << "Total matches played\t";
			cin >> match_played[i];
			cout << "Total wickets:\t";
			cin >> wickets[i];
			system("cls");
		}

	}
	else if (choice == 3)
	{
		for (int i = 0; i < 11; i++)
		{
			cout << "\nData of player " << i + 1 << ":\n";
			cout << "\nPlayer Name:\t";
			cin >> player_name[i];
			cout << "Player Shirt No:\t";
			cin >> shirt_no[i];
			cout << "Player Average:\t";
			cin >> average[i];
			cout << "Player ICC T20 rank:\t";
			cin >> icc_rank_t20[i];
			cout << "Player ICC ODI rank:\t";
			cin >> icc_rank_1D[i];
			cout << "Player ICC Test rank:\t";
			cin >> icc_rank_test[i];
			cout << "Player Total runs:\t";
			cin >> total_runs[i];
			cout << "Total matches played\t";
			cin >> match_played[i];
			cout << "Total wickets:\t";
			cin >> wickets[i];
			system("cls");
		}

	}
	else if (choice == 4)
	{
		for (int i = 0; i < 11; i++)
		{
			cout << "\nData of player " << i + 1 << ":\n";
			cout << "\nPlayer Name:\t";
			cin >> player_name[i];
			cout << "Player Shirt No:\t";
			cin >> shirt_no[i];
			cout << "Player Average:\t";
			cin >> average[i];
			cout << "Player ICC T20 rank:\t";
			cin >> icc_rank_t20[i];
			cout << "Player ICC ODI rank:\t";
			cin >> icc_rank_1D[i];
			cout << "Player ICC Test rank:\t";
			cin >> icc_rank_test[i];
			cout << "Player Total runs:\t";
			cin >> total_runs[i];
			cout << "Total matches played\t";
			cin >> match_played[i];
			cout << "Total wickets:\t";
			cin >> wickets[i];
			system("cls");
		}

	}
	else if (choice == 5)
	{
		for (int i = 0; i < 11; i++)
		{
			cout << "\nData of player " << i + 1 << ":\n";
			cout << "\nPlayer Name:\t";
			cin >> player_name[i];
			cout << "Player Shirt No:\t";
			cin >> shirt_no[i];
			cout << "Player Average:\t";
			cin >> average[i];
			cout << "Player ICC T20 rank:\t";
			cin >> icc_rank_t20[i];
			cout << "Player ICC ODI rank:\t";
			cin >> icc_rank_1D[i];
			cout << "Player ICC Test rank:\t";
			cin >> icc_rank_test[i];
			cout << "Player Total runs:\t";
			cin >> total_runs[i];
			cout << "Total matches played\t";
			cin >> match_played[i];
			cout << "Total wickets:\t";
			cin >> wickets[i];
			system("cls");
		}

	}
	else if (choice == 6)
	{
		for (int i = 0; i < 11; i++)
		{
			cout << "\nData of player " << i + 1 << ":\n";
			cout << "\nPlayer Name:\t";
			cin >> player_name[i];
			cout << "Player Shirt No:\t";
			cin >> shirt_no[i];
			cout << "Player Average:\t";
			cin >> average[i];
			cout << "Player ICC T20 rank:\t";
			cin >> icc_rank_t20[i];
			cout << "Player ICC ODI rank:\t";
			cin >> icc_rank_1D[i];
			cout << "Player ICC Test rank:\t";
			cin >> icc_rank_test[i];
			cout << "Player Total runs:\t";
			cin >> total_runs[i];
			cout << "Total matches played\t";
			cin >> match_played[i];
			cout << "Total wickets:\t";
			cin >> wickets[i];
			system("cls");
		}

	}
	else if (choice == 7)
	{
		for (int i = 0; i < 11; i++)
		{
			cout << "\nData of player " << i + 1 << ":\n";
			cout << "\nPlayer Name:\t";
			cin >> player_name[i];
			cout << "Player Shirt No:\t";
			cin >> shirt_no[i];
			cout << "Player Average:\t";
			cin >> average[i];
			cout << "Player ICC T20 rank:\t";
			cin >> icc_rank_t20[i];
			cout << "Player ICC ODI rank:\t";
			cin >> icc_rank_1D[i];
			cout << "Player ICC Test rank:\t";
			cin >> icc_rank_test[i];
			cout << "Player Total runs:\t";
			cin >> total_runs[i];
			cout << "Total matches played\t";
			cin >> match_played[i];
			cout << "Total wickets:\t";
			cin >> wickets[i];
			system("cls");
		}

	}
	else if (choice == 8)
	{

		for (int i = 0; i < 11; i++)
		{
			cout << "\nData of player " << i + 1 << ":\n";
			cout << "\nPlayer Name:\t";
			cin >> player_name[i];
			cout << "Player Shirt No:\t";
			cin >> shirt_no[i];
			cout << "Player Average:\t";
			cin >> average[i];
			cout << "Player ICC T20 rank:\t";
			cin >> icc_rank_t20[i];
			cout << "Player ICC ODI rank:\t";
			cin >> icc_rank_1D[i];
			cout << "Player ICC Test rank:\t";
			cin >> icc_rank_test[i];
			cout << "Player Total runs:\t";
			cin >> total_runs[i];
			cout << "Total matches played\t";
			cin >> match_played[i];
			cout << "Total wickets:\t";
			cin >> wickets[i];
			system("cls");
		}

	}
	else if (choice == 9)
	{

		for (int i = 0; i < 11; i++)
		{
			cout << "\nData of player " << i + 1 << ":\n";
			cout << "\nPlayer Name:\t";
			cin >> player_name[i];
			cout << "Player Shirt No:\t";
			cin >> shirt_no[i];
			cout << "Player Average:\t";
			cin >> average[i];
			cout << "Player ICC T20 rank:\t";
			cin >> icc_rank_t20[i];
			cout << "Player ICC ODI rank:\t";
			cin >> icc_rank_1D[i];
			cout << "Player ICC Test rank:\t";
			cin >> icc_rank_test[i];
			cout << "Player Total runs:\t";
			cin >> total_runs[i];
			cout << "Total matches played\t";
			cin >> match_played[i];
			cout << "Total wickets:\t";
			cin >> wickets[i];
			system("cls");
		}

	}
	else if (choice == 10)
	{

		for (int i = 0; i < 11; i++)
		{
			cout << "\nData of player " << i + 1 << ":\n";
			cout << "\nPlayer Name:\t";
			cin >> player_name[i];
			cout << "Player Shirt No:\t";
			cin >> shirt_no[i];
			cout << "Player Average:\t";
			cin >> average[i];
			cout << "Player ICC T20 rank:\t";
			cin >> icc_rank_t20[i];
			cout << "Player ICC ODI rank:\t";
			cin >> icc_rank_1D[i];
			cout << "Player ICC Test rank:\t";
			cin >> icc_rank_test[i];
			cout << "Player Total runs:\t";
			cin >> total_runs[i];
			cout << "Total matches played\t";
			cin >> match_played[i];
			cout << "Total wickets:\t";
			cin >> wickets[i];
			system("cls");
		}
	}
}
void Team::Display(int loopsize = 11)
{
	cout << "=================================================================================================>" << endl;
	cout << "     Name      \tShirt \t  Average  T20 Rank  ODI Rank  Test Rank    Total Run  Match   Wickets" << endl;
	cout << "=================================================================================================>" << endl;
	for (int i = 0; i < loopsize; i++)
	{

		cout << player_name[i] << setw(7);
		cout << shirt_no[i] << setw(12);
		cout << average[i] << setw(8);
		cout << icc_rank_t20[i] << setw(10);
		cout << icc_rank_1D[i] << setw(10);
		cout << icc_rank_test[i] << setw(14);
		cout << total_runs[i] << setw(10);
		cout << match_played[i] << setw(8);
		cout << wickets[i];
		cout << endl;
	}
	cout << "-------------------------------------------------------------------------------------------------->" << endl;
}



//to add a player
void Team::Add_Player(int size = 12)
{
	cout << "-------------------------------->" << endl;
	cout << "Add players" << endl;
	cout << "Enter Player's data" << endl;
	for (int i = 11; i < size; i++)
	{
		cin.ignore();
		cout << "Name         :";
		getline(cin, player_name[i]);
		cout << "Shirt No     :";
		cin >> shirt_no[i];
		cout << "Average      :";
		cin >> average[i];
		cout << "T20 Ranking  :";
		cin >> icc_rank_t20[i];
		cout << "ODI Ranking  :";
		cin >> icc_rank_1D[i];
		cout << "Test Ranking :";
		cin >> icc_rank_test[i];
		cout << "total runs   :";
		cin >> total_runs[i];
		cout << "Total match  :";
		cin >> match_played[i];
		cout << "Total wicket :";
		cin >> wickets[i];
	}

}


//to remove a player

void Team::Remove_Player()
{
	string removename;
	int shirt;
	cout << "-------------------------------->" << endl;
	cout << "\tRemove Players" << endl;
	cout << "Enter Name of player to remove :";
	cin.ignore();
	getline(cin, removename);
	cout << "Enter Shirt number :";
	cin >> shirt;
	for (int i = 0; i < 14; i++)
	{
		if (removename == player_name[i])
			//if (shirt == shirt_no[i])
		{
			cout << "Player's Data Deleted\n";
			average[i] = 0.0;
			icc_rank_t20[i] = 0;
			icc_rank_1D[i] = 0;
			icc_rank_test[i] = 0;
			total_runs[i] = 0;
			match_played[i] = 0;
			wickets[i] = 0;
		}
	}

}


//to search a player
void Team::Search_Player()
{
	cout << "-------------------------------->" << endl;
	cout << "\tSearch Players" << endl;;
	string name;
	int shirtfind;
	cout << "Enter Player name :";
	cin.ignore();
	getline(cin, name);
	cout << "Enter shirt :";
	cin >> shirtfind;
	for (int i = 0; i < 13; i++)
	{
		if (shirtfind == shirt_no[i])
		{
			cout << "\tPlayer is found :)" << endl;
			cout << "=================================================================================================>" << endl;
			cout << "     Name      \tShirt \t  Average  T20 Rank  ODI Rank  Test Rank    Total Run  Match   Wickets" << endl;
			cout << "=================================================================================================>" << endl;
			cout << setw(1) << player_name[i];
			cout << setw(8) << shirt_no[i];
			cout << setw(11) << average[i];
			cout << setw(7) << icc_rank_t20[i];
			cout << setw(10) << icc_rank_1D[i];
			cout << setw(10) << icc_rank_test[i];
			cout << setw(15) << total_runs[i];
			cout << setw(8) << match_played[i];
			cout << setw(8) << wickets[i];
			cout << endl;
			break;
		}

	}


}


//to update a player

void Team::Update_Player()
{
	cout << "-------------------------------->" << endl;
	cout << "\tUpdate Players" << endl;
	string name;
	cout << "Enter Player name :";
	cin.ignore();
	getline(cin, name);
	cout << "Enter Shirt number to update :";
	int updateshirt;
	cin >> updateshirt;
	for (int i = 0; i < 13; i++)
	{
		if (updateshirt == shirt_no[i])
		{

			cout << "Update player." << endl;
			cout << "Name        :";
			cin.ignore();
			getline(cin, player_name[i]);
			//cin >> player_name[i];
			cout << "Shirt no    :";
			cin >> shirt_no[i];
			cout << "AverGE      :";
			cin >> average[i];
			cout << "T20 Ranking :";
			cin >> icc_rank_t20[i];
			cout << "ODI Ranking :";
			cin >> icc_rank_1D[i];
			cout << "Test Ranking :";
			cin >> icc_rank_test[i];
			cout << "Total Runs  :";
			cin >> total_runs[i];
			cout << "Total Match :";
			cin >> match_played[i];
			cout << "Total Wicket:";
			cin >> wickets[i];
			cout << "\t\tPlayer is updated";
			cout << endl;
			cout << "=================================================================================================>" << endl;
			cout << "     Name      \tShirt \t  Average  T20 Rank  ODI Rank  Test Rank    Total Run  Match   Wickets" << endl;
			cout << "=================================================================================================>" << endl;
			cout << setw(1) << player_name[i];
			cout << setw(8) << shirt_no[i];
			cout << setw(11) << average[i];
			cout << setw(7) << icc_rank_t20[i];
			cout << setw(10) << icc_rank_1D[i];
			cout << setw(10) << icc_rank_test[i];
			cout << setw(15) << total_runs[i];
			cout << setw(8) << match_played[i];
			cout << setw(8) << wickets[i];
			cout << endl;
			break;
		}

	}

}


void MatchType::conductmatch()
{

	system("cls");
	cout << "Enter first Team name  :";
	cin.ignore();
	getline(cin, team1);
	cout << "Enter second Team name :";
	getline(cin, team2);

	int selection, tournnaselect;
	cout << "Select type of Tournament ." << endl;
	cout << "1. For PSL" << endl;
	cout << "2. For World Cup" << endl;
	cout << "3. For Ashes Series" << endl;
	cin >> tournnaselect;
	if (tournnaselect == 1)
	{
		cout << "You Have selected PSL." << endl;
		cout << "Select Match Type ." << endl;
		cout << "1. For T20 Match" << endl;
		cout << "2. For ODI Match" << endl;
		cout << "3. For Test Match" << endl;
		cin >> selection;
		if (selection == 2 || selection == 3)
		{
			cout << "You can only Select T20 Type" << endl;
			cout << "So T20 Match Type Has Selected :)" << endl;
		}
		else
		{
			cout << "You have selected T20 match type" << endl;
		}
	}
	else if (tournnaselect == 2)
	{
		cout << "You have selected Worled Cup" << endl;
	sel:
		cout << "Select Match Type ." << endl;
		cout << "1. For T20 Match" << endl;
		cout << "2. For ODI Match" << endl;
		cout << "3. For Test Match" << endl;
		cin >> selection;
		if (selection == 3)
		{
			cout << "You can only Select T20 And ODI Match Type" << endl;
			goto sel;
		}
		else if (selection == 2)
		{
			cout << "You have selected ODI match" << endl;
		}
		else if (selection == 1)
		{
			cout << "You have selected T20 Match" << endl;
		}
		else
		{
			cout << "Enter number form 1 to 3" << endl;
			goto sel;
		}
	}
	else if (tournnaselect == 3)
	{
		cout << "You have selected Ashes Series" << endl;
		cout << "Select Match Type ." << endl;
		cout << "1. For T20 Match" << endl;
		cout << "2. For ODI Match" << endl;
		cout << "3. For Test Match" << endl;
		cin >> selection;


	}
	for (int i = 0; i < 3; i++)
	{

		cout << date[i];
		cout << venue[i];
		cout << commentator[i];
		cout << umpire[i];
	}
	system("cls");
	int conchoice;
	cout << "\n\t\t  Match is Scheduled." << endl;
	cout << "\t\t  " << team1 << "  VS  " << team2 << endl << endl;
	cout << "===================================================================================>" << endl;
	cout << "Date\t\t Venue  \t\tCommentator\t\tUmpire" << endl;
	cout << "===================================================================================>" << endl;
	for (int i = 0; i < 3; i++)
	{

		cout << i + 1 << ". " << date[i] << setw(20);
		cout << venue[i] << setw(22);
		cout << commentator[i] << setw(20);
		cout << umpire[i];
		cout << endl;
	}
	cout << "Please Select your choice:";
	cin >> conchoice;
	system("cls");
	cout << "\n\t\t  Match is Scheduled." << endl;
	cout << "\t\t  " << team1 << "  VS  " << team2 << endl << endl;
	cout << "------------------------------------------------------------------------------->" << endl;
	cout << "Date\t\t Venue  \t\tCommentator\t\tUmpire" << endl;
	cout << "------------------------------------------------------------------------------->" << endl;
	if (conchoice == 1)
	{

		cout << date[0] << setw(20);
		cout << venue[0] << setw(22);
		cout << commentator[0] << setw(20);
		cout << umpire[0];
		cout << endl;
	}
	else if (conchoice == 2)
	{

		cout << date[1] << setw(20);
		cout << venue[1] << setw(22);
		cout << commentator[1] << setw(20);
		cout << umpire[1];
		cout << endl;

	}
	else
	{

		cout << date[2] << setw(20);
		cout << venue[2] << setw(22);
		cout << commentator[2] << setw(20);
		cout << umpire[2];
		cout << endl;
	}
	cout << endl;
	int toss, batorbowl;
	cout << "\nLet's Begin Match By Making Toss" << endl;
	srand(time(0));
	toss = rand() % 2 + 1;
	if (toss == 1)
	{
		cout << team1 << " has won the Toss" << endl;
		cout << "Please chose the option" << endl;
		cout << "1. For Bat First" << endl;
		cout << "2.For Bowl FIrst" << endl;
		cin >> batorbowl;
		if (batorbowl == 1)
		{
			cout << team1 << " Select Bat First" << endl;
		}
		else
		{
			cout << team1 << " select the Bowl First" << endl;
		}
	}
	else
	{
		cout << team2 << " has won the toss" << endl; cout << "Please chose the option" << endl;
		cout << "1. For Bat First" << endl;
		cout << "2.For Bowl FIrst" << endl;
		cin >> batorbowl;
		if (batorbowl == 1)
		{
			cout << team2 << " Select Bat First" << endl;
		}
		else
		{
			cout << team2 << " select the Bowl First" << endl;
		}
	}
	int total_score = 0;
	int total_score2 = 0;
	int total_wicket = 0;
	int total_wicket2 = 0;
	int option, score[6], wickets[10];

	for (int i = 0; i < 6; ++i) {

		srand(time(0));

		score[i] = (rand() % 270 + 1);

		total_score = score[i];
		while (score[i] < score[i - 1])

			score[i] = (rand() % 270);
		system("cls");
		cout << team1 << " is batting " << endl;
		cout << "================================>" << endl;
		cout << "Total score  = " << score[i] << endl;
		Sleep(2000);

		srand(time(0));
	wiki:
		wickets[i] = (rand() % 10 + 1);
		if (wickets[i] > 4)
		{
			goto wiki;
		}
		while (wickets[i] < wickets[i - 1])
			wickets[i] = (rand() % 10 + 1);
		total_wicket = wickets[i];
		if (total_wicket == 10)
		{
			break;
		}

		cout << "Total Out " << " = " << wickets[i] << endl;
		Sleep(2000);
	}

	cout << "Now its " << team2 << "'s turn" << endl;
	system("pause");


	for (int i = 0; i < 6; ++i) {

		score[i] = (rand() % 270 + 1);



		total_score2 = score[i];
		while (score[i] < score[i - 1])
			score[i] = (rand() % 270 + 1);
		system("cls");
		cout << "================================>" << endl;
		cout << team2 << " is batting  " << endl;
		cout << "Total  score = " << score[i] << endl;
		Sleep(2000);
		if (total_score2 >= total_score)
		{
			break;
		}
		srand(time(0));
	wik:
		wickets[i] = (rand() % 10 + 1);
		if (wickets[i] > 5)
		{
			goto wik;
		}
		while (wickets[i] < wickets[i - 1])
			wickets[i] = (rand() % 10 + 1);
		total_wicket2 = wickets[i];
		if (total_wicket2 == 10)
		{
			break;
		}
		cout << "Total out " << " = " << wickets[i] << endl;
		Sleep(2000);
	}


	system("cls");
	cout << "=============================================================>" << endl;
	cout << "Score Board of " << team1 << " and " << team2 << " is here \n";
	cout << "=============================================================>" << endl;
	cout << "Total Runs of " << team1 << " is =" << total_score << endl;
	cout << "Total Wickets of " << team1 << " is =" << total_wicket << endl;
	cout << "Total Runs of " << team2 << " is =" << total_score2 << endl;
	cout << "Total Wickets of " << team2 << " is =" << total_wicket2 << endl;
	if (total_score > total_score2) {
		cout << "-------------------------------------->" << endl;
		cout << team1 << " is the Winner !!!\n";
	}
	else
	{
		cout << "-------------------------------------->" << endl;
		cout << team2 << " is the Winner Team !!!\n";
	}
}



void MatchType::displayupcomingmatches()
{
	system("cls");

	cout << "\t\t\t\t\tUpcoming Matches." << endl;
	cout << "==================================================================================================================================>" << endl;
	cout << "   Teams\t\t  Date\t\t   Venue  \t\t  Commentator\t\t\t Umpire" << endl;
	cout << "==================================================================================================================================>" << endl;
	cout << "1. Pak vs Ind\t\t" << "25 July 21\t" << "Sydney Stadium\t  " << "      Rameez Raja & Rudi Koertz\t" << "Aleem Dar " << endl;
	cout << "2. Aus vs Eng\t\t" << "26 July 21\t" << "Mellbourne Stadium\t" << "Wasim Akram & Joe Will\t" << "\tJohn Cramer" << endl;
	cout << "3. Ban vs Sri\t\t" << "27 July 21\t" << "Abu Dhabbi Stadium\t" << "Khushaal  & Jason Roy\t" << "\tAdlaa John " << endl;
	cout << "4. SA  vs  WI\t\t" << "28 July 21\t" << "Sydney Stadium\t\t" << "Rameez Raja & Rudi    \t" << "\tAleem Dar " << endl;

}

void MatchType::displayrecentmatches()
{
	system("cls");
	int selc, selc1;
	cout << "\t\t\t\t\tCurrent Matches." << endl;
	cout << "==================================================================================================================================>" << endl;
	cout << "   Teams\t\t  Date\t\t   Venue  \t\t  Commentator\t\t\t Umpire" << endl;
	cout << "==================================================================================================================================>" << endl;
	cout << "1. NZ vs Ind\t\t" << "24 July 21\t" << "Sharja Stadium\t  " << "      Wasim Akram & Rudi Koertz\t" << "Aleem Dar " << endl;
	cout << "2. SA vs Sri\t\t" << "24 July 21\t" << "Sydney Stadium\t\t" << "Joe Willson & Aleda Cart \t" << "Roe Jadaii " << endl;
	cout << "1 For New Zealand vs India Match Live" << endl;
	cout << "2. For South Africa vs Sri Lanka Match" << endl;
	cin >> selc1;
	if (selc1 == 1)
	{
		cout << "\tMenu" << endl;
		cout << "1. For Live Score" << endl;
		cin >> selc;
		if (selc == 1)
		{
			cout << "\t\tScore Board" << endl;
			cout << "----------------------------------------------------------->" << endl;
			cout << "New Zealand\t\t169/9 (20.0)  overs" << endl;
			cout << "----------------------------------------------------------->" << endl;
			cout << "B.Macclumn   53(40)*\t|\tAshwin 2/46 (4)" << endl;
			cout << "J.Vitori     49(39)\t|\tJadeja 4/40 (4)" << endl;
			cout << "----------------------------------------------------------->" << endl;


			cout << "----------------------------------------------------------->" << endl;
			cout << "India  \t\t140/7 (19.1)  overs" << endl;
			cout << "----------------------------------------------------------->" << endl;
			cout << "S.Raina       40(30)\t|\tb.Teylor 1/40 (4)" << endl;
			cout << "Virat Kohli   60(50)*\t|\tT.Bullet 4/30 (3.1)" << endl;
			cout << "MS.Dhoni      33(29)*\t|\tJadejaa 2/30  (4)" << endl;

			cout << "----------------------------------------------------------->" << endl;
		}
	}
	else if (selc1 == 2)
	{
		cout << "\tMenu" << endl;
		cout << "1. For Live Score" << endl;
		cin >> selc;
		if (selc == 1)
		{
			cout << "\t\tScore Board" << endl;
			cout << "----------------------------------------------------------->" << endl;
			cout << "South Africa\t\t162/4 (20.0)  overs" << endl;
			cout << "----------------------------------------------------------->" << endl;
			cout << "Q.D.Cock   45(33)\t|\tL.Malinga    3/33 (4)" << endl;
			cout << "H.Amla     39(34)*\t|\tT.Pararra    1/40 (3)" << endl;
			cout << "F.Duplasis 40(29)*\t|\tM.Chandimal  0/39 (4)" << endl;
			cout << "----------------------------------------------------------->" << endl;


			cout << "----------------------------------------------------------->" << endl;
			cout << "Sri Lanka  \t\t90/3 (11.1)  overs" << endl;
			cout << "----------------------------------------------------------->" << endl;
			cout << "K.Sanagakara   30(20)\t|\tD.Stayen    1/20  (2)" << endl;
			cout << "M.Jverdna     40(30)*\t|\tI.Tahir     0/20  (3)" << endl;
			cout << "T.Dilshaan    20(19)*\t|\tH.Amla      1/15  (1)" << endl;
			cout << "                        |\tL.Tostsoba  1/25  (3)" << endl;

			cout << "----------------------------------------------------------->" << endl;
		}
	}

}

void MatchType::Search_Player() {}
void MatchType::Add_Player(int a) {}
void MatchType::AddData(int b) {}
void MatchType::Remove_Player() {}
void MatchType::Update_Player() {}
void MatchType::Display(int c) {}

