#include<iostream>
#include <windows.h>
 using namespace std;
HWND hwnd, simple_button, icon_button;
HINSTANCE hInstance;
HICON hIcon1; 
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
 
int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance,
			LPSTR lpCmdLine, int nCmdShow )
{

  MSG  msg ;    
  WNDCLASS wc = {0};
  wc.lpszClassName = TEXT( "Static Control" );
  wc.hInstance     = hInstance ;
  wc.hbrBackground = GetSysColorBrush(COLOR_3DFACE);
  wc.lpfnWndProc   = WndProc ;
  wc.hCursor       = LoadCursor(0,IDC_ARROW);
  wc.hIcon          = LoadIcon (NULL, IDI_APPLICATION);
  wc.hCursor = LoadCursor (NULL, IDC_ARROW);
 

 hwnd = CreateWindow( wc.lpszClassName, TEXT("Win32 Basic Window "),
                WS_OVERLAPPEDWINDOW,
                100, 100, 330, 270, 0, 0, hInstance, 0);  
 
 ShowWindow(hwnd, nCmdShow);
 UpdateWindow(hwnd);
 
 
  while( GetMessage(&msg, NULL, 0, 0))
  {
    TranslateMessage(&msg);
    DispatchMessage(&msg);
  }
  return (int) msg.wParam;
}
 

LRESULT CALLBACK WndProc( HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam )
{
 
  switch(msg)
   {
   case WM_CREATE:
	    {
        button1 =   CreateWindow(TEXT("button"), TEXT("Button"),    
		             WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,
		             80, 10, 100, 50,        
		             hwnd, (HMENU) buttonID, NULL, NULL);
       
        hIcon1 = LoadIcon (NULL, IDI_WARNING);
        SendMessage(icon_button,BM_SETIMAGE,IMAGE_ICON,(LPARAM)hIcon1);
 
	    break;
	}
 
    case WM_DESTROY:
       {
        PostQuitMessage(0);
        return 0;
       }
 
   }
 
 return DefWindowProc(hwnd, msg, wParam, lParam);
}




