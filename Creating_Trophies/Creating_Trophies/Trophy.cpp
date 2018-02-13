#include "Trophy.h"
#include <iostream>

using namespace std;


Trophy::Trophy()
{
	m_level = 0;
	m_name = "";
	m_color = GOLD;
}
Trophy::Trophy(string& name, int level, Color& color)
{
	m_level = level;
	m_name = name;
	m_color = color;
}


string Trophy::GetName()
{	
	return m_name;
}

int Trophy::GetLevel()
{
	return m_level;
}

Color Trophy::GetColor()
{
	return m_color;
}

void Trophy::SetName(string& name)
{
	m_name = name;
}

void Trophy::SetLevel(int level)
{
	m_level = level;
}

void Trophy::SetColor(Color color)
{
	m_color = color;
}

void Trophy::Print()
{
	cout << "Trophy name: " << m_name << endl;
	cout << "Trophy level: " << m_level << endl;
	cout << "Trophy color: " << ColorToString(m_color) << endl << endl;
}
string Trophy::ColorToString(Color& color)
{
	switch (color)
	{
		case 0:
			return "BRONZE";
			break;
		case 1:
			return "SILVER";
			break;
		case 2:
			return "GOLD";
			break;
		default:
			return "ERROR";
			break;
	}
		
	return "";
}
