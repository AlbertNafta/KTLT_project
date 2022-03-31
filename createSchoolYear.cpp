#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
void creatSchoolYear();
bool checkFileWithFstream(string path);

struct semester {
	struct semesterInfo {
		string title;
		string star;
		string end;
	};

};
struct User {
	string roles;

	string userName;
	string passWord;
	string firstName;
	string lastName;
	string gender;
	string birth;
	int social_ID;

	User* pNext = nullptr;
};

struct schoolYear {
	string YearStart;
	string YearEnd;
	schoolYear* pNext = nullptr;
};
User user;
int main()
{
	user.roles = "teacher";
	creatSchoolYear();
	return 0;
}
// check file đã tồn tại hay chưa. ( true nếu tồn tại )
bool checkFileWithFstream(string path) {
	ifstream isf(path);
	return isf.good();
}

void creatSchoolYear()
{	// chỉ có giáo viên mới có thể tạo
	if (user.roles == "teacher") {
		schoolYear schoolY;
		cout << "Input a school year:" << endl;
		cout << "Input start date: ";
		cin >> schoolY.YearStart;
		cout << "Input end date: ";
		cin >> schoolY.YearEnd;
		string SchoolYear = schoolY.YearStart + "-" + schoolY.YearEnd;

		if (checkFileWithFstream(SchoolYear + ".txt") == false) {
			// Nếu năm học chưa được tạo, tạo một file mới
			ofstream SchoolYearFile;
			SchoolYearFile.open(SchoolYear + ".txt");
			SchoolYearFile << SchoolYear << endl;
			// gọi hàm tạo
			SchoolYearFile.close();
		}
		else return; // không thì thôi :))
	}
}
