void inputUserProfile(student *&pHead_s) // user = student
{
	student *pC = pHead_s;
	ifstream fin("User.csv");
	int people;
	fin >> people;
	
	for(int a = 1; a <= people; a++){
	    getline(fin,pC->userName,',');
	    getline(fin,pC->passWord,',');
	    getline(fin,pC->firstName,',');
	    getline(fin,pC->lastName,',');
	    getline(fin,pC->gender,',');
	    getline(fin,pC->birth,',');
	    getline(fin,pC->social_ID,'\n');
	    
    	if(a == people){
			pC->pNext = NULL;
			break;
		}
   	pC->pNext = new student;
   	pC = pC->pNext;
	}
}

void inputTeacherProfile(staff *&pHead_t)
{
	staff *pC = pHead_t;
	ifstream fin("Teacher.csv");
	int people;
	fin >> people;
	
	for(int a = 1; a <= people; a++){
	    getline(fin,pC->userName,',');
	    getline(fin,pC->passWord,',');
	    getline(fin,pC->name,',');
	    getline(fin,pC->age,',');
	    getline(fin,pC->majors,'\n');
	 
	    if(a == people){
			pC->pNext = NULL;
			break;
		}
    pC->pNext = new staff;
    pC=pC->pNext;
	}
}

void inputCoursesInfo(courses *&pHead_co)
{
	courses *pC = pHead_co;
	ifstream fin("Coures.csv");
	int num;
	fin >> num;
	
	for(int a = 1; a <= num; a++){
	    getline(fin,pC->name,',');
	    getline(fin,pC->teacher,',');
	    getline(fin,pC->startDate,',');
	    getline(fin,pC->endDate,',');
	    getline(fin,pC->ID,'\n');
	    getline(fin,pC->credits,',');
	    getline(fin,pC->nums,',');
	    getline(fin,pC->days,',');
	 
	    if(a == num){
			pC->pNext = NULL;
			break;
		}
    pC->pNext = new courses;
    pC=pC->pNext;
}
	
