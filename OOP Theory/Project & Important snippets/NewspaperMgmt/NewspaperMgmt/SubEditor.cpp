#include "stdafx.h"
#include "SubEditor.h"


SubEditor::SubEditor(string name)
{ this->name = name; }

void SubEditor::setName(string name)
{ this->name = name; }

string SubEditor::getName()
{ return name; }

string SubEditor::EditNews(string news)
{
	cout << "Editing news..." << endl << endl;
	//news.append(".");
	return news;
}