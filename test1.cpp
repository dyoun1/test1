#include <iostream>
using namespace std;
//#define TEST_MODE

int mult2(int, int);

int main(){

	#ifdef TEST_MODE
    		int n=4;
   		int arr[] = {3,4,12, 5,7,35, 6,3,18, -1000000,-5,5000000};
    		cout << "begin test...\n";
    		for(int i=0; i<n; i++){
			int result = mult2(arr[i*3], arr[i*3+1]);
			if(result != arr[i*3+2])
	    			cout << "ERROR!!! in mult2!! : (  " << i << "\n";
    		}
    		cout << "end test...\n";
	#else
    		int a, b;
    		cin >> a >> b;
    		cout << mult2(a,b);
	#endif
    	cout << endl;

    	return 0;
}

int mult2(int a, int b){
    return a*b;
}
~                     
