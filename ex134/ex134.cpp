#include <iostream>
#include <thread>
#include <chrono>

void Pause(int sec){
    std::this_thread::sleep_for(std::chrono::seconds(sec));
}


int main(){
    std::thread sleep1(Pause, 3);
    std::thread sleep2(Pause, 4);
    std::thread sleep3(Pause, 5);
    
    sleep1.join();
    std::cout << "3초 대기" << std::endl;

    sleep2.join();
    std::cout << "4초 대기" << std::endl;

    sleep3.join();
    std::cout << "5초 대기" << std::endl;

    return 0;

}