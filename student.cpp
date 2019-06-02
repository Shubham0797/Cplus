#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
	    int sum=0,count=0;
        float avg;
    	vector<int> testScores;  
	public:
        
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
          Student(string firstNam, string lastNam, int Id, vector<int> scores)
              : Person(firstNam, lastNam, Id) {
            this->testScores = scores;
            count = testScores.size();
          }
          /*
           *   Function Name: calculate
           *   Return: A character denoting the grade.
           */
          // Write your function here
          char calculate()
          {
              char g;
              for(int i=0;i<count;i++)
              {
                  sum+=testScores[i];
              }
              avg=sum/count;
              if (avg >= 90 && avg <= 100)
                g = 'O';
              else if (avg >= 80 && avg <= 90)
                g = 'E';
              else if (avg >= 70 && avg <= 80)
                g = 'A';
              else if (avg >= 55 && avg <= 75)
                g = 'P';
              else if (avg >= 40 && avg <= 55)
                g = 'D';
              else if (avg < 40)
                g = 'T';
              return g;
          }

};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}