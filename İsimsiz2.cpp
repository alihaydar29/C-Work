 #include <iostream>
 using namespace std;
 class A {
 protected:	
 	int u,v;
 	public:
 		A(int _u,int _v) : u(_u), v(_v) {}
 		
		 };
		 class B{
		 	protected:
		 		int y;
		 		public:
		 			B(int _y) : y(_y) {}
		 			
					 
		 };
		 class C :A,B{
		 	public:
		 		C(int u, int v,int y) :A(u,v), B(y) {}
		 		void yaz(){
		 			cout<<"u:"<<u<<endl<<"v:"<<endl<<"y:";
				 } 
		 };
		 int main()
		 {
		 	C c(5,8,9);
		 	c.yaz();
		 	return 0;
		 }
		 
 
