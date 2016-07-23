ofxVLCVideoPlayer
Addon for VLC video library usage. Based on jnakanojp/ofxVLCVideoPlayer and RSATom/libvlc-sdk.

Tested on Windows 7 x86.

How to use:
1. Add include paths: libs/libvlc/include

2. Add library search paths: libs/libvlc/lib/msvc. Link libvlc.lib, libvlccore.lib.

3. Copy all contente of libs/libvls/bin to bin dir. That is VLC plugins folder(VLC\plugins) and libvlc.dll and libvlccore.dll.

4. If you are developing with Visual Studio, change project's linker optimization setting /OPT:REF to /OPT:NOREF(On default, it is set on Release build).

2016/7/23
