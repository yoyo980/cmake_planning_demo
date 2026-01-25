#include "show_result.h"
#include <graphics.h>


void ShowResult::drawResult() {
    initgraph(1000, 1000);
    // initgraph(640, 480);
    setbkcolor(WHITE);
    cleardevice();

    std::cout<<"draw circle"<<std::endl;
    setlinecolor(BLACK);
    setlinestyle(PS_SOLID, 4);
    circle(500, 500, 200);
    circle(500, 500, 400);

    std::cout << "按任意键关闭窗口..." << std::endl;

    system("pause");
    closegraph();
}