#include <iostream>
#include <fstream>
#include <string>

/*
To edit text
*/

using namespace std;

int main()
{
    cout<<"Startup\n"<<endl;
    cout<<"Will add a \" before and after every line, and also an \\n char\n\n";

    //get filename
    cout<<"Enter name of file to load: ";
    string user_input_string;
    cin>>user_input_string;
    cout<<endl;

    //read textfile
    string filename=user_input_string;
    ifstream ifs_file( filename.c_str() );
    if(ifs_file==0)
    {
        cout<<"ERROR: File not found: "<<filename<<endl;
        return 1;
    }
    //create output file
    ofstream ofs_file("OUTPUT.txt");

    string line;
    while( getline(ifs_file,line) )
    {
        //place " sign in beginning and end of file
        string new_line("\"");
        new_line.append(line);
        //new_line.append("\"");
        new_line.append("\\n\"");//add newline?

        //print to file
        ofs_file<<new_line<<endl;
    }

    cout<<"Done\n";
    return 0;
}
