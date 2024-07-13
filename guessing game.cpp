#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
   cout << " ------    Welcome to the number guessing game   ------          " 
   srand(time(0));
   int randnumber = (rand() % 100) + 1;
   cout << "\n  You will have total 5 chances to guess the correct number.\n";
   int chanceLeFt = 5;
   int playerinput;
   for (i = 1; i <= 5; i++)
   {
      cout << "\nEnter the number:";
      cin >> playerinput;

      if (playerinput == randnumber)
      {
         cout << "\n Congrats!! You have successully guessed the right number\n";
         break;
      }
      else
      {
         if (playerinput > randnumber)
         {
            cout << "\nInsert a smaller number." << endl;
         }

         else
         {
            cout << "Insert a larger number." << endl;
         }
      }
      chanceLeFt--;
      cout << "\n(ChanceleFt to guess the random number:" << chanceLeFt << ")" << endl;

      if (chanceLeFt == 0)
      {
         cout << "\n Sorry your chance has been Finished to guess the random number."<<endl;
         cout<<"The random number was:"<<randnumber<<endl;
      }
   }
   cout<<"\n";
   return 0;
}