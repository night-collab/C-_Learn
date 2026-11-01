#include <iostream>
struct Entity{
    static int x, y;

    static void Print(){
        std::cout << x << "," << y << std::endl;
    }
};

int Entity::x;
int Entity::y;
int main(){
    Entity e;
    Entity::x = 2;
    Entity::y = 3;

    Entity e1;
    Entity::x = 5;
    Entity::y = 8;
    Entity::Print();
    Entity::Print();
}

// 静态就是指和具体的实例无关，它被所有实例共享，用实例调用静态变量或方法是没有意义的，静态变量或方法属于类本身
// 静态方法不能访问非静态变量