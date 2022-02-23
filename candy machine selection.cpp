#include <iostream>
using namespace std;

int main ()
{
	int ordercode, quantity;
	char yesno;
	string order,icon;
	int money= 0, pay, change;
	
	
	icon [1] = 16;
	
    do
	{
		cout << "\n\n Welcome to Lea J's Candy Machine " <<icon[1];
		cout << "             \n\n\n              MENU ";
		cout << "\n\n         1. candies  -  5 pesos \n         2. gum      -  10 pesos ";
		cout << "\n         3. lollipop -  3 pesos \n         4. chips    -  15 pesos ";
		cout << "\n         5. cookies  -  20 pesos  ";
		
		cout << "\n\n"<<icon[1] << "Insert your money       :";
		cin  >> pay;
		
		cout << "\n"   <<icon[1]  << "Choose your order (1-5):";
		cin  >> ordercode;
		
		cout << "\n" <<icon[1] << "Please enter quantity  : ";
		cin  >> quantity;
		
		switch (ordercode)
		{
			case 1:
				order ="candies";
				money = quantity * 5;
				break;
				
			case 2:
				order ="gum";
				money = quantity * 10;
				break;
				
			case 3:
				order ="lollipop";
				money = quantity * 3;
				break;
				
			case 4:
				order ="chips";
				money = quantity * 15;
				break;
				
			case 5:
				order ="cookies";
				money = quantity * 20;
				break;
				
			default:
			cout << " Invalid Input, please try again";
			break;				
		}
		
	if (pay < money )
	{
		cout << "\n      sorry you have not enough money to proceed this transaction. ";
		cout << "        we have returned you " <<pay;
	}
	
	else
	{
		cout << "\n\nYour order        : ";
		cout << quantity << "pcs - " <<order <<endl;
		
		cout << "Total amount      : " << money << "pesos\n";
		
		change = pay - money;
		cout << "Your change       : " <<change;
	}
	cout << "\n\n" <<icon[1] <<"Do you want to order again? (y/n): ";
	cin  >> yesno;
	
   }
   while (yesno == 'Y' || yesno == 'y');
   
   cout <<"\n\n Thank you for your purchase, hope you buy again";

   return 0;   
}
   
