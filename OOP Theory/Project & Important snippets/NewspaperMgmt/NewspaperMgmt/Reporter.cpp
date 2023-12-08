#include "stdafx.h"
#include "Reporter.h"

Reporter::Reporter(string name)
{
	this->name = name; e = new Editor("Ubaid");
}

void Reporter::setName(string name) { this->name = name; }

string Reporter:: getName() { return name; }

// submits news report to the editor
void Reporter::SubmitReport()
{
		unedited_news = new string;
		// Creating news report
		getline(cin, *unedited_news);
		cout << "Reporter filed story" << endl << endl;
		e->ReceiveFromReporter(*unedited_news);
}