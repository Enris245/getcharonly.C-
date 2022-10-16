#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

main()
{
    char x;
    system("cls");
    cout << "enter a number ";
    while(1)
    {
    x=getch();
    if((x>=65&&x<=90)||(x>=97 && x<=122))
    cout<<x;
    else if(x==13)
    break;
    else if (x==8)
    {
     printf("\nno remove possible\n");
    }
    
    }
    cout<<"how's the program works";

}
