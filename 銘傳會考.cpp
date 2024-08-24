#include <iostream>
namespace _106_a1{
  using ss=std::string;
  void run(){
  	ss s, p;
  	std::cout<<"Input integer value here!!\n";
  	std::cin>>s;
  	p=ss(s.rbegin(),s.rend());
  	std::cout<<s<<"+"<<p<<"="<<stoi(s)+stoi(p)<<std::endl;
  }
}
#include <iostream>
namespace _106_a2{
  int gcd(int a,int b){
  	  if(b!=0)return gcd(b,a%b);
	  return a;	
  }
  void run(){
	int a, b, g;
	std::cout<<"Input two integer a and b!\n";
	std::cin>>a>>b;
	g=gcd(a,b);
	printf("%d %d\n",a/g,b/g);	
  }  	
}
#include <iostream>
#include <deque>
namespace _106_a3{
  void run(){
  	int n;
  	std::deque<int> dq;
  	std::cout<<"Input multi integer and input 0 end\n";
  	while(std::cin>>n,n){
  	  dq.push_front(n);	
	}
	for(auto it:dq){
	  std::cout<<it<<" ";	
	}
	std::cout<<std::endl;
  }	
}
#include <iostream>
#include <cctype>
namespace _106_a4{
  void run(){
  	char c;
  	std::cout<<"input a string !\n";
  	while(std::cin>>c){
  	  if(isupper(c))c=tolower(c);
	  else if(islower(c))c=toupper(c);
	  std::cout<<c;		
	}
	std::cout<<std::endl;
  }
}
#include <iostream>
#include <cmath>
namespace _106_a5{
  int MYPOWER(int a, int b){
  	return pow(a,b);
  }
  void run(){
  	int a, b;
  	std::cout<<"Input two value a, b to get a pow(b)\n";
  	std::cin>>a>>b;
  	printf("[%d]\n",MYPOWER(a,b));
  }
}
#include <iostream>
namespace _106_a6{
  void run(){
  	int n, s=0;
  	std::cout<<"Input a integer and output one series 1~n ,(n-1)*n .\n";
  	std::cin>>n;
  	for(int i=1;i<=n;i++){
  	  s+=(i-1)*i;	
	}
	std::cout<<s<<std::endl;
  }	
}
#include <iostream>
namespace _106_a7{
  void run(){
  	std::string s;
  	std::cin>>s;
  	std::cout<<(s==std::string(s.rbegin(),s.rend())?"YES\n":"NO\n");
  }	
}
#include <iostream>
namespace _106_a8{
  int f(int n){
  	return n>0?n:-n;
  }	
  void run(){
  	int n;
  	std::cin>>n;
  	printf("[%d]\n",f(n));
  }	
}
#include <iostream>
namespace _106_a9{
  using ss=std::string;
  void run(){
  	ss s;
  	std::cin>>s;
  	std::cout<<ss(s.rbegin(),s.rend())<<std::endl;
  }	
}
#include <iostream>
namespace _106_a10{
  void run(){
  	int t, a;
  	std::cin>>t;
  	while(t--){
  	  std::cin>>a;
  	  std::cout<<a*a<<",";
	}
	std::cout<<std::endl;
  }
}
#include <iostream>
#include <cmath>
namespace _106_a11{
  using ss=std::string;
  void run(){
  	ss s, p;
  	std::cin>>s;
  	p=ss(s.rbegin(),s.rend());
  	int ans=0;
  	for(int i=0;i<p.size();i++){
  	  ans+=(p[i]-'0')*pow(2,i);	
	}
	std::cout<<ans<<std::endl;
  }	
}
#include <iostream>
#include <map>
namespace _106_a12{
  void run(){
	int n;
  	std::map<int,int> mp;
  	while(std::cin>>n,n){
  		mp[n]++;
	}
	std::cin>>n;
	std::cout<<mp[n]<<std::endl;
  }
}
#include <iostream>
namespace _106_b1{
  void run(){
  	int n;
  	std::cin>>n;
  	printf("%d %d\n",n/7,n%7);
  }	
}
#include <iostream>
namespace _106_b2{
  void run(){
  	int n;
  	std::cin>>n;
  	printf("%d=50*%d+5*%d+1%d\n",n,n/50,(n%50)/5,(n%50)%5);
  }	
}
#include <iostream>
namespace _106_b3{
  void run(){
  	int ans=0, n, t;
  	std::cin>>t;
  	while(t--){
  	  std::cin>>n;
	  ans+=n;		
	}
	std::cout<<ans<<std::endl;
  }	
}
#include <iostream>
namespace _106_b5{
  void run(){
  	int n, s=0;
  	std::cin>>n;
  	for(int i=1;i<=n;i++)
  	  if(n%i==0)s++;
  	std::cout<<s<<std::endl;
  }
}
#include <iostream>
namespace _106_b6{
  void run(){
    
  }	
}
#include <iostream>
#include <map>
#include <string>
#include <functional>
using ss=std::string;
using sf=std::function<void()>;
std::map<ss,sf> mp_quiz;
int main()
{ 
  ss s;
  std::cout<<"Input [quiz_name] to run code or [0] end that.\n";
  
  mp_quiz["106_a1"] = _106_a1::run;
  mp_quiz["106_a2"] = _106_a2::run;
  mp_quiz["106_a3"] = _106_a3::run;
  mp_quiz["106_a4"] = _106_a4::run;
  mp_quiz["106_a5"] = _106_a5::run;
  mp_quiz["106_a6"] = _106_a6::run;
  mp_quiz["106_a7"] = _106_a7::run;
  mp_quiz["106_a8"] = _106_a8::run;
  mp_quiz["106_a9"] = _106_a9::run;
  mp_quiz["106_a10"] = _106_a10::run;
  mp_quiz["106_a11"] = _106_a11::run;
  mp_quiz["106_a12"] = _106_a12::run;
  mp_quiz["106_b1"] = _106_b1::run;
  mp_quiz["106_b2"] = _106_b2::run;
  mp_quiz["106_b3"] = _106_b3::run;
  mp_quiz["106_b5"] = _106_b5::run;
  mp_quiz["106_b6"] = _106_b6::run;

  while(std::cin>>s){
   if(s=="0"){std::cout<<"Ok, that's has ended!!";break;}
   //if(s=="_106_a1")_106_a1::run();
   std::map<ss,sf>::iterator it=mp_quiz.find(s);
   if(it!=mp_quiz.end()){
   	 it->second();
   }else std::cout<<"Invalid quiz name. Please try again.\n";
   /*std::cin>>p;
   while(std::cin>>p,p=="reset"){
    s::run();
   }*/ 
   std::cout<<"press [reset] restart that quiz or [orther] continue \n";
   ss p;
   while(std::cin>>p,p=="reset"){
   	 it->second();
   	 std::cout<<std::endl;
   }
   std::cout<<"Input [quiz_name] to run code or [0] end that.\n";
  }
  return 0;
}