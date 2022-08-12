#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#include<istream>
#include<fstream>
#include<string.h>
using namespace std;

void login();
void registr();
void forgot();
void start();
void menu();
 void deleteCon();
 void update();
class link
{
public:

  string name,number;
    link *next;//next in list
    link *prev;
   // link(double data);
    void displayLink();

    link( )
    {

        next=NULL;
    }

};


class LinkedList
{

public:
    link *first;
    LinkedList()

    {
        first=NULL;

    }
    void insertFirst( );
    double deleteFirst();
    void find();
    bool deleteNode(double data);
    void displayList();


};
 link *first=NULL;
 int len=0;
void  insertFirst()
{
     cout <<"\n\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
	cout << "\t\t\t               Enter contact information                   \n\n";
	cout << "\t\t\t                                                           \n\n";
	cout <<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";

     link *newlink=new link();
    cout<<"Enter name: ";
    cin>>newlink->name;
    cout<<"Enter number: ";
    cin>>newlink->number;
    newlink->next=first;
    first=newlink;

    system ("cls");

    cout <<"\n\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
	cout << "\t\t\t                Contact  saved   Successfully              \n\n";
	cout << "\t\t\t                                                           \n\n";
	cout <<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";

     cout<<"\nPress any key to go Main Menu ";
    getch();
     system ("cls");
}

void  displayList(){

   cout <<"\n\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
	cout << "\t\t\t              All Contacts                                 \n\n";
	cout << "\t\t\t                                                           \n\n";
	cout <<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";

   if(first==NULL)
   {
       cout<<"\n\n\nContact list is Empty";
   }
   else{
      link *trav = first;
      while(trav != NULL)
      {
          cout<<"****************************************"<<endl;
          cout<<"name:"<<trav->name<<endl;
          cout<<"Phone number:"<<trav->number<<endl;
          cout<<"Index position : "<<len<<endl;
          cout<<"****************************************"<<endl;
          trav=trav->next;
          len++;
      }
      cout<<"\n\n\n\n\n\nTotal contacts in the list = "<<len<<endl;
   }

     cout<<"\n\n\nPress any key to go to Main Menu ";
    getch();
     system ("cls");
}


void find(){
   string srch;
    cout <<"\n\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
	cout << "\t\t\t              All Contacts                                 \n\n";
	cout << "\t\t\t                                                           \n\n";
	cout <<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
   cout<<"\n\n\n\nEnter the contact that you want to search:";
   cin>>srch;
   int count=0;
   bool found = false;
   link *current=first;//pointer to go traverse through the linked list
   if(first==NULL)
   {
       cout<<"\nList is Empty"<<endl;
   }
   else
   {


     while(current!=NULL){
        if(srch==current->name || srch==current->number)
         {
              cout<<"\n\t\tFull name: "<<current->name<<endl;
              cout<<"\t\tphone number:"<<current->number<<endl;
              found = true;


         }
         current=current->next;
         count++;

     }

   }
   if(found==true)
   {

       cout<<"\t\tIndex of the contact="<<count<<endl<<endl;
   }
   else{
     cout<<"Contact not found"<<endl;
   }

   cout<<"\nPress any key to go to Main Menu ";
    getch();
     system ("cls");


 }


int main()
{


    int choice;
    cout<<"\n\n\n\n\n\n\n\t\t\t*************************** LOGIN ***************************\n ";
    cout<<"\n\t\t\t\t\t\t1.login";
    cout<<"\n\t\t\t\t\t\t2.Register";
    cout<<"\n\t\t\t\t\t\t3.Forgot credentials";
    cout<<"\n\n\n\n\t\t\tEnter your choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            login();
            break;
        case 2:
            registr();
            break;
        case 3:
            forgot();
            break;
        default:
            cout<<"invalid option"<<endl;
            main();
    }



  return 0;
}
void menu()
{
    cout<<"\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t.....................................\n";
    cout<<"\t\t\t\t\t\t.....................................\n";
    cout<<"\t\t\t\t\t\t|     PHONE BOOK APPLICATION        |\n";
    cout<<"\t\t\t\t\t\t.....................................\n";
    cout<<"\t\t\t\t\t\t|                                   |\n";
    cout<<"\t\t\t\t\t\t|       [1] Add Contacts            |\n";
    cout<<"\t\t\t\t\t\t|       [2] Display Contacts        |\n";
    cout<<"\t\t\t\t\t\t|       [3] Search by number        |\n";
    cout<<"\t\t\t\t\t\t|       [4] Search by name          |\n";
    cout<<"\t\t\t\t\t\t|       [5] update Contacts         |\n";
    cout<<"\t\t\t\t\t\t|       [6] Delete Contacts         |\n";
    cout<<"\t\t\t\t\t\t|                                   |\n";
    cout<<"\t\t\t\t\t\t.....................................\n";
    cout<<"\t\t\t\t\t\t|       [7] Exit                    |\n";
    cout<<"\t\t\t\t\t\t.....................................\n";


}



void start()
{
    system("Color 0B");
    cout<<"\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t.....................................\n";
    cout<<"\t\t\t\t\t\t|...................................|\n";
    cout<<"\t\t\t\t\t\t.      PHONE BOOK APPLICATION       .\n";
    cout<<"\t\t\t\t\t\t|...................................|\n";
    cout<<"\t\t\t\t\t\t.....................................\n\n";
    cout<<"\t\t\t\t\tLoading ";
    char x=219;
    for(int i=0;i<35;i++)
    {
        cout<<x;
        if(i<10)
            Sleep(300);
        if(i>=10 && i<20)
            Sleep(150);
        if(i>=10)
             Sleep(25);
    }
    system("cls");
}

void registr()
{
    string reguser,regpass;
    system("cls");
    cout <<"\n\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
	cout << "\t\t\t                                                               \n\n";
	cout << "\t\t\t                  REGISTER                                     \n\n";
	cout << "\t\t\t                                                               \n\n";
	cout <<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    cout<<"\n\nEnter the username : ";
    cin>>reguser;
    cout<<"\n\nEnter the password : ";
    cin>>regpass;

    ofstream reg("database.txt",ios::app);
    reg<<reguser<<' '<<regpass<<endl;

    cout<<"\n\n\t\tRegistration Succesfull !.........\n\n";

    cout<<"\nPress any key to go to Main Menu ";
        getch();
        system("cls");
    main();

}

void login()
{
    int exist=0;
    string user,pass,u,p;
    system("cls");
    cout <<"\n\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
	cout << "\t\t\t                                                               \n\n";
	cout << "\t\t\t                   LOGIN                                       \n\n";
	cout << "\t\t\t                                                               \n\n";
	cout <<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    cout<<"\n\nEnter the username :";
    cin>>user;
    cout<<"\n\nEnter the password : ";
    cin>>pass;

    ifstream input("database.txt");

    while(input>>u>>p)
    {
        if(u==user && p==pass)
        {
            exist=1;
            system("cls");
        }
    }
    input.close();
    if(exist==1)
    {
//        cout<<"Hello"<<user<<"\n Welcome\n";
//        cin.get();
//        cin.get();
//        main();
          int check;
      system ("cls");
       start();
        while(true )
        {
           menu();
           cout<<"\n\n\t\t\tPlease enter your choice :  ";
           cin>>check;
            system ("cls");
            switch (check)
            {
            case 1:
                 insertFirst();
                break;

            case 2:
                len=0;
               displayList();
                break;
            case 3:
                find();
                break;
            case 4:
                find();
                break;
            case 5:
                update();
                break;
            case 6:
                deleteCon();
                break;
            case 7:
               exit(0);
               break;



            default:
                cout<<"invalid option"<<endl;
            }
        }
    }
    else
    {
        cout<<"\n\t\t\t\tLOGIN ERROR !........\n\n\t\tPlease check your username and password\n";

        cout<<"\nPress any key to go to Main Menu ";
        getch();
        system ("cls");
        main();
    }

}

void forgot()
{
    int ch;
     system("cls");
     cout<<"\n\n\n\n\n\n\n\t\t\t*************************** Forgot Password ? ***************************\n ";
      cout<<"\n\t\t\t\t\t\t1.Search your account by username ";
      cout<<"\n\t\t\t\t\t\t2.Search your account by password ";
      cout<<"\n\t\t\t\t\t\t3.Main menu ";
      cout<<"\n\n\n\n\t\t\t\tEnter your choice : ";
      cin>>ch;

      switch(ch)
      {
          case 1:
              {


                    int ex=0;
                    string searchuser,su,sp;
                     cout<<"\nEnter your remeberd username : ";
                     cin>>searchuser;

                     ifstream searchu("database.txt");
                     while(searchu>>su>>sp)
                     {
                         if(su == searchuser)
                         {
                             ex =1;
                             break;
                         }
                     }
                     searchu.close();
                     if(ex == 1)
                     {
                         cout<<" \n\n\n\t\tHurray !.. your account found !";
                         cout<<" \n\n\n\t\tyour password is : "<<sp;
                          cout<<"\n\n\nPress any key to go to Main Menu ";
                          getch();
                          system ("cls");
                           main();
                     }
                     else
                     {
                        cout<<"\n\n Sorry!.. your account is not found !\n\n";
                        cout<<"\nPress any key to go to Main Menu ";
                          getch();
                          system ("cls");
                         main();
                     }
                    break;
              }
        case 2:
            {


                 int exi=0;
                   string searchpass,su2,sp2;

            cout<<"\nEnter your rememberd password : ";
                 cin>>searchpass;

                 ifstream searchp("database.txt");
                 while(searchp>>su2>>sp2)
                 {
                     if(sp2 == searchpass)
                     {
                         exi =1;
                         break;
                     }
                 }
                 searchp.close();
                 if(exi == 1)
                 {
                     cout<<" \n\nHurray !.. your account found !\n";
                     cout<<"\nyour username is : "<<su2;
                     cout<<" \nyour password is : "<<sp2;
                      cout<<"\n\nPress any key to go to Main Menu ";
                          getch();
                          system ("cls");
                       main();
                 }
                 else
                 {
                    cout<<"\n\n Sorry!.. your account is not found !\n\n";
                   cout<<"\nPress any key to go to Main Menu ";
                          getch();
                          system ("cls");
                     main();
                 }
                break;
            }
            case 3:
                system ("cls");
                main();
                break;
            default:
                cout<<"invalid option"<<endl;
                system("cls");
                main();

      }

}

void update(){
string srch,srch1,srch2;
    cout <<"\n\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
	cout << "\t\t\t                                                               \n\n";
	cout << "\t\t\t                   UPDATE CONTACT                              \n\n";
	cout << "\t\t\t                                                               \n\n";
	cout <<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
   cout<<"\n\n\n\t\tEnter the contact name:";
   cin>>srch;
   int count=0;
   bool found = true;
   link *current=first;//pointer to go traverse through the linked list
   if(first==NULL)
   {
       cout<<"\nList is Empty"<<endl;
   }
   else
   {


     while(current!=NULL){
        if(srch==current->name || srch==current->number)
         {
             cout<<"\t\t\tNew Name: ";
             cin>>srch1;
             cout<<"\t\t\tNew Number: ";
             cin>>srch2;
              current->name=srch1;
              current->number=srch2;
              found = true;

               cout <<"\n\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
	cout << "\t\t\t                Contact  Updated   Successfully              \n\n";
	cout << "\t\t\t                                                           \n\n";
	cout <<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";


         }
         current=current->next;
         count++;

     }

   }
   if(found==true)
   {

       cout<<"\t\tIndex of the contact="<<count<<endl<<endl;
   }
   else{
     cout<<"Contact not found"<<endl;
   }

   cout<<"\nPress any key to go Main Menu ";
    getch();
     system ("cls");


}

void deleteCon(){

    cout <<"\n\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
	cout << "\t\t\t             Delete Contacts                                \n\n";
	cout << "\t\t\t                                                           \n\n";
	cout <<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    int pos;
    link * temp;
   link *current=first;
    cout<<"\n\n\t\tEnter your desired position where you want to delete contact :"<<endl;
    cin>>pos;
    if(first==NULL){
        cout<<"List is Empty"<<endl;
         cout<<"\nPress any key to go Main Menu ";
    getch();
     system ("cls");
    }
    else if(pos>len){
        cout<<"Invalid Position"<<endl;
         cout<<"\nPress any key to go Main Menu ";
    getch();
     system ("cls");
    }
    else if(pos==0){
            current=first;
        first=first->next;
        delete temp;

    cout <<"\n\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
	cout << "\t\t\t              Contact has been deleted successfully!             \n\n";
	cout << "\t\t\t                                                           \n\n";
	cout <<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";

	 cout<<"\nPress any key to go Main Menu ";
    getch();
     system ("cls");
    }
    else{
        for(int i=1;i<pos;i++){
            current=current->next;
        }
        temp=current->next;
        current->next=temp->next;
        delete temp;
        cout <<"\n\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n\n";
	cout << "\t\t\t              Contact has been deleted successfully!             \n\n";
	cout << "\t\t\t                                                           \n\n";
	cout <<"\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";

	 cout<<"\nPress any key to go Main Menu ";
    getch();
     system ("cls");
    }
}

