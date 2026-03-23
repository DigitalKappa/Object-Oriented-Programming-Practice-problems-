#include<iostream>
#include<string>
using namespace std;

struct studentportal{
	string name[5] = {"Roll no. 1801 | Naveed Ahmad = ", "Roll no. 1802 | Muhammad Faaiz = ","Roll no. 1803 | Maryam Imtiaz = ", "Roll no. 1804 | Amnna Shakoor = ","Roll no. 1805 | Abullah Malik = " };
	bool attend[5] ;
};

int main(){
 studentportal atend;
	int present = 0;
	int absent = 0;

	cout<<"\033[1;97mStudent attendence regulation programme......\033[0m"<<endl;
	cout<<"\033[3;90mWrite (1) for Present.\033[0m"<<endl<<"\033[3;90mWrite (0) for Absent.\033[0m"<<endl<<endl<<"\033[40;90m********************************************\033[0m"<<endl<<endl;
	
	for(int i=0; i<5; i++){
	 code:
			cout<<atend.name[i] ;
	int temp; 
        	cin >> temp;
        if (temp != 0 && temp != 1) {
            cout << "\033[3;31mInvalid input! Please enter 0 or 1.\033[0m" << endl;
            goto code; 
        }
        atend.attend[i] = temp;
		
		if(atend.attend[i]==true){
			present++;
		}
		else
			absent++;
		}
			cout<<endl;
			cout<<"\033[3;33mThe final attendace data  is given below:\033[0m"<<endl<<"\033[40;33m********************************************\033[0m"<<endl<<endl;
		
		for(int i=0; i<5; i++){
			cout<<atend.name[i]<<"  "<<(atend.attend[i] ? "\033[32mPresent\033[0m" : "\033[5;31mAbsent\033[0m")<<"."<<endl;
	}
			cout<<endl;
	
			cout<<"\033[3;33mTotal number of Present students are = \033[0m"<<present<<endl;
			cout<<"\033[3;33mTotal number of Absent students are = \033[0m"<<absent;

   return 0;
}
