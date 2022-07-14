


#ifndef _ALIAS_TG2_1_H
#define	_ALIAS_TG2_1_H

#ifdef	__cplusplus
extern "C" {
#endif
    


     //#define _LINUX_  //curses =>$ gcc -o game *.c  -lncurses
     //#define _LINUX1_ // standard c => gcc -o game *.c 
     #define _MSWINDOWS_ // consol api

    
    // Window 

    void _BeginWindow();
    void _EndWindow();
#ifdef _MSWINDOWS_
	void _SetColor(int color);
#endif

	void _DrawText(int x,int y,char* msg);
	void _Invalidate();

#ifdef _MSWINDOWS_
	void _InvalidateBack();
	void _DrawTextOrg(int x,int y,char* msg);
	void _DrawTextColorOrg(int x,int y,char* msg,int color);
	void _DrawTextColor(int x,int y,char* msg,int color); 
	void _BitBlt();
#endif
    extern void Draw();


    
    // Key 
    char _GetKey();

    // Time control
    long _GetTickCount();
    void _Delay(int time);

	// messagebox 
	void _MessageBox(int x,int y,int w,int h,char* msg);
#ifdef _MSWINDOWS_
	void _MessageBoxEx(int x,int y,int w,int h,char* msg);
	void _MessageBoxColor(int x,int y,int w,int h,char* msg,int color);
	void _MessageBoxExColor(int x,int y,int w,int h,char* msg,int color);
#endif

	// OS Special Functions
#ifdef _LINUX_
    void _DrawChar(int x,int y,int key);
    void _ShowCharCode();    
#endif
 
 

#ifdef	__cplusplus
}
#endif

#endif	

/*
    API History


    - double buffering ����
	- �ؽ�Ʈ �÷�(���,���ڻ�) ����Լ� ���� _DrawTextColor()
	- ��ü �ܼ��� �÷� ���� : _SetColor(0xf1)
	
*/


