import sys
import numpy as np
import math
import matplotlib.pyplot as plt
# from mpl_toolkits.mplot3d import Axes3D
# import mpl_toolkits.mplot3d.art3d as art3d
num=7 #制御点の数
sampleNum=40
betaNum=34
k2d=np.zeros(sampleNum,dtype=float) #サンプル点の2D曲率k2D
x2d=np.zeros((betaNum)*2,dtype=float).reshape(2,betaNum) #サンプル点の2D位置X2D
t2d=np.zeros((sampleNum)*2,dtype=float).reshape(2,sampleNum) #サンプル点の接線方向T2D
n2d=np.zeros((sampleNum)*2,dtype=float).reshape(2,sampleNum) #サンプル点の法線方向N2D
costPointsWhere2d=np.zeros(9*9*2).reshape(9,9,2)
curveCrossPoints2d=np.zeros(6).reshape(2,3)
curveTipToEdge=np.zeros(2)
borderPoint2d=np.zeros(betaNum*4).reshape(4,betaNum)
startToEnd=np.array([0,-1])
ModelNum=[int(i) for i in input().split()]
# x2dControl[0]=[float(i) for i in input().split()]
# x2dControl[1]=[float(i) for i in input().split()]
x2d[0]=[float(i) for i in input().split()]
x2d[1]=[float(i) for i in input().split()]
borderPoint2d[0]=[float(i) for i in input().split()]
borderPoint2d[1]=[float(i) for i in input().split()]
borderPoint2d[2]=[float(i) for i in input().split()]
borderPoint2d[3]=[float(i) for i in input().split()]
curveCrossPoints2d[0]=[float(i) for i in input().split()]
curveCrossPoints2d[1]=[float(i) for i in input().split()]
for i in range(9):
    for j in range(9):
        costPointsWhere2d[i][j]=[float(i) for i in input().split()]
plt.xlabel("X")
plt.ylabel("Y")
ax=plt.subplot()
ax.invert_yaxis()
plt.title(str(ModelNum[0])+" "+str(ModelNum[1])+" "+str(ModelNum[2]))
plt.plot([0,0],[-100,100],color="k")
plt.plot([200,200],[-100,100],color="k")
plt.plot([0,200],[-100,-100],color="k")
plt.plot([0,200],[100,100],color="k")
plt.plot([x2d[0],borderPoint2d[0]],[x2d[1],borderPoint2d[1]],color="k")
plt.plot([x2d[0],borderPoint2d[2]],[x2d[1],borderPoint2d[3]],color="k")
plt.plot([x2d[0][0],curveCrossPoints2d[0][0]],[x2d[1][0],curveCrossPoints2d[0][1]],color="k")
plt.plot([x2d[0][-1],curveCrossPoints2d[1][0]],[x2d[1][-1],curveCrossPoints2d[1][1]],color="k")
plt.plot(x2d[0],x2d[1],color="k")
# color_list = ["r", "darkblue", "g", "y", "m", "c","orange","hotpink","springgreen"]
# for i in range(9):
#     for j in range(9):
#         plt.plot(costPointsWhere2d[i][j][0],costPointsWhere2d[i][j][1],"o",color=color_list[i])
plt.show()    