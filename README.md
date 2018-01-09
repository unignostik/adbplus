# adbplus
adbplus is an ongoing project of mine aimed to provide a number of simplifications and extensions to Android ADB 

### Progress

#### initial build
1. Semi-batch install apps with one command
2. use adb push and adb pull with spaces in your directories and file names


### Installation
1. Download 'adbplus' executable
2. Place in PATH, just as you did setting up adb
3. Enjoy

### Usage
<b>Semi-batch install</b>

Applications should be seperated by commas with the last package followed by a period:

<code>adbplus install example1.apk, example2.apk, example4.apk.</code>

<b>Push and Pull</b>

Use as normal adb push and pull, just don't worry about the space names, adbplus got you

<code>adbplus push /Users/Example Folder/example file.txt</code>

<code>adbplus pull Example Folder/example file.txt /Users/Example Folder/</code>
