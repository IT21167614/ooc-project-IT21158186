#include <iostream>
#include <string>
#include "developer.h"
#include "app.h"
#include "user.h"
#include "category.h"
#include "review.h"
#include "admin.h"
using namespace std;

int main() {
	string Name, FirstName, LastName, Email, Password,
		About, CompanyName, Dob, Country, Description, Filepath, Comment;
	int ID = 0;
	//Creating Dynamic Developer Objects
	developer* dev1, * dev2;
	dev1 = new developer(ID, CompanyName, Email, Password, About);
	dev2 = new developer(ID, CompanyName, Email, Password, About);

	//Creating Dynamic User Objects
	user* us1, * us2;
	us1 = new user;
	us2 = new user;
	//Creating Dynamic Category Objects
	category* cat1, * cat2;
	cat1 = new category;
	cat2 = new category;
	//Initializing Dynamic App Objects with Overload constructor
	app* app1, * app2;
	app1 = new app(ID, Name, Description, Filepath);
	app2 = new app(ID, Name, Description, Filepath);
	//Creating Dynamic Review Objects
	review* rev1, * rev2;
	rev1 = new review(ID, ID, Comment);
	rev2 = new review(ID, ID, Comment);
	//Creating Dynamic Admin Objects With Overloaded Constructor
	admin* ad1, * ad2;
	ad1 = new admin(ID, Name, Email, Password);
	ad2 = new admin(ID, Name, Email, Password);

	//Initializing Users
	us1->set_user_details(Email, FirstName, LastName, Password, Dob, Country);
	us2->set_user_details(Email, FirstName, LastName, Password, Dob, Country);
	//Initializing Category 
	cat1->add_categories(ID, Name);
	cat2->add_categories(ID, Name);
	delete dev1, dev2;
	delete us1, us2;
	delete cat1, cat2;
	delete rev1, rev2;
	delete ad1, ad2;
	delete app1, app2;
}
