#include <iostream>
using namespace std;

int main()
{
    int N, exam_ctr=0;
    float input_val=0, sum_exam=0, temp_high_score = -100.0, exam_score;
    cout<<"Input number of exams: ";
    cin>>N;
    while (exam_ctr<N)
    {
        cout<<"Input exam score: ";
        cin>>exam_score;
        sum_exam = sum_exam + exam_score;
        exam_ctr++;
        if (exam_score>=temp_high_score)
        temp_high_score = exam_score;
    }
    cout<<"Average exam score: "<<sum_exam/exam_ctr;
    cout<<"\nHighest score is: "<<temp_high_score;
    
    return 0;
}