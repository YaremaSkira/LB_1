#pragma once
#include <string>


using namespace std;

class Book
{
private:
	struct Book1
	{
		string name;
		string writer;
		string edition;
		int year;
	};
	 Book1 *s=new Book1[4];

public:

	string getName(int index) const { return s[index].name; }
	string getWriter(int index) const { return s[index].writer; }
	string getEdition(int index) const { return s[index].edition; }

	void setName(int index, string name) { s[index].name = name; };
	void setWriter(int index, string writer) { s[index].writer = writer; };
	void setEdition(int index, string edition) { s[index].edition = edition; };
	bool setYear(int index, int year);


	void Search(string name);
	void Init();

	void Read();
	void Display() const;
};
