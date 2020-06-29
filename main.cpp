#include <iostream>
#include<string>
#include <vector>
#include <sstream>

using namespace std;

void print_vector(std::vector <double> vector)
{
    for (int i = 0; i < vector.size(); i++) {
        cout << vector[i] << "  ";
    }
}

int main()

{
    double grade = 0.0;
    int credits = 0;
    vector<double>grade_list;
    vector<double>credit_list;
    double sum_crg = 0.0;
    double grade_credits = 0.0;
    double sum = 0.0, gpa;

    std::cout << "please enter the grades, press -1 to quit: " << endl;
    do {
        std::cin >> grade;
        grade_list.push_back(grade);

    } while (grade != -1);
    grade_list.pop_back();
    cout << "size of grade_list is: " << grade_list.size() << endl;

    std::cout << "please enter the credits : " << endl;
    for (int i = 0; i < grade_list.size(); i++) {
        cin >> credits;
        credit_list.push_back(credits);
    }

    //  print_vector(credit_list);

    for (int i = 0; i < credit_list.size(); ++i)
    {
        sum += credit_list[i];
    }
    cout << "Number of Credits:  " << sum << endl;

    for (int i = 0; i < credit_list.size(); ++i) {  
          sum_crg += credit_list[i]* grade_list[i];
}
   
    gpa = sum_crg / sum;
    cout << "GPA= " << gpa;
   
    return 0;
}