#ifndef ROBO_CLASS_H
#define ROBO_CLASS_H
using namespace std;

class roboClass{
	public:
		char type;
		int currCost;
		float eucDist;
		float manDist;
		int localRow;
		int localCol;
		bool visited;
		roboClass();
		bool operator==(const roboClass& right);
		bool operator<(const roboClass& right);
		bool operator>(const roboClass& right);
};
#endif