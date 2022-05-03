void viewClass(classes *&pHead_c,student *&pHead_s)
{

						classes *pc=pHead_c;
						student *ps=pHead_s;
						while(pc!=NULL)
						{
							cout<<"Name: "<<pc->className<<endl;
							cout<<"   Number of student: "<<pc->number<<endl;
							for(int z=0;z<pc->number;z++)
							{
								cout<<"      "<<z+1<<".|";
								ps=pHead_s;
								while(ps!=NULL)
								{
									if(ps->social_ID==pc->student[z])
									{
										break;
									}
									ps=ps->pNext;
								}
								cout<<pc->student[z]<<" | "<<ps->lastName<<endl;
							}
							pc=pc->pDoor;
							cout<<endl;
						}
						cout<<"Press any key to back..."<<endl;
						_getch();
}
