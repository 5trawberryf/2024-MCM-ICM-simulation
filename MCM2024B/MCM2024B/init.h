#pragma once
#include "base.h"

vector<Point> initvertices() {
    vector<Point> res;
    std::ifstream file("Case1-vertex.csv");
    // ���ж�ȡ CSV �ļ�
    string line;
    getline(file, line);
    while (getline(file, line)) {
        // ʹ���ַ������ָ�ÿ�е�����
        stringstream ss(line);
        vector<string> row;

        // �����ȡ���ŷָ���ֵ���洢��������
        string value;
        while (getline(ss, value, ',')) {
            row.push_back(value);
        }
        Point tmp(stod(row[1]), stod(row[2]));
        // ����ǰ����ӵ�����������
        res.push_back(tmp);
    }

    // �ر��ļ�
    file.close();
    return res;
}
vector<Edge> initedges() {
    vector<Edge> res;
    ifstream file("Case1-vertex.csv");
    string line;
    getline(file, line);
    while (getline(file, line)) {
        stringstream ss(line);
        vector<string> row;
        string value;
        while (getline(ss, value, ',')) {
            row.push_back(value);
        }
        Edge tmp(stoi(row[1]), stoi(row[2]), stod(row[0]));
        // ����ǰ����ӵ�����������
        res.push_back(tmp);
    }

    file.close();
    return res;
}