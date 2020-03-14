#include <iostream>
#include <string>

using namespace std;
void month(int fnum){
	switch(fnum)
		case 1: cout << "January";
			break;
		case 2: cout << "February";
			break;
		case 3: cout << "March";
			break;
		case 4: cout << "April";
			break;
		case 5: cout << "May";
			break;
		case 6: cout << "June";
			break;
		case 7: cout << "July";
			break;
		case 8: cout << "August";
			break;
		case 9: cout << "September";
			break;
		case 10: cout << "October";
			break;
		case 11: cout << "November";
			break;
		case 0: cout << "December";
			break;
}
int main(){
    string month;
    int num, n;
	
	
    cin >> month >> n;

    if(month == "January"){
        month(1 + (n % 12));
    }
    else if(month == "February"){
        month(2 + (n % 12));
    }
    else if(month == "March"){
        month(3 + (n % 12));
    }
    else if(month == "April"){
        month(4 + (n % 12));
    }
    else if(month == "May"){
        month(5 + (n % 12));
    }
    else if(month == "June"){
        month(6 + (n % 12));
    }
    else if(month == "July"){
        month(7 + (n % 12));
    }
    else if(month == "August"){
        month(8 + (n % 12));
    }
    else if(month == "September"){
        month(9 + (n % 12));
    }
    else if(month == "October"){
        month(10 + (n % 12));
    }
    else if(month == "November"){
        month(11 + (n % 12));
    }
    else if(month == "December"){
        month(0 + (n % 12));
    }
    // January, February, March, April, May, June, July, August, September, October, November, December
    return 0;
}