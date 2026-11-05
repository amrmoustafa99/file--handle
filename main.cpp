#include <iostream>
#include <fstream>

using namespace std;

int main()
{

/*
    // read input by user
   int x;
    cin>>x;

    //wirte output
    cout << "Hello world!" << endl;

    */
/*
ofstream outFile;

outFile.open("outputFile.txt");

outFile<<"hello world"<<endl;
outFile<<100;

outFile.close();
*/

string x;
ifstream inFile;

inFile.open("outputFile.txt");
inFile>>x;
getline(inFile, x);
cout<<" the text  from file is: "<<x;

inFile.close();



    return 0;
}
