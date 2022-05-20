#pragma once
#include <string>
using namespace std;
class user {
private:
	string email;
	string first_name;
	string last_name;
	string password;
	string dob;
	string country;
public:
	void set_user_details(string mail, string fname, string lname, string pwd, string dob, string ctry);
	int cal_age();
	void update_profile();
	void write_review();
};
