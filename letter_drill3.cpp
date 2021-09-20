#include "std_lib_facilities.h"


int main(){


// VAR


	char friend_sex = 0;
	int age;
	string first_name;
	string friend_name;


//	VAR_END


	cout << "Please enter your first name!" << endl;

	cin >> first_name;
	
	
	
	cout << "Hello, " << first_name <<endl;

	cout << "Enter the name of the person you want to write to ";

	cin >> first_name;

	cout << "Dear " <<first_name  + "," <<endl;
	cout << "How are you? I'm fine. I miss you. I'm into cooking nowadays. I can only reccommend Hungarian Goulash. Here are the ingridients: 1 tbsp olive oil. 1 cup onion, diced. 1 green bell pepper, diced. 2 lbs. ground beef, lean. 3 tsp garlic, minced. 2 15 oz cans tomato sauce. 2 15 oz cans petite diced tomatoes. 3 cups beef broth. It's awesome!" <<endl;
	
	cout << "Please enter a Friend's name! ";
	cin >> friend_name;
	cout << "Have you seen " + friend_name + " lately?" <<endl;
	
	

	cout << "Is this person a male or a female? (m/f) ";
	cin >> friend_sex;

//
	if (friend_sex == 'm')
	{
		cout << "If you see " +  friend_name + " please ask him to call me.\n";;
	} 

	else if (friend_sex == 'f')
	{
		cout << "If you see " +  friend_name + " please ask her to call me.\n";
	}
//

	cout << "How old is your friend?" <<endl;
	cin >> age;
	
	if (0 >= age >= 110)
	{
		simple_error("you're kidding!");
	}

	cout << "I hear you just had your birthday and you are " << age << " years old." << endl;
	//cout << "I hear you just had your birthday and you are " + std::to_string(age) + " years old." << endl;

	if (age < 12)
	{
		cout << "Next year you will be " << (age++) << endl;
	}	

	else if (age == 17)
	{
		cout << "Next year you will be able to vote" << endl;
	}	

	else if (age > 70)
	{
		cout << "I hope you are enjoying retirement" << endl;
	}	

	cout << "Yours sincerely, " <<endl << endl <<endl;
	cout <<"Bence";


	return 0;
	
}