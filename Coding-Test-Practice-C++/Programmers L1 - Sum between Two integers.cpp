//#include <string>
//#include <vector>
//
//using namespace std;
//
//long long solution(int a, int b) {
//    long long answer = 0;
//
//    //answer = a + b;
//    //answer *= (abs(a - b) + 1);
//    //answer /= 2;
//
//    answer = (long long)(a + b) * (abs(a - b) + 1) / 2;
//
//    return answer;
//}
//
//// �ٸ� ��� Ǯ��
//#include <string>
//#include <vector>
//
//using namespace std;
//
//long long solution(int a, int b) {
//    return (long long)(a + b) * (abs(a - b) + 1) / 2;
//}
//
//// ��Ʈ ����
//#include <string>
//#include <vector>
//
//using namespace std;
//
//long long solution(int a, int b) {
//    long long answer = 0;
//    // XOR ��Ÿ�� ������ exclusive or
//    // XOR ������ ���ο��� ������ 3�� ���ָ� ������ ���� �ٲ� = ���� ����
//    if (a > b) a ^= b ^= a ^= b;
//    // a < b�� ����
//    // ~ ��Ʈ NOT ����
//    // ���ϸ� ���� ��� - ���� * ������ �ٽ� ����� �Ǳ� ����
//    // ���� 0 ���� a, b �ڽű����� ���� ���� ��
//
//    // -~b = 1�� ����
//    // ~-a = 1�� ��
//    // ���� ����� ��� 1���� b������ �տ��� 1���� a - 1������ ���� �� ��
//    // ������ ��� -1���� b + 1������ ���� �տ��� -1���� a������ ���� ���� �� �� - (ū ���� ���⶧���� ���� - �ݴ�� a������ ���� �տ��� �ݴ븦 �� ������ ���� �� ��)
//    // ū���� ����� ���� ���� ������ ��� 1���� b������ �տ���  -1���� a������ ���� ���� �� �� - (�׳� ���� ���� ������ ���� �� ��)
//
//    answer = (long long)b * -~b / 2 - (long long)a * ~- a / 2;
//    return answer;
//}
//
//// -~b�� +1�� ����?
//// ������ ���ؼ� ��ȣ�� �ٲ�� 1�� �۾���(����� ��� ���밪�� Ŀ��, ������ ��� ���밪�� �۾���), ��ȣ�� �ǵ��� = 1�� ������
//// ~-a�� -1�� ����?
//// -�������� ��ȣ�� �ٲ�� ~�������� ��ȣ�� �ٽ� ���ƿ��� ���� 1�۾���(�������� ����� �� �� ���밪�� �۾���, ������� ������ �� �� ���밪�� Ŀ��)
//
//// ���� ����ϴ� ���� ǥ����� 1�� ������ X 2�� ������ O
//// ���� ������ �ϸ� 1�� ������ ���� ������ 1�� ������
//// NOT �������� 1�� ������ ���ϸ� ��ȣ�� �ٲ�� 1�� �۾���