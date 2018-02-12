#ifndef TROPHY_H
#define TROPHY_H

#include <iostream>


enum Color { GOLD, SILVER, BRONZE };

class Trophy
{
public:
	Trophy();
	/*Trophy(string& name, int level, Color& color);*/
	/*string GetName();*/
	int GetLevel();
	/*Color GetColor();*/
	/*void SetName(string name);*/
	void SetLevel(int level);

	void Print();

private:

	/*string m_name;*/
	int m_level;
	/*Color m_color;*/
};

#endif
