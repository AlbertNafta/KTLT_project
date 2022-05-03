void outputClass(classes *&pHead_c)
{
fstream fout;
  
    // opens an existing csv file or creates a new file.
    fout.open("Class.CSV", ios::out );

  	
  	classes *pC=pHead_c;
    // Read the input
    while(pC!=NULL) 
	{
		if(pC!=pHead_c)fout<<endl;
		
        fout <<pC->className<<","
			<<pC->number<<",";
		for(int a=0;a<pC->number;a++)
		{
			fout<<pC->student[a];
			if(a!=pC->number-1)
			fout<<",";
		}
	pC=pC->pDoor;
	}
		
		
    
}
