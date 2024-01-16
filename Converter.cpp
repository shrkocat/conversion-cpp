#include <iostream>
using namespace std;
int main()
{
 // Declare
 int value;
 
 cout << "=============================" <<endl;
 cout << " coversion " << endl;
 cout << "=============================" << endl;
 cout << "[1] Decimal numbers to roman" << endl;
 cout << "[2] Military to 12HR Clock" << endl;
 cout << "[3] Exit" << endl;
 cout << "=============================" << endl;
 cout << "Enter choice: ";
 cin >> value;
 
 if (value < 4 && value > 0)
 	{
 		cout << "";
 	}
 	
 else
 	{
 		cout << "Invalid choice!" << endl;
 	}
 
 // Execute
 switch(value){
 	case 1:
 	{
 	// Declare for case 1
	 int firstValue, num;
	 string romanNumeral;
	 firstValue = num;
	 
	 cout << "Enter a number (1-3000) only: ";
	 cin >> num;
 
 if (num >= 1 && num <= 3000)
 {
	 if (num >= 1000)
	 {
		 romanNumeral = romanNumeral + "M";
		 num = num - 1000;
	 }
	 
	 if (num >= 1000)
	 {
		 romanNumeral = romanNumeral + "M";
		 num = num - 1000;
	 }
	 
	 if (num >= 1000)
	 {
		 romanNumeral = romanNumeral + "M";
		 num = num - 1000;
	 }
	 
	 if (num >= 900)
	 {
		 romanNumeral = romanNumeral + "CM";
		 num = num - 900;
	 }
	 
	 if (num >= 500)
	 {
		 romanNumeral = romanNumeral + "D";
		 num = num - 500;
	 }
	 
	 if (num >= 500)
	 {
		 romanNumeral = romanNumeral + "D";
		 num = num - 500;
	 }
	 
	 if (num >= 400)
	 {
		 romanNumeral = romanNumeral + "CD";
		 num = num - 400;
	 }
	 
	 if (num >= 400)
	 {
		 romanNumeral = romanNumeral + "CD";
		 num = num - 400;
	 }
	 
	 if (num >= 400)
	 {
		 romanNumeral = romanNumeral + "CD";
		 num = num - 400;
	 }
	 
	 if (num >= 100)
	 {
		 romanNumeral = romanNumeral + "C";
		 num = num - 100;
	 }
	 
	 if (num >= 100)
	 {
		 romanNumeral = romanNumeral + "C";
		 num = num - 100;
	 }
	 
	 if (num >= 100)
	 {
		 romanNumeral = romanNumeral + "C";
		 num = num - 100;
	 }
	 
	 if (num >= 90)
	 {
		 romanNumeral = romanNumeral + "XC";
		 num = num - 90;
	 }
	 
	 if (num >= 50)
	 {
		 romanNumeral = romanNumeral + "L";
		 num = num - 50;
	 }
	 
	 if (num >= 50)
	 {
		 romanNumeral = romanNumeral + "L";
		 num = num - 50;
	 }
	 
	 if (num >= 40)
	 {
		 romanNumeral = romanNumeral + "XL";
		 num = num - 40;
	 }
	 
	 if (num >= 10)
	 {
		 romanNumeral = romanNumeral + "X";
		 num = num - 10;
	 }
	 
	 if (num >= 10)
	 {
		 romanNumeral = romanNumeral + "X";
		 num = num - 10;
	 }
	 
	 if (num >= 10)
	 {
		 romanNumeral = romanNumeral + "X";
		 num = num - 10;
	 }
	 
	 if (num >= 9)
	 {
		 romanNumeral = romanNumeral + "IX";
		 num = num - 9;
	 }
	 
	 if (num >= 9)
	 {
		 romanNumeral = romanNumeral + "IX";
		 num = num - 9;
	 }
	 
	 if (num >= 5)
	 {
		 romanNumeral = romanNumeral + "V";
		 num = num - 5;
	 }
	 
	 if (num >= 5)
	 {
		 romanNumeral = romanNumeral + "V";
		 num = num - 5;
	 }
	 
	 if (num >= 4)
	 {
		 romanNumeral = romanNumeral + "IV";
		 num = num - 4;
	 }
	 
	 if (num >= 1)
	 {
		 romanNumeral = romanNumeral + "I";
		 num = num - 1;
	 }
	 
	 if (num >= 1)
	 {
		 romanNumeral = romanNumeral + "I";
		 num = num - 1;
	 }
	 
	 if (num >= 1)
	 {
		 romanNumeral = romanNumeral + "I";
		 num = num - 1;
	 }
	 
	 cout << firstValue << "in roman numeral is: " << romanNumeral;
} 
 
 else
	 {
	 	cout << "Number should be 1-3000 only" << endl;
	 }
 
 } 
 break;
 
 case 2:
	 {
	 // Declare for case 2
	 int secondValue, mins, hrs;
	 string timeClock;
	 
	 cout << "Enter military time (0000-2359) only: ";
	 cin >> secondValue;
	 
	 mins = secondValue % 100;
	 hrs = secondValue / 100;
 
 if (mins < 60 && mins >= 1)
 {
	 if (secondValue >= 0000 && secondValue <= 2359)
	 {
		 if (hrs >= 12)
		 {
		 	timeClock = "P.M.";
		 }
		 
		 else
		 {
		 	timeClock = "A.M.";
		 }
		 
		 if (hrs > 12)
		 {
		 	hrs = hrs - 12;
		 }
		 
		 else (hrs == 0);
		 {
		 	hrs = 12;
		 }
		 
		 cout << "Time in 12-hr Clock: ";
		 
		 if (hrs < 10)
		 {
		 	cout << "0" << hrs << ":";
		 }
		 
		 else
		 {
		 	cout << hrs << ":";
		 }
		 
		 if (mins < 10)
		 {
		 	cout << "0";
		 	cout << mins << " " << timeClock;
		 }
		 
		 else
		 {
		 	cout << mins << " " << timeClock;
		 } 
	} 
		
	 else
		{
			cout << "Time should be 0000-2359 only" << endl;
		}
}

else
{
	cout << "Minutes should be below 60!" << endl;
}
	}
	 break;
 
 case 3: exit(3);
 
 break;
 }
 
 return 0;
}
