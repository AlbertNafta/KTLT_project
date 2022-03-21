void OutputStaff(staff *&pHead_t)
{
fstream fout;
  
    // opens an existing csv file or creates a new file.
    fout.open("Teacher.CSV", ios::out );

  	
  	staff *pC=pHead_t;
    // Read the input
    while(pC!=NULL) 
	{
		if(pC!=pHead_t)fout<<"";
		if(pC->pNext==NULL)fout<<endl;
        fout <<pC->userName<<","
			<<pC->passWord<<","
			<<pC->name<<","
			<<pC->age<<","
			<<pC->majors;
	pC=pC->pNext;
	}
		
		
    
}
