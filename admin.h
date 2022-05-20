#pragma once
#include <string>
using namespace std;
class admin {

private:
	int admin_id;
	string admin_name;
	string email;
	string password;
public:
	admin(int id, string name, string email, string pwd);
	void update_admin();
};
