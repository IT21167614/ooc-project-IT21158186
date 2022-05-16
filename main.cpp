#include <iostream>
#include <developer.h>

int main(){
string Name,FirstName,LastName, Email, Password, 
		About,CompanyName,Dob,Country,Description,Filepath,Comment;
int ID;

	//Creating Dynamic Developer Objects
	developer* dev1, * dev2;
	dev1 = new developer;
	dev2 = new developer;
	
	//Creating Dynamic User Objects
	user* us1, * us2;
	us1 = new user;
	us2 = new user;

  	//Initializing Developers
	dev1->set_developer(ID,CompanyName,Email,Password,About);
	dev2->set_developer(ID, CompanyName, Email, Password, About);
	
	//Initializing Users
	us1->set_user_details(Email, FirstName, LastName, Password, Dob, Country);
	us2->set_user_details(Email, FirstName, LastName, Password, Dob, Country);

  	//deleting dynamic objects
  	delete dev1, dev2;
  	delete us1, us2;
}
