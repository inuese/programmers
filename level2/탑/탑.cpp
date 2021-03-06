#include <vector>

using namespace std;

vector<int> solution(vector<int> heights) {
	vector<int> answer;
	answer.resize(heights.size());
	for (int i = heights.size() - 1; i > 0;i--) { 
		for (int j = i; j > 0;j--) {
			if (heights[i] < heights[j-1]) {
				answer[i] = j;
				break;
			}
		}
	}
	return answer;
}