#include <iostream>
#include <thread>
#include <chrono>

void Pause(int sec){
    std::this_thread::sleep_for(std::chrono::seconds(sec));
    std::cout << sec<< " 초 대기" <<std::endl;
}

int main(){
    std::thread sleep1(Pause, 3);
    std::thread sleep2(Pause, 4);
    std::thread sleep3(Pause, 5);

    sleep1.detach();
    sleep2.detach();
    sleep3.detach();

    getchar();

    return 0;
}