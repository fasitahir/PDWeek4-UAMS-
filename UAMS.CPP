#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int x , int y);
void printHeader();
int menu(int choice);
string name1;
float matric1;
float inter1;
float ecat1;
float aggregate1; 
void student1();
void aggregatef1();

string name2;
float matric2;
float inter2;
float ecat2;
float aggregate2; 
void student2();
void aggregatef2();

void compare();


main()
{
  int x;
  int y;
  int choice;
  char key;
 


  while(true)
  {
    system("cls");
    gotoxy(x, y);
    printHeader();
    choice=menu(choice);
    


    if(choice==1)
    {
      cout<<"you chossed 1."<<endl;
      student1();
      
    }

    if(choice==2)
    {
      cout<<"you chossed 2."<<endl;
      student2();
      
    }

    if(choice==3)
    {
      cout<<"you chossed 3."<<endl;
      aggregatef1();      
    }

    if(choice==4)
    {
      cout<<"you chossed 4."<<endl;
      aggregatef2();
    }

    if(choice==5)
    {
      cout<<"you chossed 5."<<endl;

      compare();
    }
      
    if(choice==6)
    {
      return 0;
    }


    cout<< endl <<"Press any key to continue....";
    cin>>key;

  }
}



void printHeader()
{
  cout<<"**************************************************"<<endl;  
  cout<<"*     UNIVERSITY ADMISSION MANAGEMENT SYSTEM     *"<<endl;
  cout<<"**************************************************"<<endl;
}




int menu(int choice)
{
  gotoxy(0,7);

  cout<<"Enter 1 to add the details of first student..."<<endl;
  cout<<"Enter 2 to add the details of first student..."<<endl;
  cout<<"Enter 3 to calculate aggregate of first student..."<<endl;
  cout<<"Enter 4 to calculate aggregate of second student..."<<endl;
  cout<<"Enter 5 to print the roll number 1..."<<endl;
  cout<<"Enter 6 to exit..."<<endl;
  cout<<"Your choice is: ";
  cin>>choice;
  cout<<endl;
  
  return choice;
}



void student1()
{
  cout<<"Enter your name: ";
  cin>> name1;
  
  cout<<"Enter your matric marks (out of 1100): ";
  cin>> matric1;


  cout<<"Enter Your inter marks(out of 550): ";
  cin>> inter1;

  cout<<"Enter Your ecat Marks(out of 400): ";
  cin>> ecat1;

}



void student2()
{
  cout<<"Enter your name: ";
  cin>> name2;
  
  cout<<"Enter your matric marks (out of 1100)";
  cin>> matric2;


  cout<<"Enter Your inter marks(out of 550): ";
  cin>> inter2;

  cout<<"Enter Your ecat Marks(out of 400): ";
  cin>> ecat2;

}



void aggregatef1()
{
  aggregate1 = (matric1/1100)*30 + (inter1/550)*30 + (ecat1/400)*40;
  cout<<"Aggregate of student 1 is: "<<aggregate1<<endl;
}



void aggregatef2()
{
  aggregate2 = (matric2/1100)*30 + (inter2/550)*30 + (ecat2/400)*40;
  cout<<"Aggregate of student 2 is: "<<aggregate2<<endl;
}



void compare()
{

  if(aggregate1>aggregate2)
  {
    cout<<"Roll number is: "<< name1<<endl;
  }

  
  if(aggregate2>aggregate1)
  {
    cout<<"Roll Number 1 is : "<< name2<<endl;
  }
}



void gotoxy(int x , int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}