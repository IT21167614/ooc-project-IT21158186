#pragma once
#include <string>
using namespace std;
class app {

private:
	int app_id;
	string app_name;
	string description;
	string file_path;
public:
	app(int Id, string Name, string desc, string fpath);
	void update_app();
	void get_app_details();
};
