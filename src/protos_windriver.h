/************************************************************************/
/*			KEGS: Apple //gs Emulator			*/
/*			Copyright 2002-2019 by Kent Dickey		*/
/*									*/
/*	This code is covered by the GNU GPL v3				*/
/*	See the file COPYING.txt or https://www.gnu.org/licenses/	*/
/*	This program is provided with no warranty			*/
/*									*/
/*	The KEGS web page is kegs.sourceforge.net			*/
/*	You may contact the author at: kadickey@alumni.princeton.edu	*/
/************************************************************************/

// $KmKId: protos_windriver.h,v 1.5 2019-12-16 02:02:53+00 kentd Exp $

/* END_HDR */

/* windriver.c */
int win_update_mouse(int x, int y, int button_states, int buttons_valid);
void win_event_mouse(WPARAM wParam, LPARAM lParam);
void win_event_key(HWND hwnd, UINT raw_vk, BOOL down, int repeat, UINT flags);
void win_event_quit(HWND hwnd);
void win_event_redraw(void);
LRESULT CALLBACK win_event_handler(HWND hwnd, UINT umsg, WPARAM wParam, LPARAM lParam);
int main(int argc, char **argv);
void check_input_events(void);
void x_update_color(int col_num, int red, int green, int blue, word32 rgb);
void x_update_physical_colormap(void);
void show_xcolor_array(void);
void xdriver_end(void);
void x_get_kimage(Kimage *kimage_ptr);
void dev_video_init(void);
void x_redraw_status_lines(void);
void x_push_kimage(Kimage *kimage_ptr, int destx, int desty, int srcx, int srcy, int width, int height);
void x_push_done(void);
void x_auto_repeat_on(int must);
void x_auto_repeat_off(int must);
void x_hide_pointer(int do_hide);

