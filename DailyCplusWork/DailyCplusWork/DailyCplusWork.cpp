// From: https://developers.google.com/edu/c++/getting-started
// Description: a program that prints the immortal saying "hello world"

#include "stdafx.h"
#include <iostream>
#include "ScreenPrint.h"
#include "Games.h"
using namespace std;


int main(){
  /*ScreenPrint *Sp = new ScreenPrint();
  Sp->HelloWorld();
  Sp->FormatOutPut(6,4);
  Sp->Format2OutPut(6,4);
  Sp->OutPut();*/
  //Sp->GetInput();
  Games *G = new Games();
  //G->PlayGames(0);
  G->BuyGusses(100);
  system("pause"); //pause the console
  return 0;
  
}

