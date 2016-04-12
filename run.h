#include "Queue.cpp"

using namespace std;

class Run
{
	public:
		Run();
		~Run();
		string getFile();
		int getData();
		void runQueue();
	
	private:
		int numOfWindows;
		Queue<int> studentQ;
	
};