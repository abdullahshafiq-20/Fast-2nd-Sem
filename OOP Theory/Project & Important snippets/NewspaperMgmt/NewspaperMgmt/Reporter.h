using namespace std;
#include "Editor.h"
#include <iostream>
#include <string>
#pragma once

class Reporter
{

	string name;
	Editor * e;
	string* unedited_news;
public:
	Reporter(string);
	void setName(string name);
	string getName();
	void SubmitReport();
};

