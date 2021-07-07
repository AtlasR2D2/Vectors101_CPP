#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector <char> vowels;
	vowels.push_back('a');
	vowels.insert(vowels.begin()+1,'e');	//Place 'e' as element after 1st element
	vowels.push_back('i');	//Place 'i' as last element
	vowels.insert(vowels.end(),'o');	//Place 'o' as last element
	vowels.insert(vowels.end(),'u');	//Place 'u' as last element
	cout << "Printing vowels..." << endl;
	for (vector<char>::iterator it=vowels.begin() ; it != vowels.end() ; ++it) {
		cout << "vowel: " << *it << endl;	//Dereference iterator
	}
	cout << "There are " << vowels.size() << " vowels." << endl;
	
	return 0;
}