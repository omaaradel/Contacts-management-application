#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void Addcontact(){
    m:
    fstream contacts;
    int f=0;
    string a,x; long long b,z;
    cout<<"\t\t Please state the  name and the number of the new contact \t\t";
    cout<<"\n";
    cout<<"Name: "; cin>>a; cout<<"\n";
    cout<<"Number: "; cin>>b; cout<<"\n";
    contacts.open("data.txt",ios::in);
    if (!contacts)
    {
      contacts.open("data.txt",ios::app|ios::out);
      contacts<<" "<<a<<" "<<b<<"\n";
      cout<<"You have successfully added "<<a<<" to your contacts."<<"\n";
      f=1;
      contacts.close();
    }
    else
    {
     contacts>>x>>z;
     while (!contacts.eof())
     {
       if (x==a || z==b)
       {
         cout<<"you can't add an existing contact"<<"\n";
         f=1;
       }
       contacts>>x>>z;
     }
     contacts.close();
    }
    if (f==0)
    {
         contacts.open("data.txt",ios::app|ios::out);
      contacts<<" "<<a<<" "<<b<<"\n";
      cout<<"You have successfully added "<<a<<" to your contacts."<<"\n";
      f=1;
      contacts.close();
    }
    else goto m;
}

void Deletecontact(){
    fstream contacts,contacts1;
    int f=0,d;
    string a,x,g; long long b,z,h;
    cout<<"\t\t Please state the name and the number of the contact you want to delete \t\t";
    cout<<"\n";
    cout<<"Name: "; cin>>a; cout<<"\n";
    cout<<"Number: "; cin>>b; cout<<"\n";
    contacts.open("data.txt",ios::in);
    if (!contacts)
    {

      cout<<"sorry, this contact doesn't exist"<<"\n";

    }
    else
    {
        contacts1.open("data1.txt",ios::app|ios::out);
     contacts>>x>>z;
     while (!contacts.eof())
     {
       if (x==a && z==b)
       {
         f=1;
       }
       else {
        contacts1<<" "<<x<<" "<<z<<"\n";
       }
       contacts>>x>>z;
     }
     contacts.close();
     contacts1.close();
     remove("data.txt");
     rename("data1.txt","data.txt");
    }
    if (f==0)
    {
        cout<<"\n\n\n\n";
       cout<<"Sorry, this contact doesn't exist"<<"\n";
       cout<<"\n\n\n\n";
    }
    else  cout<<"\t\tContact successfully deleted.  \t\t"<<"\n";

}
void editcontact(){
    fstream contacts,contacts1;
    int f=0,d;
    string a,x,g; long long b,z,h;
    cout<<"\t\t Please state the name and the number of the contact you want to edit \t\t";
    cout<<"\n";
    cout<<"Name: "; cin>>a; cout<<"\n";
    cout<<"Number: "; cin>>b; cout<<"\n";
    contacts.open("data.txt",ios::in);
    if (!contacts)
    {
      cout<<"\n\n\n\n";
      cout<<"Sorry, this contact doesn't exist"<<"\n";
      cout<<"\n\n\n\n";

    }
    else
    {
        contacts1.open("data1.txt",ios::app|ios::out);
     contacts>>x>>z;
     while (!contacts.eof())
     {
       if (x==a && z==b)
       {
         cout<<"\t\t Select from the following:\t\t"<<"\n";
          cout<<"\n\n\n\n";
         cout<<"1- Change name";
          cout<<"\n";
       cout<<"2- Change number";
       cout<<"\n";
       cin>>d;
           if (d==1)
           {
             cout<<"\t\twrite the new name\t\t"<<"\n";
             cin>>g;
              contacts1<<" "<<g<<" "<<b<<"\n";
           }
           else {
             cout<<"\t\twrite the new number\t\t"<<"\n";
             cin>>h ;
             contacts1<<" "<<a<<" "<<h<<"\n";
           }
       cout<<"\t\tcontact successfully edited.  \t\t"<<"\n";
         f=1;
       }
       else {
        contacts1<<" "<<x<<" "<<z<<"\n";
       }
       contacts>>x>>z;
     }
     contacts.close();
     contacts1.close();
     remove("data.txt");
     rename("data1.txt","data.txt");
    }
    if (f==0)
    {
       cout<<"sorry, this contact doesn't exist"<<"\n";
    }
}
void viewcontacts(){
   fstream contacts;
   string x; long long z,i=1;
   contacts.open("data.txt",ios::in);
    if (!contacts)
    {
      cout<<"\n\n\n\n";
      cout<<"Sorry, you  have 0 contacts"<<"\n";
      cout<<"\n\n\n\n";

    }
    else
    {
     contacts>>x>>z;
       cout<<"----------------------------------------"<<"\n";
       cout<<"            Name           Number   "<<"\n";
       cout<<"----------------------------------------"<<"\n";
     while (!contacts.eof())
     {
       cout<<"Contact "<<i<<") "<<x<<" \t"<<z<<"\t\t\n";
       contacts>>x>>z;
       i++;
     }
     contacts.close();
    }

}

void options(){
    system("CLS");
    m:
    int c,v;
      cout<<"_______________________________________________________________________";
     cout<<"\n\n";
     cout<<"_____________________________Hello MR. Omar_____________________________";
      cout<<"\n\n";
     cout<<"________________________________________________________________________";
     cout<<"\n\n\n\n";
      cout<<"Select from the following:";
       cout<<"\n\n\n\n";
      cout<<"1- Add a new contact";
       cout<<"\n";
       cout<<"2- Delete contact";
       cout<<"\n";
        cout<<"3- Edit contact";
       cout<<"\n";
       cout<<"4- View contacts";
       cout<<"\n";
       cin>>c;
       system("CLS");
       switch(c)
       {
          case 1:

               Addcontact();
               break;

           case 2:
                Deletecontact();
               break;

            case 3:
                 editcontact();
                break;

            case 4:
                 viewcontacts();
                 break;

            default :
                 cout<<"\t\tINVALID CHOICE\t\t"<<"\n\n\n";

       }

  cout<<"\n\n\n\n";
      cout<<"write 1 to go back to the main menu "<<"\n";
      cin>>v;
   if (v==1) {
     system("CLS");
     goto m;
   }
   else
   {
     cout<<"Thanks for using the contacts management application";
   }
}

int main() {
    m:
     long long userpass=3;
     long long a,s;
     string username= "omar";
     string b;
     cout<<"________________________________________________________________________";
     cout<<"\n\n\n\n";
     cout<<"_______________WELCOME TO CONTACTS MANAGEMENT APPLICATION________________";
      cout<<"\n\n\n\n";
     cout<<"________________________________________________________________________";
     cout<<"\n\n\n\n";

     cout<<"Please enter your user name and password to login: "<<"\n";
     cout<<"Name:"; cin>>b; cout<<"\n";
      cout<<"Password:"; cin>>a; cout<<"\n";
     system("CLS");
     if (a==userpass && b==username)
       {
         options();
       }
       else
       {
         cout<<"You have entered the wrong user name or password";
         cout<<"\n\n\n\n";
         cout<<"Write 1 to try again "<<"\n";
         cin>>s;
         if (s==1) { system("CLS");goto m;}
         else  {cout<<"Thanks for using the contacts management application";
         cout<<"\n\n\n\n";
         }
       }

    return 0;
}
