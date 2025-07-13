import cv2
import numpy as np
detector = cv2.CascadeClassifier('D:\\learning\\picture opencv\\face_detect.xml')  
recog = cv2.face.LBPHFaceRecognizer_create ()     
faces = [] 
ids = [] 
 
for i in range(1,21):
    img = cv2.imread('D:\\learning\\picture opencv\\use picture\\{i}.jpg')  
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY) 
    img_np = np.array(gray,'uint8')
    face = detector.detectMultiScale(gray) 
    for(x,y,w,h) in face:
        faces.append(img_np[y:y+h,x:x+w]) 
        ids.append(1)      
for i in range(1,21):
    img = cv2.imread('D:\\learning\\picture opencv\\han picture\\images({i}).jpg') 
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY) 
    img_np = np.array(gray,'uint8')  
    face = detector.detectMultiScale(gray)  
    for(x,y,w,h) in face:
        faces.append(img_np[y:y+h,x:x+w])  
        ids.append(2)

print('training...')  
recog.train(faces,np.array(ids)) 
recog.save('face.yml')    
print('ok!')
