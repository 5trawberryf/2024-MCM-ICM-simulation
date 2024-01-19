#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;
struct Point {
    double x;
    double y;

    // ���캯��
    Point(double x_val, double y_val) : x(x_val), y(y_val) {}
};

struct Edge {
    int start;
    int end;
    double weight;  // �ߵ�Ȩ�أ����Ը�����Ҫ������������

    // ���캯��
    Edge(int start_point, int end_point, double weight_val)
        : start(start_point), end(end_point), weight(weight_val) {}
};