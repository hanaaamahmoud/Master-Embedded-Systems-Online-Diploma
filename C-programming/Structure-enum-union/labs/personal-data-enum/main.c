/*
 * main.c

 *
 *  Created on: Nov 29, 2023
 *      Author: hanaa
 */


#include <stdio.h>

enum EGender{male ,female};

struct SPerosn
{
	char name[100];


	enum EGender m_Gender;


};
int main()
{

	int i;
	struct SPerosn person []={{"hana mahmoud",female},{"mohamed mahmoud",male}
	};
for (i=0;i<sizeof(person)/sizeof(struct SPerosn);i++)
{
	printf ("%s - %s\n",person[i].name,(person[i].m_Gender==male)?"male":"female");


}




	return 0;
}
