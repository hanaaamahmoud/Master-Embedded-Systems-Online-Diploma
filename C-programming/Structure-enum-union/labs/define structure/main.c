#include <stdio.h>
#include <string.h>
#include <conio.h>


struct SEmployee
{
	char name[50];
	int m_BirthdayDateDay;
	int m_BirthdayDateMonth;
	int m_BirthdayDataYear;




};


struct SEmployee X;





int main()
{

strcpy(X.name,"hanaa");
X.m_BirthdayDateDay= 4;
X.m_BirthdayDateMonth=10;
X.m_BirthdayDataYear=2001;

printf ("X is  %s , her birthday is : %d %d %d\r\n",X.name,X.m_BirthdayDateDay,X.m_BirthdayDateMonth,X.m_BirthdayDataYear);



	return 0;
}
