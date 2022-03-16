void inputUserProfile(student *&pHead_s)
{
	
	student *pC=pHead_s;
	ifstream fin("User.txt");
	int people;
	fin>>people;
	for(int a=1;a<=people;a++)
{
	
	fin>>pC->userName;
    fin>>pC->passWord;
    fin>>pC->firstName;
    fin>>pC->lastName;
    fin>>pC->gender;
    fin>>pC->birth;
    fin>>pC->social_ID;

    if(a==people){
		pC->pNext=NULL;
		break;
	}
    pC->pNext=new student;
    pC=pC->pNext;
}

}
