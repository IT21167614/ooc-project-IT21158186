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

  //Initializing Developers
	dev1->set_developer(ID,CompanyName,Email,Password,About);
	dev2->set_developer(ID, CompanyName, Email, Password, About);

  //deleting dynamic objects
  delete dev1, dev2;

}
