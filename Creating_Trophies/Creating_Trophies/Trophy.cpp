#include "Trophy.h"
#include <iostream>

using namespace std;


Trophy::Trophy()
{

}
Trophy::Trophy(string name, int level, Color color)
{
	m_level = level;
	m_name = name;
	m_color = color;
}


string Trophy::GetName()
{	
	return string();
}

int Trophy::GetLevel()
{
	return 0;
}

Color Trophy::GetColor()
{
	return Color();
}

void Trophy::SetName(string& name)
{

}

void Trophy::SetLevel(int level)
{
}

void Trophy::SetColor(Color& color)
{
}

void Trophy::Print()
{
	cout << "Trophy name: " << m_name << endl;
	cout << "Trophy level: " << m_level << endl;
	cout << "Trophy color:" << Color(m_color) << endl << endl;
}
