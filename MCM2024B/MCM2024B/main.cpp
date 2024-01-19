#include "base.h"
using namespace std;
int main() {
    // �� CSV �ļ�
    ifstream file("Case1-vertex.csv");

    // ����ļ��Ƿ�ɹ���
    if (!file.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    // ����һ����ά�������ڴ洢 CSV �ļ�������
    vector<vector<Point>> vertex;


    // ���ж�ȡ CSV �ļ�
    string line;
    while (getline(file, line)) {
        // ʹ���ַ������ָ�ÿ�е�����
        stringstream ss(line);
        vector<string> row;

        // �����ȡ���ŷָ���ֵ���洢��������
        string value;
        while (getline(ss, value, ',')) {
            row.push_back(value);
        }

        // ����ǰ����ӵ�����������
        data.push_back(row);
    }

    // �ر��ļ�
    file.close();

    // �����ȡ�����ݣ��ɸ���ʵ��������д���
    for (const auto& row : data) {
        for (const auto& value : row) {
            cout << value << "\t";
        }
        cout << endl;
    }

    return 0;
}