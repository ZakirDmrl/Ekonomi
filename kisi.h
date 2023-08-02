#ifndef KISI_H
#define KISI_H
class Kisi{
private:
	int para;
public:
	Kisi(int para = 1000){
		setPara(para);
	}
	~Kisi(){}
	int getPara(){return para;}
	void setPara(int para){
		this->para = para;
	}
};





#endif


