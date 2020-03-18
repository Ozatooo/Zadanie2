#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;
		string napis;
class zamiana{
       ifstream plik1;
       ofstream plik2;

  public:
        zamiana();
        ~zamiana();
        
};


bool pan(string s){

int back = s.length()-1; 
        bool palindrome = true; 
        for (int i=0; i<s.length()/2 && palindrome; i++) 
                if (s[i] != s[back--]) 
                        palindrome = false;

        return palindrome;

}


zamiana::zamiana(){ 
    plik1.open("a.txt");
    plik2.open("b.txt");
    
     if(plik1.good())  
            while(!plik1.eof())  
                  {
                   getline(plik1,napis);  
                   cout<<napis;
                   cout<<endl;
                   
                    string s(napis), slowo, polacz("");
					stringstream ss(s);
					while(ss >> slowo) 
					polacz += slowo; 
					
					
                   if(pan(polacz)==1)
					{
						cout<<endl<<"palindrom"<<endl;
						plik2<<"["<<endl<<" {"<<endl<<"  string"<<":"<<napis<<","<<endl<<"  palindrom"<<":TAK"<<endl<<" }"<<endl<<"]"<<""<<endl;
					}
					else
					{
						cout<<endl<<"Nie palindrom"<<endl;
						plik2<<"["<<endl<<" {"<<endl<<"  string"<<":"<<napis<<","<<endl<<"  palindrom"<<":NIE"<<endl<<" }"<<endl<<"]"<<""<<endl;
					}
                   }
}

zamiana::~zamiana(){ 
    plik1.close();
    plik2.close();
}

int main() {
	zamiana z;


} 
