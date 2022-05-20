#pragma once
#include <string>
using namespace std;
class category {

private:
	int category_id;
	string category_name;
public:
	void display_categorized_apps();
	void add_categories(int id, string catName);
	void update_categories();
};

