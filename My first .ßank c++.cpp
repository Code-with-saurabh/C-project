#include <iostream>
using namespace std ;
class bank {
		private :
				string username;

    int date, month, year;
    string pnumber;
    string adharnum;
    string fname;
    string lname;
    string fathname;
    string mothname;
    string address;
    string typeaccount;
    string password;  
    string Email;
   
   
   
   /*                                                   */
    string password1;
	string username1;  
    string Email1;
    string pnumber1;
    
    
    ////////////////////////////////////////////////////////////////
	public :    
	int ch;

 
	void account(){
	
 
    cout<<endl<<endl<<"FIRST NAME..";
    cin>>fname;
 
    cout<<endl<<"LAST NAME..";
    cin>>lname;
 
    cout<<endl<<"FATHER's NAME..";
    cin>>fathname;
 
    cout<<endl<<"MOTHER's NAME..";
    cin>>mothname;
 
    cout<<endl<<"ADDRESS..";
    cin>>address;
 
    cout<<endl<<"ACCOUNT TYPE";
    cin>>typeaccount;
 
    cout<<endl<< "DATE OF BIRTH..";
    cout<<endl<<"DATE-";
    cin>>date;
    cout<<endl<<"MONTH-";
    cin>>month;
    cout<<endl<<"YEAR-";
    cin>>year;
 
    cout<<endl<<"ADHAR NUMBER";
    cin>>adharnum;
 
    cout<<endl<<"PHONE NUMBER";
    cin>>pnumber;
    
    cout<<endl<<"E-mail";
    cin>>Email;
 
 
    cout<<endl<<"USERNAME..";
    cin>>username;
    
     cout<<endl<<"PASSWORD..";
    cin>>password;
    
    
    	accountcreated();
	}
	 
	 /*void display (){
	 	
	 	
	 }*/
	 
	 
	 //////////////////////////////////////////////////////////////////////
	 // in account 
	 void login(){ 
 
	   string username1;
	   string password1;
	   string pnumber1;
	   string Email1;
    	cout<<"USERNAME..";
    	cin>>username1;
    	
    	cout<<"PASSWORD..";
    	cin>>password1;  
    	
    	if(password==password1&&username==username1){
    	
    		Display();
    		
		}
			else if(username!=username1) {
			cout<<" username is wrong again.. "<<endl;
			
	Uwrong();
		}
		
			else if(password!=password1) {
			cout<<" password is wrong .. "<<endl;
			
		Pwrong();
		}
		
		else {
			cout<<" somthig wrong... "<<endl;
		}
		
}
	//////////////////////////////////////////////////////////////// 
	// main 
	 void login1(){ 
	 
	 
	 	cout<<endl<<"USERNAME..";
    	cin>>username;
    	
    	cout<<"PASSWORD..";
    	cin>>password;  
	 
	  cout<<" sorry but your account is not found.."<<endl;
	 }
	 ////////////////////////////////////////////////////////////
	 //prosssss....
	void accountcreated()
{
    int i;
 
 
cout<<  "\t\t\nPLEASE WAIT....\n\nYOUR DATA IS PROCESSING...."<<endl<<endl;
    for (i = 0; i <200000000; i++) {
       
    }
 
    //
 
    cout<<"\t\tACCOUNT CREATED SUCCESSFULLY...."<<endl<<endl;
 
 
    cout<<endl<<"\t\tPress 1 for login"<<endl;
     cout<<"\t\tPress 2 for exit"<<endl<<endl;
     
    cin>>ch;
    
      switch(ch) {
      	case 1:   login();
      break;
      case 2: exit(0);
      break;
	default:
		cout<<"somthing wrong "<<endl;
}

 
  
}
 
 //////////////////////////////////////////////////////////
 
 void Display(){
 	
 	cout<<"\t\t WELCOME "<<fname<<" "<<  lname<<endl;
 	cout<<"\t\t..............................."<<endl<<endl;
 	
 	cout<<"==== YOUR ACCOUNT INFO ===="<<endl;
 	cout<<"***************************"<<endl<<endl;
 	
 	cout<<"NAME.. "<<fname<< " "<<lname<<endl<<endl;
 	cout<<"FATHER's NAME.. "<<fathname<< " "<<lname<<endl<<endl;
 	cout<<"MOTHER's NAME.. "<<mothname<<  " "<<lname<<endl<<endl;
 	cout<<"ADHAR CARD NUMBER.. "<<adharnum<<endl<<endl;
 	cout<<"MOBILE NUMBER.. "<<pnumber<<endl<<endl;
 	cout<<"DATE OF BIRTH.. "<<date<<"-"<<month<<"-"<<year<<endl<<endl;
 	cout<<"ADDRESS.. "<<address<<endl<<endl;
 	cout<<"ACCOUNT TYPE.. "<<typeaccount<<endl<<endl;
  
  
 	
 	
 	
 }
 
 
 void Pwrong(){
  
		cout<<endl<<"enter 1 for try agein "<<endl<<"enter 2 for forget password"<<endl<<endl;	
			 cin >> ch;
			switch(ch) {
			case 1: cout<<"USERNAME..";
    	cin>>username1;
    	
    	cout<<"PASSWORD..";
    	cin>>password1;  
    	
    	if(password==password1&&username==username1){
    	
    		Display();
    		
		}
	     
	     	else if(username!=username1) {
			cout<<" username is wrong .. "<<endl;
	       Uwrong();
			
		}
	     
	     
	     else {
	     	cout<<"password is wrong again"<<endl;
		 }
			break;
			
			case 2:
				cout<<" to forgot a passwerd enter your phone nuber and E-mail :"<<endl;
				cout<<endl<<"PHONE NUMBER"<<endl;
                cin>>pnumber1;
                
                cout<<endl<<"E-mail"<<endl;
                cin>>Email1;
                
                if(pnumber==pnumber1&&Email==Email1){
                	cout << " Enter a nuw password"<<endl;
                	cin>>password;
                	
                	
				}
					else if (Email!=Email1){
					cout<<"e-mail is wrong "<<endl;
					exit(0);
				}
					else if (pnumber!=pnumber1){
					cout<<"phone number is wrong "<<endl;
					exit(0);
				}
				cout<<endl<<endl<<"To login enter your :"<<endl<<endl;
					cout<<endl<<"USERNAME..";
    	cin>>username1;
    	
    	cout<<"PASSWORD..";
    	cin>>password1;  
    	
    	if(password==password1&&username==username1){
    		Display();}
    		
    				else if(username!=username1) {
			cout<<" username is wrong .. "<<endl;
	       Uwrong();
			
		}
			else if(password!=password1) {
			cout<<" password is wrong again.. "<<endl;
			
			exit(0);
		}
    		
    		else {
    			cout<<" somting wrong.."<<endl;
    			exit(0);
			}
				
	
}
}
//////////////////////////////////////////////////////////////
void Uwrong(){
	int ch;
		cout<<endl<<"enter 1 for try agein "<<endl<<"enter 2 for forget username"<<endl<<endl;	
			 cin >> ch;
			switch(ch) {
			case 1: cout<<"USERNAME..";
    	cin>>username1;
    	
    	cout<<"PASSWORD..";
    	cin>>password;  
    	
    	if(password==password1&&username==username1){
    	
    		Display();
    		
		}
		
			else if(password!=password1) {
			cout<<" password is wrong .. "<<endl;
			
		Pwrong();
		}
	   else {
	     	cout<<"username is wrong again"<<endl;
		 }
			break;
			
			case 2 :
						cout<<" to forgot a username enter your phone nuber and E-mail :"<<endl;
				cout<<endl<<"PHONE NUMBER"<<endl;
                cin>>pnumber1;
                
                cout<<endl<<"E-mail"<<endl;
                cin>>Email1;
                
                if(pnumber==pnumber1&&Email==Email1){
                	cout << " Enter a nuw username"<<endl;
                	cin>>username1;
                	
                	
				}
				else if (Email!=Email1){
					cout<<"e-mail is wrong "<<endl;
					exit(0);
				}
					else if (pnumber!=pnumber1){
					cout<<"phone number is wrong "<<endl;
					exit(0);
				}
				
					cout<<endl<<endl<<"To login enter your :"<<endl<<endl;
				cout<<endl<<"USERNAME..";
    	cin>>username1;
    	
    	cout<<"PASSWORD..";
    	cin>>password1;  
    	
    	if(password==password1&&username==username1){
    		Display();;}
    		
    		else if(username!=username1) {
			cout<<" username is wrong again.. "<<endl;
			exit(0);
			
		}
			else if(password!=password1) {
			cout<<" password is wrong .. "<<endl;
			
		Pwrong();
		}
 
			
			
    		
    		else {
    			cout<<" somting wrong.."<<endl;
    			exit(0);
			}
	}
}

 //////////////////////////////////////////////////////////////////////////////  
 
 
 
 
};
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
int main (){
 
 

bank saurabh;
 

 cout<<"\t\tWELCOME TO BANK ACCOUNT SYSTEM"<<endl<<endl;
    
 
      cout<<"\t\t********************************"<<endl<<endl;
  
 
    cout<<"DEVELOPER-Naman Saurabh"<<endl<<endl;
    
 
     
    cout<<"1.... CREATE A BANK ACCOUNT"<<endl;
  
    cout<<"2.... ALREADY A USER? SIGN IN"<<endl;
   
    cout<<"3.... EXIT\n\n"<<endl;
 
  cout<<endl<<endl<<"ENTER YOUR CHOICE.."<<endl;
 
    cin>>saurabh.ch;;
    
    
 

switch(saurabh.ch) {
	case 1: 	cout<<endl<<"!!!!!CREATE ACCOUNT!!!!!"<<endl;
	
	saurabh.account();

	 break;
	 
	 case 2: saurabh.login1();
	  break;
	  
	  case 3: exit(0);
	   break;
	
	default: 
		cout<<"Somthing Wrong..."<<endl;
		break;
	
}
 
return 0;
}


