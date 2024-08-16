#include<iostream>
#include<vector>
using namespace std;
vector<int>rollNoList;
vector<string>nameList;
vector<string>gradeList;
vector<string>subjectList;

void addFun(){
	int rn; string name, grade, sub;
	cout<<"Enter RollNo: ";
	cin>>rn;
	cout<<"Enter Name: ";
	cin>>name;
	cout<<"Enter Subject: ";
	cin>>sub;
	cout<<"Enter Grade: ";
	cin>>grade;
	
	rollNoList.push_back(rn);
	nameList.push_back(name);
	subjectList.push_back(sub);
	gradeList.push_back(grade);
	cout<<"Student Registered Successfuly"<<endl;
}

void searchFun(){
	int rn;
	cout<<"Enter RollNo for Search: ";
	cin>>rn;
	bool found=false;
	for(int i=0;i<rollNoList.size();i++){
		if(rn==rollNoList[i]){
		
			found=true;
			cout<<"RollNo: "<<rollNoList[i]<<endl;
			cout<<"Name: "<<nameList[i]<<endl;
			cout<<"Subject: "<<subjectList[i]<<endl;
			cout<<"Grade: "<<gradeList[i]<<endl;
			break;
		}
	}
	if(!found){
		cout<<"Student Not Found"<<endl;
	}	

	
}

void displayFun(){
	for(int i=0;i<rollNoList.size();i++){
		cout<<"RollNo: "<<rollNoList[i]<<endl;
		cout<<"Name: "<<nameList[i]<<endl;
		cout<<"Subject: "<<subjectList[i]<<endl;
		cout<<"Grade: "<<gradeList[i]<<endl;
		cout<<" "<<endl;
	}
}

void updateFun(){
	int rn;string sub;
	cout<<"Enter RollNo to update Record: ";
	cin>>rn;
	cout<<"Enter New Subject: ";
	cin>>sub;
	
	for(int i=0; i<rollNoList.size();i++){
		if(rn==rollNoList[i]){
			subjectList[i]=sub;
			cout<<"Record Updated Successfuly!"<<endl;	
		}
	}
}

void removeFun(){
	int rn;
	cout<<"Enter RollNO To Remove: ";
	cin>>rn;
	
	bool found=false;
	for(int i=0;i<rollNoList.size();i++){
		if(rn==rollNoList[i]){
			found=true;
			rollNoList.erase(rollNoList.begin() + i);
			nameList.erase(nameList.begin() + i);
			subjectList.erase(subjectList.begin() + i);
			gradeList.erase(gradeList.begin() + i);
			cout<<"Student Removed Successfuly!"<<endl;		
		}
	}
	if(!found){
		cout<<"Invalid RollNo"<<endl;
	}
}
int main(){
while(true){
	cout<<"Student Record Management System"<<endl;
	cout<<"================================"<<endl;
	cout<<"1.Add Student."<<endl;
	cout<<"2.Search Student."<<endl;
	cout<<"3.Display All Students."<<endl;
	cout<<"4.Update Record."<<endl;
	cout<<"5.Remove Student."<<endl;
	cout<<"6.Exit."<<endl;
	int choice;
	cout<<"Enter your Choice: ";
	cin>>choice;
	
	if(choice==1){
		//add student
		system("cls");
		addFun();
	}
	
	else if(choice==2){
		//search Student
		system("cls");
		searchFun();
	}
	else if(choice==3){
		//display all
		system("cls");
		displayFun();
	}
	else if(choice==4){
		//update record
		system("cls");
		updateFun();
	}
	else if(choice==5){
		//remove student
		system("cls");
		removeFun();
	}
	else if(choice==6){
		system("cls");
		cout<<"Best of Luck!"<<endl;
		break;
	}
	else{
		cout<<"Invalid Input!"<<endl;
	}
}	
}
