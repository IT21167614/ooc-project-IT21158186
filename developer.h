#pragma once
#include <string>
using namespace std;
class developer {

private:
	int developer_id;
	string company_name;
	string email;
	string password;
	string about;
public:
	developer(int devId, string companyName, string mail, string pwd, string About);
	void update_dev_details();
	void upload_app();
	void update_app();
	void reply_review();
};

