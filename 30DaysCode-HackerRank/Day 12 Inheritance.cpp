class Student :  public Person{
	private:
		vector<int> testScores;
	public:
        Student(string firstName,string lastName,int idNumber ,vector<int> scores):Person(firstName,lastName,id){
            firstName=firstName;
            lastName=lastName;
            id=idNumber;
            this->testScores=scores;
        }
        
        char calculate(){
            int ans=0;
            int n=testScores.size();
            for(int i=0;i<n;i++){
                ans+=testScores[i];
            }
            ans=ans/n;
            if(ans<=100 && ans>=90) return 'O';
            if(ans<=90 && ans>=80) return 'E';
            if(ans<=80 && ans>=70) return 'A';
            if(ans<=70 && ans>=55) return 'P';
            if(ans<=55 && ans>=40) return 'D';
            return 'T';
        }
};
