//// �� Ǯ��
//// case ������ �����ϰ� ǰ
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<int> absolutes, vector<bool> signs) {
//    int answer = 0;
//
//	for (int i = 0; i < absolutes.size(); i++)
//	{
//		switch (signs[i])
//		{
//		case true:
//			answer += absolutes[i];
//			break;
//		case false:
//			answer -= absolutes[i];
//			break;
//		}
//	}
//
//    return answer;
//}
//
//// �ٸ� ��� Ǯ��
//// �̷������� �ݺ��� ���� �� ����
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<int> absolutes, vector<bool> signs) {
//	int answer = 0;
//	for (int i = 0; i < signs.size(); i++) {
//		if (!signs[i]) absolutes[i] *= -1;
//		answer += absolutes[i];
//	}
//	return answer;
//}