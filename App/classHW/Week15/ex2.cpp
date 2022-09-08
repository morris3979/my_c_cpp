#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	char name[10][10];	
	int score[10][2];	
	int i,j;
    int n = 6;
	for(i=0;i<n;i++){
		cout<<"Plz enter Name : ";cin>>name[i];
		cout<<"Plz enter Score : ";cin>>score[i][0];
	}
	for(i=0;i<n;i++){
		score[i][1]=0;
		for(j=0;j<n;j++)
			if(score[i][0]<score[j][0])
				score[i][1]++;
	}
	cout<<"Name"<<name[j]<<"  Score"<<endl;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(score[j][1]==i)
                cout<<name[j]<<"   "<<score[j][0]<<endl;
	
	return 0;
} 