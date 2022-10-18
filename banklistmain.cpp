
#include<iostream>
#include"bankusinglinklist.cpp"

// driver main()
int main()
{
	time_t t = time(NULL);
	tm* tPtr = localtime(&t);
	int bankEnterOption = 0;
	int optionInBankOne = 0;
	int optionInBankTwo = 0;
	int optionInATMone = 0;
	int optionInATMtwo = 0;
	int optionInAdmin = 0;
	int optionInAdminAccOpen = 0;
	int optionInAdminBillPaymt = 0;
	long userCardNumber = 0;
	int userCardPIN = 0;
	string accountViewUsnm = "";
	string accountViewPaswd = "";
	string adminUserName;
	string adminPassword;
	int flag = 0;
	admin administrator;
	long double withdrawCash = 0.00;
	int oldPinChange = 0;
	int newPinChange = 0;
	bankAccountsDatabase accDatabase;
	billPaymentQueue billPaymentLine;
	withdrawDepositQueue withDwDepstLine;
	string usnmATM = "";
	string pssdATM = "";

	startScreen(tPtr);
	system("cls");
	
BANKSCREEN:bankEnterScreen(tPtr, bankEnterOption);
	system("cls");
	switch (bankEnterOption)
	{
	case 1:
		INSIDEBANK:screenBank(tPtr, optionInBankOne);
		system("cls");

		cout << "\n\n\n\t\t\t Date: " << (tPtr->tm_mday) << "/" << (tPtr->tm_mon) + 1 << "/" << (tPtr->tm_year) + 1900 << endl;
		cout << "\t\t\t Time: " << (tPtr->tm_hour) << ":" << (tPtr->tm_min) << endl;

		cout << "\t\t\t ##########################################################################################################################" << endl;
		cout << "\t\t\t #" << "\t\t\t\t\t\t Horizon Union Bank Ltd.\t\t\t\t\t\t  #" << endl;
		cout << "\t\t\t #" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  #" << endl;
		cout << "\t\t\t #" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  #" << endl;
		switch (optionInBankOne)
		{
		case 1:
			billPaymentLine.enqueue();
			system("cls");
			goto INSIDEBANK;
			break;
		case 2:
			withDwDepstLine.enqueue();
			system("cls");
			goto INSIDEBANK;
			break;
		case 3:
			accDatabase.insertNewAccount();
			system("cls");
			goto INSIDEBANK;
			break;
		case 4:
			cout << "\t\t\t Enter Username: ", cin >> accountViewUsnm, cout << endl;
			cout << "\t\t\t Enter Password: ", cin >> accountViewPaswd, cout << endl;
			accDatabase.displayAccountDetails(accountViewUsnm, accountViewPaswd);
			system("cls");
			goto INSIDEBANK;
			break;
		case 5:
			system("cls");
			goto BANKSCREEN;
			break;
		default:
			system("cls");
			cout << "\n\n\n\t\t\t Date: " << (tPtr->tm_mday) << "/" << (tPtr->tm_mon) + 1 << "/" << (tPtr->tm_year) + 1900 << endl;
			cout << "\t\t\t Time: " << (tPtr->tm_hour) << ":" << (tPtr->tm_min) << endl;

			cout << "\t\t\t ##########################################################################################################################" << endl;
			cout << "\t\t\t #" << "\t\t\t\t\t\t Horizon Union Bank Ltd.\t\t\t\t\t\t  #" << endl;
			cout << "\t\t\t #" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  #" << endl;
			cout << "\t\t\t #" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  #" << endl;
			cout << "\t\t\t  Wrong Option Entered, press any key to go back to Main Menu "<< endl;
			_getch();
			system("cls");
			goto INSIDEBANK;
			break;
		}
		break;
	case 2:
		MAINATMSCREEN:screenATMone(tPtr, userCardNumber, userCardPIN);
		system("cls");

		if (accDatabase.checkATMCredentials(userCardPIN, userCardNumber))
		{
		ATMSCREEN:screenATMtwo(tPtr, optionInATMtwo);
			system("cls");
			cout << "\n\n\n\t\t\t Date: " << (tPtr->tm_mday) << "/" << (tPtr->tm_mon) + 1 << "/" << (tPtr->tm_year) + 1900 << endl;
			cout << "\t\t\t Time: " << (tPtr->tm_hour) << ":" << (tPtr->tm_min) << endl;

			cout << "\t\t\t ##########################################################################################################################" << endl;
			cout << "\t\t\t #" << "\t\t\t\t\t\t Horizon Union Bank Ltd.\t\t\t\t\t\t  #" << endl;
			cout << "\t\t\t #" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  #" << endl;
			cout << "\t\t\t #" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  #" << endl;
			switch (optionInATMtwo)
			{
			case 1:
				cout << "\t\t\t # Enter amount you wish to withdraw -> ", cin >> withdrawCash;
				cout << "\t\t\t # Enter your username -> ", cin >> usnmATM;
				cout << "\t\t\t # Enter your password -> ", cin >> pssdATM;
				accDatabase.withDrawCash(usnmATM, pssdATM, withdrawCash);
				system("cls");
				goto ATMSCREEN;
				break;
			case 2:
				cout << "\t\t\t # Enter your username -> ", cin >> usnmATM;
				cout << "\t\t\t # Enter your password -> ", cin >> pssdATM;
				accDatabase.balanceEnquiry(usnmATM, pssdATM);
				system("cls");
				goto ATMSCREEN;
				break;
			case 3:
				cout << "\t\t\t # Enter your username -> ", cin >> usnmATM;
				cout << "\t\t\t # Enter your password -> ", cin >> pssdATM;
				cout << "\t\t\t # Enter old pin -> ", cin >> oldPinChange;
				cout << "\t\t\t # Enter new pin (4 Digits) -> ", cin >> newPinChange;
				accDatabase.changeATMpin(usnmATM, pssdATM, oldPinChange, newPinChange);
				system("cls");
				goto ATMSCREEN;
				break;
			case 4:
				system("cls");
				goto BANKSCREEN;
				break;
			default:
				system("cls");
				cout << "\n\n\n\t\t\t Date: " << (tPtr->tm_mday) << "/" << (tPtr->tm_mon) + 1 << "/" << (tPtr->tm_year) + 1900 << endl;
				cout << "\t\t\t Time: " << (tPtr->tm_hour) << ":" << (tPtr->tm_min) << endl;

				cout << "\t\t\t ##########################################################################################################################" << endl;
				cout << "\t\t\t #" << "\t\t\t\t\t\t Horizon Union Bank Ltd.\t\t\t\t\t\t  #" << endl;
				cout << "\t\t\t #" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  #" << endl;
				cout << "\t\t\t #" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  #" << endl;
				cout << "\t\t\t  Wrong Option Entered, press any key to go back to Main Menu " << endl;
				_getch();
				system("cls");
				goto ATMSCREEN;
				break;
			}
		}
		else
		{
			cout << "\n\n\n\t\t\t Date: " << (tPtr->tm_mday) << "/" << (tPtr->tm_mon) + 1 << "/" << (tPtr->tm_year) + 1900 << endl;
			cout << "\t\t\t Time: " << (tPtr->tm_hour) << ":" << (tPtr->tm_min) << endl;

			cout << "\t\t\t ##########################################################################################################################" << endl;
			cout << "\t\t\t #" << "\t\t\t\t\t\t Horizon Union Bank Ltd.\t\t\t\t\t\t  #" << endl;
			cout << "\t\t\t #" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  #" << endl;
			cout << "\t\t\t #" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  #" << endl;
			cout << "\t\t\t # Invalid Credentials Added" << endl;
			cout << "\t\t\t Press any key to return to Bank Menu" << endl;
			_getch();
			system("cls");
			goto BANKSCREEN;
		}
		break;
	case 3:
		screenAdminOne(tPtr, adminUserName, adminPassword);
		system("cls");
		if (administrator.checkCredentials(adminUserName, adminPassword))
		{
			ADMINSCREEN:screenAdminTwo(tPtr, optionInAdmin);
			system("cls");

			switch (optionInAdmin)
			{
			case 1:
				ACCOPPSCREN:screenAdminAccountOpenings(tPtr, optionInAdminAccOpen);
				system("cls");
				cout << "\n\n\n\t\t\t Date: " << (tPtr->tm_mday) << "/" << (tPtr->tm_mon) + 1 << "/" << (tPtr->tm_year) + 1900 << endl;
				cout << "\t\t\t Time: " << (tPtr->tm_hour) << ":" << (tPtr->tm_min) << endl;

				cout << "\t\t\t ##########################################################################################################################" << endl;
				cout << "\t\t\t #" << "\t\t\t\t\t\t Horizon Union Bank Ltd.\t\t\t\t\t\t  #" << endl;
				cout << "\t\t\t #" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  #" << endl;
				cout << "\t\t\t #" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  #" << endl;
				switch (optionInAdminAccOpen)
				{
				case 1:
					accDatabase.viewAccountsToBeProcessed();
					system("cls");
					goto ACCOPPSCREN;
					break;
				case 2:
					accDatabase.processAccounts();
					system("cls");
					goto ACCOPPSCREN;
					break;
				case 3:
					accDatabase.displayAllAccounts();
					system("cls");
					goto ACCOPPSCREN;
				case 4:
					system("cls");
					goto ADMINSCREEN;
					break;
				default:
					system("cls");
					cout << "\n\n\n\t\t\t Date: " << (tPtr->tm_mday) << "/" << (tPtr->tm_mon) + 1 << "/" << (tPtr->tm_year) + 1900 << endl;
					cout << "\t\t\t Time: " << (tPtr->tm_hour) << ":" << (tPtr->tm_min) << endl;

					cout << "\t\t\t ##########################################################################################################################" << endl;
					cout << "\t\t\t #" << "\t\t\t\t\t\t Horizon Union Bank Ltd.\t\t\t\t\t\t  #" << endl;
					cout << "\t\t\t #" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  #" << endl;
					cout << "\t\t\t #" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  #" << endl;
					cout << "\t\t\t  Wrong Option Entered, press any key to go back to Main Menu " << endl;
					_getch();
					system("cls");
					goto ACCOPPSCREN;
					break;
				}
			case 2:
				BILLPAYSCREEN:screenAdminBillPayments(tPtr, optionInAdminBillPaymt);
				system("cls");
				cout << "\n\n\n\t\t\t Date: " << (tPtr->tm_mday) << "/" << (tPtr->tm_mon) + 1 << "/" << (tPtr->tm_year) + 1900 << endl;
				cout << "\t\t\t Time: " << (tPtr->tm_hour) << ":" << (tPtr->tm_min) << endl;

				cout << "\t\t\t ##########################################################################################################################" << endl;
				cout << "\t\t\t #" << "\t\t\t\t\t\t Horizon Union Bank Ltd.\t\t\t\t\t\t  #" << endl;
				cout << "\t\t\t #" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  #" << endl;
				cout << "\t\t\t #" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  #" << endl;
				switch (optionInAdminBillPaymt)
				{
				case 1:
					billPaymentLine.displayBillPaymentQueue();
					system("cls");
					goto BILLPAYSCREEN;
					break;
				case 2:
					billPaymentLine.displayFront();
					system("cls");
					goto BILLPAYSCREEN;
					break;
				case 3:
					billPaymentLine.dequeue();
					system("cls");
					goto BILLPAYSCREEN;
					break;
				case 4:
					system("cls");
					goto ADMINSCREEN;
					break;
				default:
					system("cls");
					cout << "\n\n\n\t\t\t Date: " << (tPtr->tm_mday) << "/" << (tPtr->tm_mon) + 1 << "/" << (tPtr->tm_year) + 1900 << endl;
					cout << "\t\t\t Time: " << (tPtr->tm_hour) << ":" << (tPtr->tm_min) << endl;

					cout << "\t\t\t ##########################################################################################################################" << endl;
					cout << "\t\t\t #" << "\t\t\t\t\t\t Horizon Union Bank Ltd.\t\t\t\t\t\t  #" << endl;
					cout << "\t\t\t #" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  #" << endl;
					cout << "\t\t\t #" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  #" << endl;
					cout << "\t\t\t  Wrong Option Entered, press any key to go back to Main Menu " << endl;
					_getch();
					system("cls");
					goto BILLPAYSCREEN;
					break;
				}
				break;
			case 3:
				system("cls");
				goto BANKSCREEN;
				break;
			default:
				system("cls");
				cout << "\n\n\n\t\t\t Date: " << (tPtr->tm_mday) << "/" << (tPtr->tm_mon) + 1 << "/" << (tPtr->tm_year) + 1900 << endl;
				cout << "\t\t\t Time: " << (tPtr->tm_hour) << ":" << (tPtr->tm_min) << endl;

				cout << "\t\t\t ##########################################################################################################################" << endl;
				cout << "\t\t\t #" << "\t\t\t\t\t\t Horizon Union Bank Ltd.\t\t\t\t\t\t  #" << endl;
				cout << "\t\t\t #" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  #" << endl;
				cout << "\t\t\t #" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  #" << endl;
				cout << "\t\t\t  Wrong Option Entered, press any key to go back to Main Menu " << endl;
				_getch();
				system("cls");
				goto ADMINSCREEN;
				break;
			}
		}
		else
		{
			cout << "\n\n\n\t\t\t Date: " << (tPtr->tm_mday) << "/" << (tPtr->tm_mon) + 1 << "/" << (tPtr->tm_year) + 1900 << endl;
			cout << "\t\t\t Time: " << (tPtr->tm_hour) << ":" << (tPtr->tm_min) << endl;

			cout << "\t\t\t ##########################################################################################################################" << endl;
			cout << "\t\t\t #" << "\t\t\t\t\t\t Horizon Union Bank Ltd.\t\t\t\t\t\t  #" << endl;
			cout << "\t\t\t #" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  #" << endl;
			cout << "\t\t\t #" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  #" << endl;
			cout << "\t\t\t # Invalid Credentials Added" << endl;
			cout << "\t\t\t Press any key to return to Bank Menu" << endl;
			_getch();
			system("cls");
			goto BANKSCREEN;
		}
		break;
	case 4:
		system("cls");
		endScreen(tPtr);
		break;
	default:
		system("cls");
		cout << "\n\n\n\t\t\t Date: " << (tPtr->tm_mday) << "/" << (tPtr->tm_mon) + 1 << "/" << (tPtr->tm_year) + 1900 << endl;
		cout << "\t\t\t Time: " << (tPtr->tm_hour) << ":" << (tPtr->tm_min) << endl;

		cout << "\t\t\t ##########################################################################################################################" << endl;
		cout << "\t\t\t #" << "\t\t\t\t\t\t Horizon Union Bank Ltd.\t\t\t\t\t\t  #" << endl;
		cout << "\t\t\t #" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  #" << endl;
		cout << "\t\t\t #" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t  #" << endl;
		cout << "\t\t\t  Wrong Option Entered, press any key to go back to Main Menu " << endl;
		_getch();
		system("cls");
		goto BANKSCREEN;
		break;
	}

	cout << "\t\t\t ", system("pause");
	return 0;
}