/*             BANKING SYSTEM

Project using - 
                1.file handling
                2.string,loop,conditional statements...etc
    
functions -

                1.create account()
                2.deposit ammount
                3.withdraw ammount
                4.display customer details

*/

#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int income,strength=0,DD,MM,YY,basic_amnt=0,amount,balance=0,withdraw_amount=0,count;
long int CNIC,phone;
string name,occupation,Fathername,address;

void opening()
{

int i;
ofstream file("std.txt");
if(!file)
{
    cout<<"File not created"<<endl;
}
else
{
cout<<"How many people records do you want to store ?"<<endl;
cin>>strength;
for(i=0;i<strength;i++)
{
cin.ignore();
cout<<"Enter record "<<i+1<<"person "<<endl;
cout<<"Your name ="<<endl;
getline(cin,name);
cout<<"Your occupation ="<<endl;
getline(cin,occupation);
cout<<"Father name ="<<endl;
getline(cin,Fathername);
cout<<"Your address ="<<endl;
getline(cin,address);
cout<<"Your CNIC no. ="<<endl;
cin>>CNIC;
cout<<"Your phone no. ="<<endl;
cin>>phone;
cout<<"Your income per month ="<<endl;
cin>>income;
cout<<"Your dob ="<<endl;
cin>>DD>>MM>>YY;
cout<<"Basic amount ="<<endl;
cin>>basic_amnt;

cout<<"Your account has been succesfully created ..."<<endl;

// now send all above details to a file...
file<<"<---------------------";
file<<i+1;
file<<"- person---------------->"<<endl;

file<<"Name: "<<name<<endl;
file<<"occupation: "<<occupation<<endl;
file<<"Father name: "<<Fathername<<endl;
file<<"address: "<<address<<endl;
file<<"CNIC: "<<CNIC<<endl;
file<<"phone: "<<phone<<endl;
file<<"income: "<<income<<endl;
file<<"dob: "<<DD<<"/"<<MM<<"/"<<YY<<endl;
file<<"basic amount: "<<basic_amnt<<endl;

}

}

}

void displaying()
{

system("cls");

string text;
ifstream outfile("std.txt");

while(getline(outfile,text))
{
cout<<text<<endl;
cout<<endl;
}
outfile.close();

}

void deposit()
{

ofstream file("std.txt");
cout<<"\nEnter amount to deposit: "<<endl;
cin>>amount;

balance+=amount+basic_amnt;
cout<<"\nYou deposited amount of ->"<<amount<<" successfully and your current balance is ->"<<balance;
file<<"balance: "<<balance<<endl;

}

void withdraw()
{

ofstream file("std.txt");
cout<<"\nkindly enter amount to withdraw"<<endl;
cin>>withdraw_amount;
balance-=withdraw_amount;
cout<<"You withdraw amount of ->"<<withdraw_amount<<" successfully and your current balance is ->"<<balance;
file<<"balance: "<<balance<<endl;
}

void end();
void dis()
{
    system("clr");

cout<<"-------------------------------------------------"<<endl;
cout<<"--->              BANK SYSTEM                   <---"<<endl;
cout<<"-------------------------------------------------"<<endl;
cout<<"              choose options: "<<endl;
cout<<"\n---->Press 1 for open a new account "<<endl;
cout<<"\n---->Press 2 for see details  "<<endl;
cout<<"\n---->Press 3 for deposit   "<<endl;
cout<<"\n---->Press 4 for withdraw "<<endl;
cout<<"\n---->Press 5 for exit  "<<endl;

}
int main()
{
int choice;
dis();
cin>>choice;

switch(choice)
{
case 1:
opening();
end();
break;

case 2:
displaying();
end();
break;
case 3:
deposit();
end();
break;
case 4:
withdraw();
end();
break;
case 5:
exit(0);
break;
default:
cout<<"wrong choice"<<endl;

}
return 0;
}
void end()
{
cout<<"\nPress Enter: ";
getch();
system("CLS");
cout<<"\n--------------------------------------------\n";
char a;
cout<<"\n\tPress y go to main menu: "<<endl;

cout<<"\tPress n to exit from program: "<<endl;
cout<<"Entr your option: ";
cin>>a;
if(a=='y'||a=='Y')
{
    main();
}
else if(a=='n'||a=='N')
{
    exit(0);
}
else
{

    cout<<"wrong output: "<<endl;
    end();
}



}