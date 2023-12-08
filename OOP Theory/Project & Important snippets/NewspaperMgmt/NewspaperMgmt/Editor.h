#pragma once
#include "SubEditor.h"
#include <iostream>
#include <string>
using namespace std;


class Editor
{
	string name;
	SubEditor * s;
	string * edited_news;
public:
	Editor(string);
	void setName(string);
	string getName();
	void ReceiveFromReporter(string);
	bool Decide();
};

