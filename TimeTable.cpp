void viewTime(timeTable &time,courses *&head){
	courses *pc=head;
	txtColor(7);
	gotoxny(6,0);
	cout<<"Monday |";
	gotoxny(16,0);
	cout<<"Tuesday |";
	gotoxny(26,0);
	cout<<"Wednesday|";
	gotoxny(36,0);
	cout<<"Thursday |";
	gotoxny(46,0);
	cout<<"Friday |";
	gotoxny(56,0);
	cout<<"Saturday |";
	gotoxny(66,0);
	cout<<"Sunday ";
	gotoxny(0,2);
	cout<<"S1 |";
	gotoxny(0,4);
	cout<<"S2 |";
	gotoxny(0,6);
	cout<<"S3 |";
	gotoxny(0,8);
	cout<<"S4 |";
		for(int x=0;x<4;x++) 
		{
			for(int z=0;z<7;z++)
			{
				gotoxny(6+10*z,2*x+2);
				if(time.week[x][z]!=0)
				{
					pc=head;
					while(pc!=NULL)
					{
						if(pc->ID==time.week[x][z])break;
						pc=pc->jump;
					}
					txtColor(11);
					cout<<pc->name<<" ";
				}
				else {
				txtColor(7);
				cout<<"0";
				}
			}
			cout<<endl;
		}
}
