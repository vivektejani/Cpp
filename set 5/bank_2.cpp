#include<iostream>
using namespace std;

class bank{
	public:
		int a2, amt, bal;
		char a,p;
		string name, a_c, p_n, email;

	public:
		void stp1() {
			
				cout << "\t\t\t\t\t -: BANK MANAGMENT SYSTEM :-" << 	endl;
				cout << "\t\t      -----------------------------------------------------------------" << endl;
				
				cout << "\t\t\t\t\t-: Designed N Programed By :-" << endl;
				cout << "\t\t      -----------------------------------------------------------------" << endl;
				cout << "\t\t\t\t\t       Romit Katrodiya " << endl << endl;
				
				cout << "\t\t\t\t\t\t-: Trainer :- " << endl;
				cout << "\t\t      -----------------------------------------------------------------" << endl;
				cout << "\t\t\t\t\t\t Ankit Patel "<< endl << endl << endl;
				
				cout << "\t\t\t\t\t Press Any Key N Enter to Continue..." << endl;
				cout << "\t\t      -----------------------------------------------------------------" << endl;
				cout << "\t\t      -: Press A to Log in as Aministrator Or S to Log in as a STAFF :-" << endl;
				cout << "\t\t      -----------------------------------------------------------------" << endl ;
				cin >> a;
				
				if (a=='S' || a=='s') {
					cout << "\n";
					cout << "\t\t      -----------------------------------------------------------------" << endl;
					cout << "\t\t\t\t\t    -: Welcome as STAFF :-" << endl;
					cout << "\t\t      -----------------------------------------------------------------" << endl;
					cout << "\t\t\t       Enter the Name of Staff             :";
					cin >> name;
					cout << "\t\t\t       Enter the Account Number of Staff   :";
					cin >> a_c;
					cout << "\t\t\t       Enter the Phone Number of Staff     :";
					cin >> p_n;
					cout << "\t\t\t       Enter the E-mail of Staff           :";
					cin >> email;
					cout << "\t\t\t       Enter the balance of Staff          :";
					cin >> bal;
					cout << endl;
					
					cout << "\t\t      -----------------------------------------------------------------" << endl;
					cout << "\t\t      Name       :" << name << endl;
					cout << "\t\t      Account no :" << a_c << endl;
					cout << "\t\t      Phone no   :" << p_n << endl;
					cout << "\t\t      E-mail     :" << email << endl;
					cout << "\t\t      balance    :" << bal << endl;
					
					cout << "\t\t      -----------------------------------------------------------------" << endl << endl << endl;
				} 
		}
		
		
		void stp2() {
			cout << "\t\t\t\t  Press [1] to Deposite the money : " << endl << endl;
			cout << "\t\t\t\t  Press [2] to Transfer the money : " << endl << endl;
			cout << "\t\t\t\t  Press [3] to Withdrew the money : " << endl << endl;
			cout << "\t\t\t\t  Enter number : ";
			cin >> a2;
			
			if (a2 == 1) {
				dep();
			} else if (a2 == 2) {
				tran();
			} else if (a2 == 3) {
				wid();
			}
		}
		
		void dep() {
			cout << endl << endl ;
			cout << "\t\t      -----------------------------------------------------------------" << endl;
			cout << "\t\t\t\t      Deposite The Money : ";
			cin >> amt;
			cout << "\t\t      -----------------------------------------------------------------" << endl << endl;
			cout << "\t\t\t      Your Actule Amount is : " << bal << endl;
			cout << "\t\t\t      Congrates Your Amount Has Deposite Successfully" << endl;
			bal=bal+amt;
			cout << "\t\t\t      Your Account Balance is : " << bal << endl;
		}
		
		void tran() {
			cout << endl << endl ;
			cout << "\t\t      -----------------------------------------------------------------" << endl;
			cout << "\t\t\t\t      Transfer The Money : ";
			cin >> amt;
			cout << "\t\t      -----------------------------------------------------------------" << endl << endl;
			cout << "\t\t\t      Your Actule Amount is : " << bal << endl;
			cout << "\t\t\t      Congrates Your Amount Has Transfer Successfully" << endl;
			bal=bal-amt;
			cout << "\t\t\t      Your Account Balance is : " << bal << endl;
		}
		
		void wid() {
			cout << endl << endl ;
			cout << "\t\t      -----------------------------------------------------------------" << endl;
			cout << "\t\t\t\t      Withdreaw The Money : ";
			cin >> amt;
			cout << "\t\t      -----------------------------------------------------------------" << endl << endl;
			cout << "\t\t\t      Your Actule Amount is : " << bal << endl;
			cout << "\t\t\t      Congrates Your Amount Has Withdreaw Successfully" << endl;
			bal=bal-amt;
			cout << "\t\t\t      Your Account Balance is : " << bal << endl;
		}
};

int main() {
	char p;
	bank b;
	
	b.stp1();
	b.stp2();
	
	while (!0) {
		cout << endl << endl << "\t\t      Enter E if you want to Exit or Enter C to continue :";
		cin >> p;
		cout << endl << endl;
	
		if (p == 'C' || p == 'c') {
			b.stp2();
		} else if(p == 'E' || p == 'e') {
			exit(0);
		}
	}
		
	return 0;
}

