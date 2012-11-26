
#include <LCUI_Build.h> /* 包含LCUI的头文件 */
#include LC_LCUI_H 
#include LC_WIDGET_H 
#include LC_WINDOW_H 
#include LC_GRAPH_H
#include LC_RES_H
#include <unistd.h>
 
int main(int argc, char*argv[]) 
{
        LCUI_Init(argc, argv);
        LCUI_Widget *window, *scrollbar; 
        
        window = Create_Widget("window");
        scrollbar = Create_Widget("scrollbar");
        
        /* 设定窗口标题的文本 */
        Set_Window_Title_Text(window, "测试滚动条"); 
        /* 改变窗口的尺寸 */
        window->resize(window, Size(320, 240));
        Resize_Widget( scrollbar, Size(20, 100) );
        ScrollBar_Set_MaxSize( scrollbar, 400 );
        Set_Widget_Align( scrollbar, ALIGN_MIDDLE_CENTER, Pos(0,0) );
        /* 将窗口客户区作为label部件的容器添加进去 */
        Window_Client_Area_Add(window, scrollbar); 
        /* 显示部件 */
        scrollbar->show(scrollbar);
        window->show(window); 
        return LCUI_Main(); /* 进入主循环 */
}
