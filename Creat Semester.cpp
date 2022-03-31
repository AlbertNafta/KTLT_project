#include <iostream>
using namespace std;

// thông tin học kỳ
struct semesterInfo {
    string title;
    string star;
    string end;
};
// các phần tử có trong học kỳ
struct semesterElement {
    semesterInfo value;
    semesterElement* pNext;
};
// 1 linked list chứa các học kỳ của một năm học
struct semester {
    semesterElement* pHead = nullptr;
    semesterElement* pTail = nullptr;
};
// Chỉ giáo viên mới được tạo
void creatSemester() {
    semester Semester;
    semesterInfo Info;
    cout << "Input semester information: ";
    cin >> Info.title;
    cout << "Input star date: ";
    cin >> Info.star;
    cout << "Input end date: ";
    cin >> Info.end;

    cout << "Semester have just created";
    // thêm phần tử vào học kỳ
    addSemester(Info, Semester);
}
void addSemester(semesterInfo Value, semester Semester) {
    semesterElement* temp = new semesterElement;
    temp->value = Value;
    temp->pNext = nullptr;

    if (Semester.pHead == nullptr) {
        Semester.pHead = temp;
        Semester.pTail = temp;
        temp = nullptr;
    } // ds học kỳ đang trống
    else {
        Semester.pTail->pNext = temp;
        Semester.pTail = temp;
    }
}
int main()
{
    
}
