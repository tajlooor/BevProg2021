#include "std_lib_facilities.h"


int main(){

vector <double> vektor; // vektor.pushback();

										//VAR
string exitstring; // type | to exit
double x; // Number from user
double bigger, smaller;

string unit; // cm/m/ft/in
double sum = 0;

double biggest = 0;
double smallest = 0;
            							// VAR END


//cout << "To exit the program type '|' " << endl;
/*while (cin >> x >> y) 
{
	if (x == '|' or y == '|'){
        break;
	}
    
else
	{
    cout << x << " " << y << " " << endl;
    	if (x > y)
    	{
    		cout << "the smaller value is: " << y << " the larger value is: "<< x << endl;
    		bigger == x;
    		smaller == y;
    	}
    	else if (x < y)
    	{
    		cout << "the smaller value is : " << x << " the larger value is: " << y << endl;
    		bigger == y;
    		smaller == x;
    	}
    	else
    	{
    		cout << "the numbers are equal" << endl;
    	}
    	

}
if (bigger-smaller < 1.0/100)
    	{
    		cout << "the numbers are almost equal" << endl;
    	}


}*/
while(exitstring != "|" && unit != "|")
{
	cout << "To exit the program type '|', to continue write a character! (You can only quit the program now, or when giving a unit!)" << endl;
	cin >> exitstring ;
		if (exitstring =="|")
		{
			cout << "Exited the program!" ;
			break;
		}
	cout << "Declare a number: " ;
	cin >> x;
	cout << endl;

	cout << "Please choose a unit! (cm/m/ft/in): ";
	cin >> unit ;

			
			while (unit !="cm" && unit !="m" && unit !="ft" && unit !="in")
			{
				cout<<"Incorrect unit given! Please choose the correct unit! (cm/m/ft/in)";
				cin>>unit;
			}
		if (unit  == "m")
		{
			x=x;
		}
		
		else
			if (unit == "cm")
		{
				x = x/100;
		}
		
		else
			if (unit == "ft")
		{
				x = x*0.254;
		}
		
		else
			if (unit == "in")
		{
				x = x*0.3048;
		}
		vektor.push_back(x);
		sum += x;

}
cout << "The SUM of the value is : " << sum << endl;


    	for (int i = 0; i < vektor.size(); ++i)
    	{
    		if (vektor[i]>vektor[biggest])
    		{
    			biggest = i;
    		}
    	}

		
		for (int i = 0; i < vektor.size(); ++i)
    	{
    		if (vektor[i]<vektor[smallest])
    		{
    			smallest = i;
    		}
    	}
    	

    	sort(vektor);
cout << "Sorted values are: " << endl;
	for (int i = 0; i < vektor.size(); ++i)
	{
		cout << vektor[i] << " m" << endl;
	}
    	


cout<<"SUM of the value is: "<<sum<<" m" << endl;;
cout<<"The largest value is: "<<vektor[biggest]<<" m" << endl;
cout<<"The smallest value is:"<<vektor[smallest]<<" m" << endl;
cout<<"The amount of numbers you gave: "<<vektor.size()<< endl;

	return 0;
	
}