#include "stdafx.h"
#include "Editor.h"



Editor::Editor(string name) { this->name = name; } 

void Editor::setName(string name) { this->name  = name; }

string Editor::getName() { return name; }

	// receives news from reporter
	// receives edited news

void Editor::ReceiveFromReporter(string news)
{
	s = new SubEditor("Mehmood"); 
	edited_news = new string;
	cout << "Sending story for editing to sub" << endl << endl;
	cout << s->EditNews(news);
}

bool Editor::Decide()
{
	// approves or rejects
	// condition for approval
	return true;
}