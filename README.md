# adbplus
adbplus is an ongoing project of mine aimed to provide a number of simplifications/extensions to Android adb 

### Installation
1. Download adbplus executable from repo
2. Add executable to gloabl path (same as with adb setup)

### Version 0.1

Added simplifications: 
1. ADB Push: No file directory parameter, just list file in current directory to push
2. ADB Pull: No file destination parameter, file will be placed in current directory
3. ADB Install: Install given .apk in current directory without providing path
4. Flashing Recovery Images: Flash given recovery image in current directory with a single command
