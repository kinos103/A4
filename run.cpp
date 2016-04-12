#include "run.h"
#include <fstream>
#include <iostream>
#include <stdlib.h>

using namespace std;

Run::Run()
{
	getData();
}


Run::~Run()
{
	
}

string Run::getFile()
{
	string fileName;
	cout<<"Input a file name:"<<endl;
	cin>>fileName;
	return fileName;
}

int Run::getData()
{
	string fileName = getFile();
	ifstream  dataFile;
	dataFile.open(fileName.c_str());
	
	int counter = 0; //index for file
	string line = "";
	int time=1;
	int fileTime;
	
	//implement ++time
	
	
	while(getline(dataFile,line))
		{
			if(counter==0)
			{
				numOfWindows= atoi(line.c_str()); //convert to int
				++counter;
				cout<<"AAA "<<numOfWindows<<endl;
			}
			/*else
			{
				fileTime = atoi(line.c_str()); //next time students arrive
				
				while(fileTime!=time && windows are null) //no one there
				{
					++time;
				}

				if(fileTime==time) //add students in queue
				{
					getline(dataFile,line);
					numOfStudents = atoi(line.c_str());
					for(int i=0;i<numOfStudents;++i)
					{
						//getline(dataFile,line);
						//add to queue
					}
				}
			
				//if(windows not null)//minus per time
				{
					--int in each window.
				}
				
			
				
				
				++time;
			}*/
		}
}

void Run::runQueue()
{
	//time = 0;
	//
	
	
	
	
	
	
	
	
}




