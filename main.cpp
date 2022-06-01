#include <iostream>
#include <fstream> //для работы с файлами

using namespace std;
ifstream read; //поток для чтения из файла


void test_file()
{

    try
    {
        cout<<"An afford to open the file"<<endl;
        read.open("file.tt"); //открываю файл для ЧТЕНИЯ
        cout<<"Success!"<<endl;
    }
    catch (const ifstream::failure &show) //именно для ошибок ifstream-а
    {
        cout<<"There is an error: "<<show.what()<<endl;
        cout<<"Error code: "<<show.code()<<endl;
    }
    
    
    
}

void test_figure(int a)
{
    if (a<0)
    {
        //throw "an integer below zero";
        throw runtime_error("an integer below zero");

    }
    else{
        cout<<"a= "<<a<<endl;
    }
}

int main() {
    //read.exceptions(ifstream::badbit | ifstream::failbit);
    //test_file();
    try
    {
        test_figure(-17);
    }
    catch(const exception &ex)
    {
        cout<<"Error: "<<ex.what()<<endl;
    }


    return 0;
}
