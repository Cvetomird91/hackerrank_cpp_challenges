#include<bits/stdc++.h>

using namespace std;

class Box {
	public:
		Box() : l(0), b(0), h(0) {}
		Box(int length, int breadth, int height) : l(length), b(breadth), h(height) {}
		Box(const Box &obj) {
			this->l = obj.l;
			this->b = obj.b;
			this->h = obj.h;
		}

		int getLength() { return this->l; } // Return box's length
		int getBreadth() { return this->b; }// Return box's breadth
		int getHeight() { return this->h; }  //Return box's height

		bool operator<(const Box& box) {
			if (this->l < box.l) {return true;}
			if (this->b < box.b && this->l == box.l) { return true;}
			if (this->h < box. h && this->b==box.b && this->l == box.l) { return true; }
			return false;
		}

		long long CalculateVolume() {
			return (long long)this->l * this->b * this->h;
		}

		friend ostream& operator<<(ostream& s, Box &box);

	private:
		int l, b, h;
};

ostream& operator<<(ostream& s, Box &box) {
	s << box.getLength() << ' ' << box.getBreadth() << ' ' << box.getHeight();
	return s;
}

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

/*
int main() {
	//check2();
	return 0;
}
*/

int main() {
	//Box b(1, 2, 3);
	// Box a(2, 3, 4);
	check2();
	Box c;

	//cout << c.CalculateVolume() << endl;

}

//ostream &operator<<( ostream &output, const Distance &D )

/*

   cout << "Copy constructor allocating ptr." << endl;
   this->ptr = new int;
   *ptr = *obj.ptr; // copy the value

*/

/*

Input:

6
2 1039 3749 8473
4
3 1456 3836 283
3 729 3749 272
2 4839 283 273
4

1039 3749 8473
33004122803
Greater
Lesser
4839 283 273
373856301

*/