#pragma once
#include <string>
using namespace std;
class review {
private:
	int userId, appId;
	string comment;
	int rating;
public:
	review(int userId, int appId, string cmt);
	void change_review();
};

