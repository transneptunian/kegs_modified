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

const char rcsid_protos_mac_h[] = "@(#)$KmKId: protos_macdriver.h,v 1.12 2019-12-16 02:02:53+00 kentd Exp $";

/* END_HDR */

/* macdriver.c */
pascal OSStatus quit_event_handler(EventHandlerCallRef call_ref, EventRef event, void *ignore);
void show_simple_alert(char *str1, char *str2, char *str3, int num);
void x_dialog_create_kegs_conf(const char *str);
int x_show_alert(int is_fatal, const char *str);
pascal OSStatus my_cmd_handler(EventHandlerCallRef handlerRef, EventRef event, void *userdata);
void update_window(void);
void show_event(UInt32 event_class, UInt32 event_kind, int handled);
pascal OSStatus my_win_handler(EventHandlerCallRef handlerRef, EventRef event, void *userdata);
pascal OSStatus dummy_event_handler(EventHandlerCallRef call_ref, EventRef in_event, void *ignore);
void mac_update_modifiers(word32 state);
void mac_warp_mouse(void);
void check_input_events(void);
void temp_run_application_event_loop(void);
int main(int argc, char *argv[]);
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
void x_full_screen(int do_full);
void update_main_window_size(void);

