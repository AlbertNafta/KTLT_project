void inputUserProfile(student *&pHead_s) // user = student
{
	student *pC = pHead_s;
	FILE *file = fopen("User.CSV", "r");
	char content[1024];
	while(fgets(content, 1024, file))
	{
		char *v = strtok(content, ",");
		while(v)
		{
			pC->userName=v;
			v = strtok(NULL, ",");
			pC->passWord=v;
			v = strtok(NULL, ",");
			pC->lastName=v;
			v = strtok(NULL, ",");
			pC->firstName=v;
			v = strtok(NULL, ",");
			pC->gender=v;
			v = strtok(NULL, ",");
			pC->birth;
			v = strtok(NULL, ",");
			pC->social_ID=atoi(v);
			v = strtok(NULL, ",");
		}

		pC->pNext=new student;
		pC=pC->pNext;
	}
	pC=pHead_s;
	while(pC->pNext->pNext!=NULL)
	{
		pC=pC->pNext;
	}
	student *pDel=pC->pNext;
	pC->pNext=NULL;
	delete pDel;


	fclose(file);

}
