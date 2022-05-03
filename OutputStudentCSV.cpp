void OutputUser(student *&pHead_s)
{
fstream fout;
  
    // opens an existing csv file or creates a new file.

  
    // opens an existing csv file or creates a new file.
    fout.open("User.CSV", ios::out );

  	
  	student *pC=pHead_s;
    // Read the input
    while(pC!=NULL) 
	{
		if(pC!=pHead_s)fout<<endl;
	
        fout <<pC->userName<<","
			<<pC->passWord<<","
			<<pC->lastName<<","
			<<pC->firstName<<","
			<<pC->gender<<","
			<<pC->birth<<","
			<<pC->social_ID;
	pC=pC->pNext;
	}
		
		
    
}
