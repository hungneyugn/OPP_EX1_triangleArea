#include<stdio.h>
#include<stdint.h>
#include<math.h>
using namespace std;
class Diem
{
    private:
        int8_t toaDoX;
        int8_t toaDoY;
    public:
        int8_t getX();
        int8_t getY();
        void setDiem(int8_t x, int8_t y);
};
void Diem::setDiem(int8_t x , int8_t y ){
    toaDoX = x;
    toaDoY = y;
}
int8_t Diem::getX()
{
    return this->toaDoX;
}
int8_t Diem::getY()
{
    return this->toaDoY;
}
class khoangCach{
    private:
        Diem A;
        Diem B;
    public:
        khoangCach(Diem A, Diem B);
        void tinhKhoangcach(Diem A, Diem B);
};
khoangCach::khoangCach(Diem A, Diem B){
    this->A = A;
    this->B = B;
}
void khoangCach::tinhKhoangcach(Diem A, Diem B){
    double a;
    a = sqrt(pow((B.getX() - A.getX()),2) + pow((B.getY() - A.getY()),2));
    printf("Khoang cach la: %f\n",a);
}
class dienTich{
    private:
        Diem A;
        Diem B;
        Diem C;
    public:
        dienTich(Diem A,Diem B, Diem C);
        void tinhDienTich(Diem A, Diem B, Diem C);
};
dienTich::dienTich(Diem A,Diem B, Diem C){
    this->A = A;
    this->B = B;
    this->C = C;
}
void dienTich::tinhDienTich(Diem A, Diem B, Diem C){
    double s;
    s = (double)1/2*abs((B.getX() - A.getX())*(C.getY() - A.getY()) - (C.getX() - A.getX())*(B.getY() - A.getY()));
    printf("Dien tich: s = %.2f\n",s);
}
int main()
{
    Diem A,B,C;
    A.setDiem(4,7);
    B.setDiem(5,3);
    C.setDiem(8,4);
    khoangCach d(A,B);
    d.tinhKhoangcach(A,B);
    dienTich s(A,B,C);
    s.tinhDienTich(A,B,C);
    return 0;
}