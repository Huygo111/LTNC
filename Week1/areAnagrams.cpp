#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

void xoa_ky_tu(string a, int vi_tri, int do_dai){
	for (int i=vi_tri; i<do_dai; i++){
		a[i] = a[i+1];
	}
	
}

bool areAnagrams(string str1, string str2){
	int do_dai1, do_dai2;
	do_dai1 = str1.length();
	do_dai2 = str2.length();
//	cout << do_dai2 << endl;
	
//	if (do_dai1 != do_dai2) return false;
	
	int tong=0;
	for (int i=0; i < do_dai1; i++){
		if (str1[i]==' '){
			continue;
		}
		
		for (int j=0; j < str2.length() ; j++){
			if (str2[i]==' '){
			continue;
		}
			if (str1[i]==str2[j] || (int)(str1[i]-str2[j]) == 32 || (int)(str1[i]-str2[j]) == -32){
//				xoa_ky_tu(str1, i, str1.length());
				xoa_ky_tu(str2, j, str2.length());
				
				break;
			}
			else return false; 
		}	
	}
//	cout << tong;
//	if (tong==do_dai2)  
	return true;

}

int main (){
	string str1, str2;
	getline(cin >> ws, str1);
	getline(cin >> ws, str2);
	cout << boolalpha << areAnagrams(str1, str2);
	
	

	return 0;
}

//int main (){
//	string a;
//	cin >> a;
//	int do_dai=a.length();
//	xoa_ky_tu(a, 2, do_dai);
//	
//}
