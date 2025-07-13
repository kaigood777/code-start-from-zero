import cv2

#img=cv2.imread('D:\\learning\\picture opencv\\0101.jpg')
#img=cv2.resize(img,(0,0),fx=0.25,fy=0.25)
#gray=cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
faceCascade=cv2.CascadeClassifier('D:\\learning\\pictureopencv\\face_detect.xml')     


 
video_capture = cv2.VideoCapture(1)

while True:
  ret, frame = video_capture.read()
  if ret:
   gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
   faceRect=faceCascade.detectMultiScale(gray,1.025,9)
   for (x,y,w,h) in faceRect:
        cv2.rectangle(frame,(x,y),(x+w,y+h),(0,255,0),2)
        cv2.imshow('img', frame)
        if cv2.waitKey(10)==ord("q"):
           break
  else:
      break
     

