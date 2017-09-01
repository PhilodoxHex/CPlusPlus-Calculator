#include<iostream>
#include<conio.h>

using namespace std;

void main() {
	label:
	system("cls");
	int ch;
	double fnum, snum, ans;
	char ch1;
	cout << "\t\t\t\t\t\t    CALCULATOR\n";
	cout << "   1. Addition\n";
	cout << "   2. Substraction\n";
	cout << "   3. Multiplication\n";
	cout << "   4. Division\n";
	cout << "   5. Exit\n";
	cout << "   Enter Your Choice: ";
	cin >> ch;
	switch (ch) {
	case 1:
		system("cls");
		cout << "\t\t\t\t\t\t      ADDITION\n\n";
		cout << "   Enter First Number: ";
		cin >> fnum;
		cout << "\n";
		cout << "   Enter Second Number: ";
		cin >> snum;
		ans = fnum + snum;
		cout << "\n";
		cout << "   The Answer is " << ans;
		cout << "\n\n";
		cout << "   Do You want to Return to The Menu(Y/N)...";
		cin >> ch1;
		if (ch1 == 'Y' || ch1 == 'y')
		{
			goto label;
		}
		else 
		{
			exit(0);
		}
		cout << "\n";
		break;
	case 2:
		system("cls");
		cout << "\t\t\t\t\t\t   SUBSTRACTION\n\n";
		cout << "   Enter First Number: ";
		cin >> fnum;
		cout << "\n";
		cout << "   Enter Second Number: ";
		cin >> snum;
		ans = fnum - snum;
		cout << "\n";
		cout << "   The Answer is " << ans;
		cout << "\n\n";
		cout << "   Do You want to Return to The Menu(Y/N)...";
		cin >> ch1;
		if (ch1 == 'Y' || ch1 == 'y')
		{
			goto label;
		}
		else
		{
			exit(0);
		}
		cout << "\n";
		break;
	case 3:
		system("cls");
		cout << "\t\t\t\t\t\tMULTIPLICATION\n\n";
		cout << "   Enter First Number: ";
		cin >> fnum;
		cout << "\n";
		cout << "   Enter Second Number: ";
		cin >> snum;
		ans = fnum * snum;
		cout << "\n";
		cout << "   The Answer is " << ans;
		cout << "\n\n";
		cout << "   Do You want to Return to The Menu(Y/N)...";
		cin >> ch1;
		if (ch1 == 'Y' || ch1 == 'y')
		{
			goto label;
		}
		else
		{
			exit(0);
		}
		cout << "\n";
		break;
	case 4:
		system("cls");
		cout << "\t\t\t\t\t\t      DIVISION\n\n";
		cout << "   Enter First Number: ";
		cin >> fnum;
		cout << "\n";
		cout << "   Enter Second Number: ";
		cin >> snum;
		ans = fnum / snum;
		cout << "\n";
		cout << "   The Answer is " << ans;
		cout << "\n\n";
		cout << "   Do You want to Return to The Menu(Y/N)...";
		cin >> ch1;
		if (ch1 == 'Y' || ch1 == 'y')
		{
			goto label;
		}
		else
		{
			exit(0);
		}
		cout << "\n";
		break;
	case 5:
		exit(0);
		break;
	default:
		system("cls");
		cout << "   INVALID CHOICE!!!!!!";
		cout << "\n\n";
		cout << "   Do You want to Return to The Menu(Y/N)...";
		cin >> ch1;
		if (ch1 == 'Y' || ch1 == 'y')
		{
			goto label;
		}
		else
		{
			exit(0);
		}
		cout << "\n";
		break;
	}
	_getch();
}
