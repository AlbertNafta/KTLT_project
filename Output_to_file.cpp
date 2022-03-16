void OutputUser(student *&pHead_s)
{
	student *pC2 = pHead_s;
	student *pLen = pHead_s;
	int lenght=0;
	ofstream ofs("User.txt");
	while(pLen!=NULL)//lenght ?
	{
	
		lenght++;
		pLen=pLen->pNext;
	}
	ofs<<lenght<<endl;
    while(pC2!=NULL) 
	{
		ofs << pC2->userName<<endl;
		ofs << pC2->passWord<<endl;
		ofs << pC2->firstName<<endl;
		ofs << pC2->lastName<<endl;
		ofs << pC2->gender<<endl;
		ofs << pC2->birth<<endl;
		ofs << pC2->social_ID<<endl;

			
		pC2=pC2->pNext;
		
	}
	ofs.close();
}

void OutputStaff(staff *&pHead_t)
{
	staff *pC2 = pHead_t;
	staff *pLen = pHead_t;
	int lenght=0;
	ofstream ofs("Teacher.txt");
	while(pLen!=NULL)//lenght ?
	{
	
		lenght++;
		pLen=pLen->pNext;
	}
	ofs<<lenght<<endl;
    while(pC2!=NULL) 
	{
		ofs << pC2->userName<<endl;
		ofs << pC2->passWord<<endl;
		ofs << pC2->name<<endl;
		ofs << pC2->age<<endl;
		ofs << pC2->majors<<endl;

			
		pC2=pC2->pNext;
		
	} 
	ofs.close();
}
