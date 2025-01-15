#include "Header.h";


int main()
{
	Team obj2;
	Player* ptr;
	MatchType object1;
	Login obj1;
	obj1.set_adName();
	obj1.set_adpass();
	system("cls");
	obj1.get_adName();
	obj1.get_adpass();
	bool f = obj1.SignIn();
	cout << f << endl;
	ptr = &obj2;
	ptr = &object1;
	bool flag = true, flag2 = true;
	obj2.Add_Data();
	obj2.Display_Team();


	int choice, choice2, choice3;
	while (flag2 == true)
	{
	menu:
		cout << "=====================>" << endl;
		cout << "1. Teams\n2. Matches\n3. Exit\n";
		cout << "=====================>" << endl;
		cin >> choice2;

		flag = true;
		switch (choice2)
		{
		case 1:
			while (flag == true)
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
				cin >> choice3;
				ptr->AddData(choice3);
				obj2.Display(4);
				if (f == true)
				{
					do
					{
						cout << "-------------------------------->" << endl;
						cout << "\tMenu" << endl;
						cout << "1. For Add Player" << endl;
						cout << "2. For Remove Player" << endl;
						cout << "3. For Search Player" << endl;
						cout << "4. For Update Player" << endl;
						cout << "5. For Update Captain" << endl;
						cout << "6. For Update Coach" << endl;
						cout << "7. For Exit" << endl;
						cin >> choice;
						if (choice < 1 || choice > 7)
						{
							cout << "Please Enter number from 1 to 7" << endl;
							cin >> choice;
						}
						if (choice == 1)
						{
							//to call addplayer function
							int loopsize2;

							cout << "How many players you wanna add:";
							cin >> loopsize2;
							if (loopsize2 == 1)
							{
								loopsize2 = 12;
							}
							else if (loopsize2 == 2)
							{
								loopsize2 = 13;
							}
							else
							{
								loopsize2 = 14;
							}
							ptr->Add_Player(loopsize2);
							ptr->Display(loopsize2);
							//system("cls");
						/*lab:
							cout << "\tPlayers is added  :)" << endl;
							obj2.Display(loopsize2);*/

						}

						else if (choice == 2)//to call remove player function
						{
							ptr->Remove_Player();
							obj2.Display(4);
							//goto lab;
						}

						else if (choice == 3)//to call search player function
						{
							ptr->Search_Player();
						}
						else if (choice == 4)//to call update player function
						{
							ptr->Update_Player();
							//system("cls");
							cout << "\tPlayers is Updated  :)" << endl;
							obj2.Display(4);

						}
						else if (choice == 5)
						{
							obj2.Update_Captain();
							//system("cls");
						}
						else if (choice == 6)
						{
							obj2.Update_Coach();
							//system("cls");
						}
						else if (choice == 7)
						{
							system("cls");
							goto menu;
						}
					} while (choice != 7);
					cout << endl;
				}
			}
			break;
		case 2:
			system("cls");
			int funcchoice;
			do
			{
				cout << "================================>" << endl;
				cout << "\t   Menu" << endl;
				cout << "================================>" << endl;
				cout << "1. For conduct Match." << endl;
				cout << "2. For Schedule Match." << endl;
				cout << "3. For Update World Records." << endl;
				cout << "4. For Update Team Ranking." << endl;
				cout << "5. For Update Player Ranking." << endl;
				cout << "6. For Display Upcoming Matches." << endl;
				cout << "7. For Display Current Matches." << endl;
				cout << "8. For Exit" << endl;
				cin >> funcchoice;


				if (funcchoice == 1)
				{
					object1.conductmatch();
				}
				else if (funcchoice == 2)
				{

				}
				else if (funcchoice == 6)
				{
					object1.displayupcomingmatches();

				}
				else if (funcchoice == 7)
				{
					object1.displayrecentmatches();
				}
				else if (funcchoice == 8)
				{
					system("cls");
					goto menu;

				}

			} while (funcchoice != 8);
			break;
		case 3:
			cout << "\t\t\t<----->Thank You<----->\n";
			flag2 = false;
		}

	}

	cout << endl;
	system("pause");
	return 0;
}
