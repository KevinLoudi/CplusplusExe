// From: https://developers.google.com/edu/c++/getting-started
// Description: a program that prints the immortal saying "hello world"

#include "stdafx.h"
#include <iostream>
#include <string>
#include "ScreenPrint.h"
#include "Games.h"
#include <stdio.h>
using namespace std;

int outstring(){
	string str1 = "To be or not to be, that is the question";
	string str2 = "only ";
	//Return substring of text given a start
	//position in string object and length.
	string str3 = str1.substr(6, 12);
	printf("ste3: %s\n",str3);
	//insert str2 at position 32
	str1.insert(32, str2);
	printf("ste1 after insert: %s\n",str1);
	str1.replace(str1.find("to be", 0), 5, "to jump");
	printf("ste1 after replace: %s\n",str1);
	str1.erase(9, 4);
	printf("ste1 after erase: ");
	cout << str1 << endl;
	for (int i = 0; i < str3.length(); i++)
		cout << str3[i]; cout << endl;
	return 0;
}

void WeekSales(){
	int weeksale;
	do
	{
		printf ("Please input the weekly sales (-1=quit): ");
		scanf ("%d",&weeksale);
		int comp1=600;
		int comp2=7*5*8+0.1*weeksale*225;
		int comp3=0.2*weeksale*225;
		int comp[]={comp1,comp2,comp3};
		int index[]={1,2,3};

		for (int i=0;i<3;i++)
		{
			for (int j=i;j<3;j++)
			{
				if (comp[j]>comp[i])
				{
					int tmpp=comp[i];
					comp[i]=comp[j];
					comp[j]=tmpp;

					int tmpi=index[i];
					index[i]=index[j];
					index[j]=tmpi;
				}
			}
		}

		printf("Solution %d is the best.",index[0]);
	} while (weeksale!=-1);	
}

int main(){
  /*ScreenPrint *Sp = new ScreenPrint();
  Sp->HelloWorld();
  Sp->FormatOutPut(6,4);
  Sp->Format2OutPut(6,4);
  Sp->OutPut();*/
  //Sp->GetInput();
  Games *G = new Games();
  //G->PlayGames(0);
  //G->BuyGusses(100);

  //outstring();
  //WeekSales();
  G->SalaryDecision();
  system("pause"); //pause the console
  return 0;
}



