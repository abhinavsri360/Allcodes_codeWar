#include<bits/stdc++.h>

using namespace std;
class Box
{
    private:
        int l,b,h;
    public:
        Box()
        {
            l=0; b=0; h=0;
        }
        Box(int le,int br,int he)
        {
            l=le; b=br; h=he;
        }
        Box(const Box& B)
        {
            l=B.l; b=B.b; h=B.h;
        }
        int getLength()
            {return l;}
        int getBreadth()
            {return b;}
        int getHeight()
            {return h;}
        long long CalculateVolume()
            {return l*b*h;}
        bool operator<(Box& B)
        {
            Box C;
            C.l=this->l;
            C.b=this->b;
            C.h=this->h;
            if(this->l<B.l||(this->b < B.b && this->l==B.l)||(this->h < B.h && this->b==B.b && this->l==B.l))
                return true;
            else 
                return false;
        }
        friend ostream& operator<<(ostream& out,const Box &B)
        {
            out<<B.l<<" ";
            out<<B.b<<" ";
            out<<B.h;
            return out;
        }
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}