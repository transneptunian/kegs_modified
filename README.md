# KEGS 1.16 has now offically added a toggle to hide the status screen. Only took 20 years! My work here is finished.


# kegs_modified
Kent's Emulated GS with changes to remove status window updates. macOS is the targetted platform.

Visit http://kegs.sourceforge.net/ for the original author and code maintainer

This modified version is an attempt to clean up the main UI 

## Changes
remove all status text in the box below the main GSOS window printing

remove status box completly

add missing icon to application

## Example
![original](https://user-images.githubusercontent.com/46327171/130355702-074c3b8a-b900-420d-8688-adbce44c59fc.png)

![cropped](https://user-images.githubusercontent.com/46327171/130364348-b616c1e7-acbd-4786-8588-c75ce2b435db.png)


## Actual Changes

These are changes to the source to remove the bottom status.

video.c : Remove everything between the { } of this function
>video_update_status_line(int line, const char *string)

video.c : Remove this math statement from the end of this call + 7*16 + 16
>video_init_kimage(&g_mainwin_kimage, X_A2_WINDOW_WIDTH, X_A2_WINDOW_HEIGHT + 7*16 + 16);

## A note about compiling

Depending on your OS version, the PERL statement in Makefile may fail. For my 32bit iMac, the line remains as the original. For my 64 bit system, 'swift' becomes 'swift-5.0'

>PERL cp_kegs_libs kegsmac /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/swift

or

>PERL cp_kegs_libs kegsmac /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/swift-5.0
