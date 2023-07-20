#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

struct Data
{
	string sName;
	short nAgentCount = 0;
	string sOtherNames;
};

int main()
{
	Data data;

	getline(cin, data.sName);

	string snAgentCount;
	getline(cin, snAgentCount);

	short tmpValue = stoi(snAgentCount);
	data.nAgentCount = (tmpValue < 0) ? 0 : tmpValue;

	getline(cin, data.sOtherNames);

	short time = 20;
	vector<string> names{ data.sName };

	stringstream sOtherNames(data.sOtherNames);
	string sName;
	while (sOtherNames >> sName)
	{
		names.push_back(sName);
	}

	sort(names.begin(), names.end());

	short i = 1;
	for (vector<string>::const_iterator itName{ names.cbegin() }; itName != names.cend(); ++itName, ++i)
	{
		if (i > data.nAgentCount)
		{
			time += 20;
			i = 1;
		}

		if (*itName == data.sName) break;
	}

	cout << time << endl;

	return 0;
}