# adbplus
adbplus is an ongoing project of mine aimed to provide a number of simplifications and extensions to Android ADB 

### Version 1.0

1. ADB Push: No file directory parameter, just list file in current directory to push
2. ADB Pull: No file destination parameter, file will be placed in current directory
3. ADB Install: Install given .apk in current directory without providing path
4. Flashing Recovery Images: Flash given recovery image in current directory with a single command
5. Flashing ROMs: Load ROM, wipe device, and flash ROM with a single command

### Installation
1. Download adbplus executable from repo
2. Drag and drop executable in folder with adb (recommended)

### Usage

from current directory:

adbplus push
  
   <code> adbplus push example.file sdcard/folder </code>
   
adbplus pull
  
   <code> adbplus pull sdcard/folder/exmaple.file </code>
   
adbplus install

<code> adbplus install example.apk </code>

adbplus recoveryflash

<code> adbplus recoveryflash exampleRecovery.img </code>

adbplus romflash

<code> adbplus romflash exampleROM.zip </code>
