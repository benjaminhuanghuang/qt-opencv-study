## Setup Qt + OpenCV 

- Install OpenCV on Mac
https://docs.opencv.org/master/d0/db2/tutorial_macos_install.html

```
  brew install opencv


  $ python
  >>> import cv2
  >>> cv2.__version__
```

- 

- Qt project file
```
  INCLUDEPATH += /usr/local/include/opencv4
  LIBS += -L/usr/local/lib -lopencv_core -lopencv_imgcodecs -lopencv_highgui
```



