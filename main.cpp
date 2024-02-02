#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void printn()
{
    cout<<"-------------------"<<'\n';
}
void valid(){
    cout<<"Please Enter a valid choice"<<endl;
       cout<<"Enter your choice : ";
}
static int RandomNumber (int from , int to )
{

 int RandomNum= rand() % (to-from +1)+from;
 return RandomNum;
}
static int Range()
{
 int choice , to ,from, CoumputerNum;
   cout<<"1- Easy level (Your range) " <<'\n';
   cout<<"2- Hard level(from 1 to 100)"<<'\n';
   cout<<"Enter your choice : ";
   cin>>choice;
   if (choice != 1 && choice !=2)
   {
       valid();
        cin>>choice;
   }
   if (choice==2)
   {
    CoumputerNum=RandomNumber(1,100);

   }
  else  if (choice ==1)
  {
  cout<<"Choose your Range"<<'\n';
  cout<<"from : ";
    cin>>from;

    cout<<"To   : ";
    cin>>to;
    printn();
    CoumputerNum =RandomNumber(from,to);
  }
  return CoumputerNum;
}

void Header()
{
    printn();
    cout<<"NUMBER GUESSING GAME"<<endl;
    printn();
}

int main()
{
srand(static_cast<unsigned>(time(NULL)));
  int Guess,computerNum,choice=1 ;
  Header();
  while (choice!=2)
  {
   computerNum=Range();
  for (int i=5 ;i>0 ; i--)
  {
   cout<<"Guess a number (you have "<<i <<" Chances) : ";
   cin>>Guess;
   cout<<endl;
   if (Guess==computerNum )
   {
       cout<<"YOU WON!!"<<endl;
        printn();
        break;
   }
   if (i==1)
   {
       break;
   }
   else if (Guess>computerNum)
   {
       cout<<"Try Smaller Number"<<endl;
       printn();
   }
   else if (Guess<computerNum)
   {
       cout<<"Try Higher Number"<<endl;
       printn();
   }
  }
  if( Guess!=computerNum)
  {
   cout<<"Sorry you lost the right number was "<<computerNum<<endl;
   printn();
  }

  cout<<"Do you want to play again "<<endl;
  cout<<"1- Yes\n2- No "<<endl;
   cout<<"Enter your choice : ";
  cin>>choice;
  if (choice != 1 && choice !=2)
   {
       valid();
        cin>>choice;
   }

  printn();
}
cout<<"Thanks for playing the Game"<<'\n';


    return 0;
}




