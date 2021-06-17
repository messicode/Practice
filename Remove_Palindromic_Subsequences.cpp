
bool pln(string s)
{	
	string r=s;reverse(s.begin(),s.end());
	if(r.compare(s)==0) return true; 
	else return false;
}

int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.strlen();i++)
	{
		for(int j=s.strlen()-1;j>i;j++)
		{
			
		}
	}

}