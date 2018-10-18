#!/usr/bin/env python
# -*- coding: utf-8 -*-
__Auther__ = 'L1B0'

import cv2
import numpy as np
import math 
import pywt
import pyyawt
from matplotlib import pyplot as plt

imagePath = raw_input("请输入原始灰度图像的路径：")
img = cv2.imread(imagePath,0) #读取灰度图像

def DFT_Trans():

	img_dft = cv2.dft(np.float32(img), flags=cv2.DFT_COMPLEX_OUTPUT) 
#	img_dft_shift = img_dft 
	img_dft_shift = np.fft.fftshift(img_dft) 
#	print type(img_dft_shift)
	magnitude_spectrum2 = 20 * np.log10(cv2.magnitude(img_dft_shift[:,:,0], img_dft_shift[:,:,1])) 
	plt.subplot(449),plt.imshow(img, "gray") 
	plt.title("Image"), plt.xticks([]),plt.yticks([]) 
	plt.subplot(442), plt.imshow(magnitude_spectrum2, cmap="gray") 
	plt.title("DFT image"), plt.xticks([]), plt.yticks([]) 
	
	inverse_img_dft = cv2.idft(img_dft)
	inverse_img_dft = cv2.magnitude(inverse_img_dft[:,:,0],inverse_img_dft[:,:,1])
	plt.subplot(443), plt.imshow(inverse_img_dft, cmap="gray") 
	plt.title("DFT_INVERSE image"), plt.xticks([]), plt.yticks([]) 
	
	return 

def DCT_Trans():

	img_dct = cv2.dct(np.float32(img))
#	img_dct_shift = img_dct 
	img_dct_shift = np.fft.fftshift(img_dct)
#	img_dct_log = abs(np.log(img_dct_shift))

	plt.subplot(446), plt.imshow(img_dct_shift, cmap="gray") 
	plt.title("DCT image"), plt.xticks([]), plt.yticks([]) 

	img_idct = cv2.idct(img_dct)
	plt.subplot(447), plt.imshow(img_idct, cmap="gray") 
	plt.title("DCT_INVERSE image"), plt.xticks([]), plt.yticks([]) 
	
	return  

def DWT_Trans():

	(cA1,(cH1,cV1,cD1)) = pywt.dwt2(img,'bior3.7')
	inverse_img_dwt = pywt.idwt2((cA1,(cH1,cV1,cD1)),'bior3.7')

	plt.subplot(4,4,10), plt.imshow(cA1, "gray") 
	plt.title("Approximation A1"), plt.xticks([]), plt.yticks([]) 
	plt.subplot(4,4,11), plt.imshow(cH1, "gray") 
	plt.title("Horizontal Detail H1"), plt.xticks([]), plt.yticks([]) 
	plt.subplot(4,4,14), plt.imshow(cV1, "gray") 
	plt.title("Vertical Detail V1"), plt.xticks([]), plt.yticks([]) 
	plt.subplot(4,4,15), plt.imshow(cD1, "gray") 
	plt.title("Diagonal Detail D1"), plt.xticks([]), plt.yticks([]) 
	plt.subplot(4,4,16), plt.imshow(inverse_img_dwt, "gray") 
	plt.title("DWT_INVERSE image"), plt.xticks([]), plt.yticks([]) 
	

	return 

if __name__ == "__main__":

	DFT_Trans()
	DCT_Trans()
	DWT_Trans()
	plt.show()
