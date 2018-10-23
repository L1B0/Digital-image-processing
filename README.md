# Digital-image-processing

>  ## Author: L1B0

*请在连接**外网**的前提下用**markdown编辑器**打开，保证最佳效果:-)*

## 0x00 文件说明

- **Source_Code**文件夹包含项目的所有源码。
- **Test_Images**文件夹包含测试用的图片
- **Result_Images**文件夹包含所有测试结果的截图
- **picture_demo**是可执行文件
- **imageTrans.py**是第八周图像变换的作业



## 0x01 picture-demo（除第八周作业）

### 1. 系统亮点

1. 界面简洁大方，功能栏位于在左侧方便点击。
2. 图片保存通过**右键保存**实现。
3. 图片过大时出现滚动条，方便查看。
4. 灰度直方图统计功能：系统会通过**迭代法**确定最佳阀值，并显示在**输入框的背景文字**上，用户也可自定义。
5. 点运算中三种变换均支持**动态参数**，并且有变换前后的效果对比。

### 2. 开发环境

* **运行环境**：Linux(deepin) - Qt Creator 4.6.2 based on Qt 5.11.1
* **语言**：C++
* **依赖**：qmake

### 3. 编译(已有可执行文件，可忽略这步)

```
cd picture_demo 
qmake -project
qmake                                           
make clean
vim picture_demo.pro
QT+=core widgets printsupport//添加这行，保存退出
make      
```

### 4. 运行

```
./picture_demo
```

### 5. 功能描述＆测试结果

> 运行过程中会输出一些调试过程的结果，请忽略:-)

**已实现功能**(图片均指**灰度图**)：

1. **打开保存**图片
2. 图片**采样率**的改变
3. 图片**灰度级**的改变
4. 图片**放缩**（最近邻和双线性插值算法），图片**旋转**
5. 图片**平移**（以**图片过大时出现滚动条**间接实现）
6. 展示8幅**位平面**图片，支持保存功能
7. **灰度值统计**，包括动态改变阀值，图片的像素总数，平均灰度，中值灰度，灰度的标准差以及灰度直方图的展示
8. **灰度直方图均衡化**
9. **点运算**，包括线性变换和两种非线性变换
10. 图像**平滑**，包括均值，中值，K邻域三种模板
11. 图像**锐化**， 包括Roberts，Sobel，Laplacian三种算子。
12. 图像增强-**自定义模板**

#### 5.1 打开图像

用户可通过`文件（菜单栏 ）-> 打开`或快捷键`Ctrl+O`打开图片。

![open](https://s1.ax1x.com/2018/10/23/iDzJ9U.png)

![open1](https://s1.ax1x.com/2018/10/23/iDzNjJ.md.png)

#### 5.2 保存图片

除**位平面**界面的８幅位平面图片**只能**通过`save all`按钮一次保存８幅图片之外（该保存路径默认和原图路径相同），其余界面中的图片均可通过**右键保存图片**。

![save_bitplane](https://s1.ax1x.com/2018/10/23/irSpCT.png)

![save](https://s1.ax1x.com/2018/10/23/iDzz5V.png)

#### 5.3 图像放缩 

缩放范围在原图大小的1/11-10，旋转每次顺时针转90度。

![big](https://s1.ax1x.com/2018/10/23/irCuGV.png)

![zhuan](https://s1.ax1x.com/2018/10/23/irC1r4.png)

#### 5.4 采样率

采样率不应超过原图的宽高，若超出则不做变换。

![sampling](https://s1.ax1x.com/2018/10/23/irCOzT.png)

#### 5.5 灰度级

灰度级输入在1-256之间，若超出则不做变换。

![gray_trans](https://s1.ax1x.com/2018/10/23/irCTds.png)

#### 5.6 位平面

![bitplane](https://s1.ax1x.com/2018/10/23/irPSeJ.md.png)

#### 5.7 灰度直方图

支持阀值自定义，并且系统将原图通过迭代法算出最佳阀值，显示在输入框的背景文字。

![gray_hist](https://s1.ax1x.com/2018/10/23/irPlfP.png)

#### 5.8 灰度直方图均衡化

将原图的灰度范围均衡至0-255

![gray_bal](https://s1.ax1x.com/2018/10/23/irPwYq.png)

#### 5.9 点运算

将原图的灰度通过函数映射转换成新图。

![point](https://s1.ax1x.com/2018/10/23/irPyXF.png)

#### 5.10 图像平滑

支持均值，中值和K邻域三种模板。

![smooth](https://s1.ax1x.com/2018/10/23/irPhfx.png)

#### 5.11 图像锐化

通过Roberts，Sobel，Laplacian三种算子对图像进行锐化。

![sharpen](https://s1.ax1x.com/2018/10/23/irPTXD.md.png)

#### 5.12 图像增强-自定义模板

![zidingyi](https://s1.ax1x.com/2018/10/23/irii7j.png)

## 0x02 imageTrans.py（第八周作业-图像变换）

### 1. 开发环境

- **运行环境**：Linux(deepin)，windows应该也行


- **语言**：Python2


- **依赖库**：cv2, numpy, pywt, matplotlib

### 2. 功能说明

此脚本实现了图片的**傅里叶变换**，**离散余弦变换**和**小波变换**，展示的结果包括**原图**，三种变换结果的**频谱图**以及**反变换重构结果**。

### 3. 测试结果

运行脚本，`python imageTrans.py `即可

然后输入图像的路径（绝对路径和相对路径均可）

> 在我的环境里，cv2的dct函数处理图像时若图像的长度或高度为奇数会异常退出

运行结果如下图

**绝对路径**

![absolute_path](https://s1.ax1x.com/2018/10/18/iwAyEn.md.png)

**相对路径**

![relative_path](https://s1.ax1x.com/2018/10/18/iwA2CV.md.png)







