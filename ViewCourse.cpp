void viewCourses(courses *&head,student *&pHead_s)
{
	
						courses *pc=head;
						student *ps=pHead_s;
						while(pc!=NULL)
						{
							cout<<"Name: "<<pc->name<<endl;
							cout<<"Course ID: "<<pc->ID<<endl;
							cout<<"Number of credits: "<<pc->credits<<endl;
							cout<<"Taught by: "<<pc->teacher<<endl<<endl;
							cout<<"   Number of student: "<<pc->numberStu<<endl;
							for(int z=0;z<pc->numberStu;z++)
							{
								cout<<"      "<<z+1<<".|";
								ps=pHead_s;
								while(ps!=NULL)
								{
									if(ps->social_ID==pc->StuID[z])
									{
										break;
									}
									ps=ps->pNext;
								}
								cout<<pc->StuID[z]<<" | "<<ps->lastName<<endl;
							}
							pc=pc->jump;
							cout<<"_____________________________"<<endl;
						}
						cout<<"Press any key to back..."<<endl;
						_getch();
}
