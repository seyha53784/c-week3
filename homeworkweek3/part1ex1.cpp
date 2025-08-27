#include <iostream>
using namespace std;

class student{
    private:
    int id;
    string name;
    double score;

    public:
    student(int id, string name, double score){
        this -> id = id;
        this -> name = name;
        this -> score = score;
    }
    void display(){
        cout << "ID:" << id << endl;
        cout << "Name:" << name << endl;
        cout << "Score:" << score << endl;
    }
    void setScore(double s){
        score = s;
    }
    double getScore(){
        return score;
    }
    string getName(){
        return name;
    }
};

void findTopStudent(student s1, student s2, student s3) {
    student top = s1;

    if (s2.getScore() > top.getScore()) {
        top = s2;
    }
    if (s3.getScore() > top.getScore()) {
        top = s3;
    }

    cout << "Top Student: ";
    top.display();
}

int main(){

    student s1(101, "Yue Fei", 85.0);
    student s2(102, "ZhuGe Liang", 90.0);
    student s3(103, "Guan Yu", 95.0);

    cout << "All Students:" << endl;
    s1.display();
    s2.display();
    s3.display();

    cout << "\nUpdating Yue Fei’s score..." << endl;
    s1.setScore(100.0);

    cout << "After update:" << endl;
    s1.display();

    cout << endl;
    findTopStudent(s1, s2, s3);

    return 0;
}
