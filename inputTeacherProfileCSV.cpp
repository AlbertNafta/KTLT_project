void inputTeacherProfile(staff *&pHead_t)
{
	staff *pC = pHead_t;
	FILE *file = fopen("Teacher.CSV", "r");
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
			pC->name=v;
			v = strtok(NULL, ",");
			pC->age=atoi(v);
			v = strtok(NULL, ",");
			pC->majors=v;
			v = strtok(NULL, ",");
		}
		pC->pNext=new staff;
		pC=pC->pNext;
	}
	pC=pHead_t;
	while(pC->pNext->pNext!=NULL)
	{
		pC=pC->pNext;
	}
	staff *pDel=pC->pNext;
	pC->pNext=NULL;
	delete pDel;
	fclose(file);
}
