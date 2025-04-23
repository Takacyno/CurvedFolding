import sys
import numpy as np
import math
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import mpl_toolkits.mplot3d.art3d as art3d
num=7 #制御点の数
sampleNum=40
betaNum=34
detail=50
alphaNumber=int(input())
rulingDisplacementNumber=int(input())
numberOfBracesUnCut=int(input())
k2d=np.zeros(sampleNum,dtype=float) #サンプル点の2D曲率k2D
x2d=np.zeros((betaNum)*2,dtype=float).reshape(2,betaNum) #サンプル点の2D位置X2D
# costPointsWhere2d=np.zeros(9*9*2).reshape(9,9,2)
curveCrossPoints2d=np.zeros(6).reshape(2,3)
curveTipToEdge=np.zeros(2)
borderPoint2d=np.zeros(betaNum*4).reshape(4,betaNum)
startToEnd=np.array([0,sampleNum-7])
realStartToEnd=np.array([2,sampleNum-4])
ModelNum=np.zeros(3,dtype=int)
x3d=np.zeros((sampleNum-6)*3,dtype=float).reshape(3,sampleNum-6) #サンプル点の3D位置X
kindOfCrossEdge=np.zeros((sampleNum)*2).reshape(2,sampleNum) #罫線が交差した枠線の種類
cornerRuling=np.zeros(4)
costPointsWhere3d=np.zeros(9*9*3).reshape(9,9,3)
curveCrossPoints3d=np.zeros(6).reshape(2,3)
cornerPoints3d=np.zeros(12).reshape(4,3)
cost=-1
pentagonOrNot=np.zeros(4).reshape(2,2)
polygonPoints3d=np.zeros(sampleNum*2*4*3).reshape(sampleNum,2,4,3)
minAndmax=np.zeros(6).reshape(3,2)
pentagonOrNot=np.zeros(4).reshape(2,2)
normalVectorOfBase=np.zeros(3)
baseVector1=np.zeros(3)
baseVector2=np.zeros(3)
basePoints=np.zeros(12).reshape(4,3)
bracePointsUnCut=np.zeros(numberOfBracesUnCut*12).reshape(numberOfBracesUnCut,4,3)
finish=0
seed=0
# costOfBeginning=float(input())
# finish=int(input())
# time=float(input())
# randomOrNot=float(input())    
# repeat=int(input())
# if(randomOrNot==1):
#     seed=int(input())    
# for i in range(repeat+1):
#     costMinimum=[float(i) for i in input().split()]
#     depthLog=int(input())
#     if(costMinimum[2]==-2):
#         print("repeat: ",'{0:03d}'.format(i+1)," depth: ",'{0:03d}'.format(depthLog+1))
#     else:
#         print("repeat: ",'{0:03d}'.format(i+1)," depth: ",'{0:03d}'.format(depthLog+1)," L:",'{0:02d}'.format(int(costMinimum[0])//rulingDisplacementNumber)," R:",'{0:02d}'.format(int(costMinimum[0])%rulingDisplacementNumber)," alpha: ",costMinimum[1]," cost: ",costMinimum[2])

# globalCostMinimum=float(input())
# if(finish==1):
#     print("o")
# else:
#     print("x")
# print("repeat",repeat+1)
# print(globalCostMinimum,"mm")
# print(time,"sec")
# if(randomOrNot==1):
#     print("random","seed:",seed)
# else:
#     print("Not random")
# print("cost of startModel ",costOfBeginning)

ModelNum=[float(i) for i in input().split()]
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
# for i in range(9):
#     for j in range(9):
#         costPointsWhere2d[i][j]=[float(i) for i in input().split()]

# plt.xlabel("X")
# plt.ylabel("Y")
# ax=plt.subplot()
# ax.set_xlim(0,200)
# ax.set_ylim(-100,100)
# ax.invert_yaxis()
# plt.title(str(int(ModelNum[0]))+" L:"+str(int(ModelNum[1])//rulingDisplacementNumber)+" R:"+str(int(ModelNum[1])%rulingDisplacementNumber)+" "+str(ModelNum[2]))
# plt.plot([0,0],[-100,100],color="k")
# plt.plot([200,200],[-100,100],color="k")
# plt.plot([0,200],[-100,-100],color="k")
# plt.plot([0,200],[100,100],color="k")
# plt.plot([x2d[0],borderPoint2d[0]],[x2d[1],borderPoint2d[1]],color="k")
# plt.plot([x2d[0],borderPoint2d[2]],[x2d[1],borderPoint2d[3]],color="k")
# plt.plot([x2d[0][0],curveCrossPoints2d[0][0]],[x2d[1][0],curveCrossPoints2d[0][1]],color="k")
# plt.plot([x2d[0][-1],curveCrossPoints2d[1][0]],[x2d[1][-1],curveCrossPoints2d[1][1]],color="k")
# plt.plot(x2d[0],x2d[1],color="k")
# color_list = ["r", "darkblue", "g", "y", "m", "c","orange","hotpink","springgreen"]
# for i in range(9):
#     for j in range(9):
#         plt.plot(costPointsWhere2d[i][j][0],costPointsWhere2d[i][j][1],"o",color="r")
# plt.show()    

for i in range(3):
    minAndmax[i][0]=10000
    minAndmax[i][1]=-10000
ModelNum=[float(i) for i in input().split()]
x3d[0]=[float(i) for i in input().split()]
x3d[1]=[float(i) for i in input().split()]
x3d[2]=[float(i) for i in input().split()]
for i in range(sampleNum):
    for j in range(2):
        for k in range(4):
            polygonPoints3d[i][j][k]=[float(i) for i in input().split()]
            for l in range(3):
                if(polygonPoints3d[i][j][k][l]<minAndmax[l][0]):
                    minAndmax[l][0]=polygonPoints3d[i][j][k][l]
                if(polygonPoints3d[i][j][k][l]>minAndmax[l][1]):
                    minAndmax[l][1]=polygonPoints3d[i][j][k][l]

for i in range(2):
    for j in range(2):
        kindOfCrossEdge[j][startToEnd[i]]=float(input())
for i in range(2):
    curveCrossPoints2d[i][2]=float(input())
for i in range(2):
    curveCrossPoints3d[i]=[float(x) for x in input().split()]
for i in range(4):
    cornerPoints3d[i]=[float(x) for x in input().split()]
    for l in range(3):
        if(cornerPoints3d[i][l]<minAndmax[l][0]):
            minAndmax[l][0]=cornerPoints3d[i][l]
        if(cornerPoints3d[i][l]>minAndmax[l][1]):
            minAndmax[l][1]=cornerPoints3d[i][l]

# for i in range(9):
#     for j in range(9):
#         costPointsWhere3d[i][j]=[float(x) for x in input().split()]

cornerRuling=[int(x) for x in input().split()]

for i in range(2):
    pentagonOrNot[i]=[int(i) for i in input().split()]

normalVectorOfBase=[float(x) for x in input().split()]
baseVector1=[float(x) for x in input().split()]
baseVector2=[float(x) for x in input().split()]
for i in range(4):
    basePoints[i]=[float(x) for x in input().split()]

for k in range(4):
    for l in range(3):
        if(basePoints[k][l]<minAndmax[l][0]):
            minAndmax[l][0]=basePoints[k][l]
        if(basePoints[k][l]>minAndmax[l][1]):
            minAndmax[l][1]=basePoints[k][l]

for j in range(numberOfBracesUnCut):
    for k in range(4):
        bracePointsUnCut[j][k]=[float(x) for x in input().split()]
numberOfBraces=int(input())
bracePoints=[]
for j in range(numberOfBraces):
    bracePointsInThisBrace=int(input())
    bracePoints.append([])
    for k in range(bracePointsInThisBrace):
        bracePoints[j].append([])
        for l in range(4):
            bracePoints[j][k].append([float(x) for x in input().split()])

# plt.xlabel("X")
# plt.ylabel("Y")
# ax=plt.subplot()
# ax.set_xlim(0,200)
# ax.set_ylim(-100,100)
# ax.invert_yaxis()
# plt.title(str(int(ModelNum[0]))+" L:"+str(int(ModelNum[1])//rulingDisplacementNumber)+" R:"+str(int(ModelNum[1])%rulingDisplacementNumber)+" "+str(ModelNum[2]))
# for i in range(20):
#     plt.plot([0+i*10,0+i*10],[0,200],color="k")
#     for j in range(20):
#         plt.plot([0,200],[0+j*10,0+j*10],color="k")
# plt.plot([x2d[0],borderPoint2d[0]],[x2d[1],borderPoint2d[1]],color="k")
# plt.plot([x2d[0],borderPoint2d[2]],[x2d[1],borderPoint2d[3]],color="k")
# plt.plot([x2d[0][0],curveCrossPoints2d[0][0]],[x2d[1][0],curveCrossPoints2d[0][1]],color="k")
# plt.plot([x2d[0][-1],curveCrossPoints2d[1][0]],[x2d[1][-1],curveCrossPoints2d[1][1]],color="k")
# plt.plot(x2d[0],x2d[1],color="k")
# color_list = ["r", "darkblue", "g", "y", "m", "c","orange","hotpink","springgreen"]

# plt.show()    

# for i in range(9):
#     for j in range(9):
#         plt.plot(costPointsWhere2d[i][j][0],costPointsWhere2d[i][j][1],"o",color="r")

# for j in range(numberOfBraces):
#     plt.title(j)
#     plt.plot([0,200],[0,0],color="k")
#     plt.plot([200,200],[0,200],color="k")
#     plt.plot([200,0],[200,200],color="k")
#     plt.plot([0,0],[200,0],color="k")
#     xMax=0
#     yMax=0
#     xMin=200
#     yMin=200
#     if(len(bracePoints[j])>0):
#         for k in range(len(bracePoints[j])):
            
#             xFromZeroThis=math.sqrt(pow(bracePointsUnCut[j][0][0]-bracePoints[j][k][2][0],2)+pow(bracePointsUnCut[j][0][1]-bracePoints[j][k][2][1],2)+pow(bracePointsUnCut[j][0][2]-bracePoints[j][k][2][2],2))
#             yFromZeroThis=math.sqrt(pow(bracePoints[j][k][0][0]-bracePoints[j][k][2][0],2)+pow(bracePoints[j][k][0][1]-bracePoints[j][k][2][1],2)+pow(bracePoints[j][k][0][2]-bracePoints[j][k][2][2],2))
#             xFromZeroNext=math.sqrt(pow(bracePointsUnCut[j][0][0]-bracePoints[j][k][3][0],2)+pow(bracePointsUnCut[j][0][1]-bracePoints[j][k][3][1],2)+pow(bracePointsUnCut[j][0][2]-bracePoints[j][k][3][2],2))
#             yFromZeroNext=math.sqrt(pow(bracePoints[j][k][1][0]-bracePoints[j][k][3][0],2)+pow(bracePoints[j][k][1][1]-bracePoints[j][k][3][1],2)+pow(bracePoints[j][k][1][2]-bracePoints[j][k][3][2],2))

#             if(xFromZeroThis>xFromZeroNext):
#                 xTmp=xFromZeroThis
#                 yTmp=yFromZeroThis
#                 xFromZeroThis=xFromZeroNext
#                 yFromZeroThis=yFromZeroNext
#                 xFromZeroNext=xTmp
#                 yFromZeroNext=yTmp
#             plt.plot([xFromZeroThis,xFromZeroNext],[yFromZeroThis,yFromZeroNext],color="k") 
#             if(xFromZeroNext>xMax):
#                 xMax=xFromZeroNext
#                 yMax=yFromZeroNext
#             if(xFromZeroThis<xMin):
#                 xMin=xFromZeroThis
#                 yMin=yFromZeroThis

#             if(k!=len(bracePoints[j])-1):
#                 xFromZeroThis2=math.sqrt(pow(bracePointsUnCut[j][0][0]-bracePoints[j][k+1][2][0],2)+pow(bracePointsUnCut[j][0][1]-bracePoints[j][k+1][2][1],2)+pow(bracePointsUnCut[j][0][2]-bracePoints[j][k+1][2][2],2))
#                 yFromZeroThis2=math.sqrt(pow(bracePoints[j][k+1][0][0]-bracePoints[j][k+1][2][0],2)+pow(bracePoints[j][k+1][0][1]-bracePoints[j][k+1][2][1],2)+pow(bracePoints[j][k+1][0][2]-bracePoints[j][k+1][2][2],2))
#                 xFromZeroNext2=math.sqrt(pow(bracePointsUnCut[j][0][0]-bracePoints[j][k+1][3][0],2)+pow(bracePointsUnCut[j][0][1]-bracePoints[j][k+1][3][1],2)+pow(bracePointsUnCut[j][0][2]-bracePoints[j][k+1][3][2],2))
#                 yFromZeroNext2=math.sqrt(pow(bracePoints[j][k+1][1][0]-bracePoints[j][k+1][3][0],2)+pow(bracePoints[j][k+1][1][1]-bracePoints[j][k+1][3][1],2)+pow(bracePoints[j][k+1][1][2]-bracePoints[j][k+1][3][2],2))

#                 if(xFromZeroThis2>xFromZeroNext2):
#                     xTmp=xFromZeroThis2
#                     yTmp=yFromZeroThis2
#                     xFromZeroThis2=xFromZeroNext2
#                     yFromZeroThis2=yFromZeroNext2
#                     xFromZeroNext2=xTmp
#                     yFromZeroNext2=yTmp
#                 if(math.fabs(xFromZeroThis2-xFromZeroNext)>5):
#                     plt.plot([xFromZeroNext,xFromZeroNext],[0,yFromZeroNext],color="k") 
#                     plt.plot([xFromZeroThis2,xFromZeroThis2],[0,yFromZeroThis2],color="k") 
#         plt.plot([xMin,xMin],[0,yMin],color="k") 
#         plt.plot([xMax,xMax],[0,yMax],color="k") 
#         plt.show()    

color_list1 = ["skyblue","b" ,"k"]
#3D曲線折り目と罫線のモデルの描画
fig=plt.figure()
ax=fig.add_subplot(111,projection="3d")
# plt.title(str(ModelNum[0])+" "+str(ModelNum[1])+" "+str(ModelNum[2]))
# plt.xlabel("X")
# plt.ylabel("Y")
# ax.set_zlabel("Z")
# minAndmax[0][0]=-210
# minAndmax[0][1]=210
# minAndmax[1][0]=-100
# minAndmax[1][1]=100
# minAndmax[2][0]=-100
# minAndmax[2][1]=100

ax.set_xlim(minAndmax[0][0],minAndmax[0][1])
ax.set_ylim(minAndmax[1][1],minAndmax[1][0])
ax.set_zlim(minAndmax[2][1],minAndmax[2][0])
ax.set_xticks([])
ax.set_yticks([])
ax.set_zticks([])
ax.view_init(azim=310)
ax.view_init(elev=60)
if 1: #1:polygon 0:betaOnly
    for i in range(2,sampleNum-3):
        for j in range(2):
            if(i==2 or i==sampleNum-4):
                ax.add_collection3d(art3d.Poly3DCollection([[polygonPoints3d[i][j][0][0],polygonPoints3d[i][j][0][1],polygonPoints3d[i][j][0][2]],[polygonPoints3d[i][j][1][0],polygonPoints3d[i][j][1][1],polygonPoints3d[i][j][1][2]],[polygonPoints3d[i][j][2][0],polygonPoints3d[i][j][2][1],polygonPoints3d[i][j][2][2]]],color=color_list1[j]))
            else:
                ax.add_collection3d(art3d.Poly3DCollection([[polygonPoints3d[i][j][0][0],polygonPoints3d[i][j][0][1],polygonPoints3d[i][j][0][2]],[polygonPoints3d[i][j][1][0],polygonPoints3d[i][j][1][1],polygonPoints3d[i][j][1][2]],[polygonPoints3d[i][j][3][0],polygonPoints3d[i][j][3][1],polygonPoints3d[i][j][3][2]]],color=color_list1[j]))
                ax.add_collection3d(art3d.Poly3DCollection([[polygonPoints3d[i][j][1][0],polygonPoints3d[i][j][1][1],polygonPoints3d[i][j][1][2]],[polygonPoints3d[i][j][2][0],polygonPoints3d[i][j][2][1],polygonPoints3d[i][j][2][2]],[polygonPoints3d[i][j][3][0],polygonPoints3d[i][j][3][1],polygonPoints3d[i][j][3][2]]],color=color_list1[j]))

    for i in range(2):
        for j in range(2):
            if(math.fabs(kindOfCrossEdge[j][startToEnd[i]]-curveCrossPoints2d[i][2])==0.0):
                if(pentagonOrNot[1-i][j]!=1):
                    ax.add_collection3d(art3d.Poly3DCollection([[polygonPoints3d[cornerRuling[i*2+j]][j][3][0],polygonPoints3d[cornerRuling[i*2+j]][j][3][1],polygonPoints3d[cornerRuling[i*2+j]][j][3][2]],[polygonPoints3d[cornerRuling[i*2+j]][j][2][0],polygonPoints3d[cornerRuling[i*2+j]][j][2][1],polygonPoints3d[cornerRuling[i*2+j]][j][2][2]],[cornerPoints3d[i*2+j][0],cornerPoints3d[i*2+j][1],cornerPoints3d[i*2+j][2]]],color=color_list1[j]))
            else:
                ax.add_collection3d(art3d.Poly3DCollection([[polygonPoints3d[i*(sampleNum-6)+2][j][0][0],polygonPoints3d[i*(sampleNum-6)+2][j][0][1],polygonPoints3d[i*(sampleNum-6)+2][j][0][2]],[polygonPoints3d[i*(sampleNum-6)+2][j][1][0],polygonPoints3d[i*(sampleNum-6)+2][j][1][1],polygonPoints3d[i*(sampleNum-6)+2][j][1][2]],[polygonPoints3d[i*(sampleNum-6)+2][j][2][0],polygonPoints3d[i*(sampleNum-6)+2][j][2][1],polygonPoints3d[i*(sampleNum-6)+2][j][2][2]]],color=color_list1[j]))
                ax.add_collection3d(art3d.Poly3DCollection([[polygonPoints3d[i*(sampleNum-6)+2][j][0][0],polygonPoints3d[i*(sampleNum-6)+2][j][0][1],polygonPoints3d[i*(sampleNum-6)+2][j][0][2]],[polygonPoints3d[i*(sampleNum-6)+2][j][2][0],polygonPoints3d[i*(sampleNum-6)+2][j][2][1],polygonPoints3d[i*(sampleNum-6)+2][j][2][2]],[cornerPoints3d[i*2+j][0],cornerPoints3d[i*2+j][1],cornerPoints3d[i*2+j][2]]],color=color_list1[j]))

                if(math.fabs(kindOfCrossEdge[j][startToEnd[i]]-curveCrossPoints2d[i][2])==2.0):    
                    ax.add_collection3d(art3d.Poly3DCollection([[polygonPoints3d[i*(sampleNum-6)+2][j][2][0],polygonPoints3d[i*(sampleNum-6)+2][j][2][1],polygonPoints3d[i*(sampleNum-6)+2][j][2][2]],[cornerPoints3d[(i-1)*2+j][0],cornerPoints3d[(i-1)*2+j][1],cornerPoints3d[(i-1)*2+j][2]],[cornerPoints3d[i*2+j][0],cornerPoints3d[i*2+j][1],cornerPoints3d[i*2+j][2]]],color=color_list1[j]))
else:
    for i in range(2,sampleNum-3):
        for j in range(2):
            if(i==2 or i==sampleNum-4):
                for k in range(detail+1):
                    if(k==0 and j==0):
                        plt.plot([polygonPoints3d[i][j][1][0],polygonPoints3d[i][j][2][0]+(polygonPoints3d[i][j][0][0]-polygonPoints3d[i][j][2][0])/detail*k],[polygonPoints3d[i][j][1][1],polygonPoints3d[i][j][2][1]+(polygonPoints3d[i][j][0][1]-polygonPoints3d[i][j][2][1])/detail*k],[polygonPoints3d[i][j][1][2],polygonPoints3d[i][j][2][2]+(polygonPoints3d[i][j][0][2]-polygonPoints3d[i][j][2][2])/detail*k],color="skyblue")
                    else:
                        plt.plot([polygonPoints3d[i][j][1][0],polygonPoints3d[i][j][2][0]+(polygonPoints3d[i][j][0][0]-polygonPoints3d[i][j][2][0])/detail*k],[polygonPoints3d[i][j][1][1],polygonPoints3d[i][j][2][1]+(polygonPoints3d[i][j][0][1]-polygonPoints3d[i][j][2][1])/detail*k],[polygonPoints3d[i][j][1][2],polygonPoints3d[i][j][2][2]+(polygonPoints3d[i][j][0][2]-polygonPoints3d[i][j][2][2])/detail*k],color="blue")
                
                
            else :
                for k in range(detail+1):
                    if(k==0 and j==0):
                        plt.plot([polygonPoints3d[i][j][0][0]+(polygonPoints3d[i][j][1][0]-polygonPoints3d[i][j][0][0])/detail*k,polygonPoints3d[i][j][3][0]+(polygonPoints3d[i][j][2][0]-polygonPoints3d[i][j][3][0])/detail*k],[polygonPoints3d[i][j][0][1]+(polygonPoints3d[i][j][1][1]-polygonPoints3d[i][j][0][1])/detail*k,polygonPoints3d[i][j][3][1]+(polygonPoints3d[i][j][2][1]-polygonPoints3d[i][j][3][1])/detail*k],[polygonPoints3d[i][j][0][2]+(polygonPoints3d[i][j][1][2]-polygonPoints3d[i][j][0][2])/detail*k,polygonPoints3d[i][j][3][2]+(polygonPoints3d[i][j][2][2]-polygonPoints3d[i][j][3][2])/detail*k],color="skyblue")
                    else:
                        plt.plot([polygonPoints3d[i][j][0][0]+(polygonPoints3d[i][j][1][0]-polygonPoints3d[i][j][0][0])/detail*k,polygonPoints3d[i][j][3][0]+(polygonPoints3d[i][j][2][0]-polygonPoints3d[i][j][3][0])/detail*k],[polygonPoints3d[i][j][0][1]+(polygonPoints3d[i][j][1][1]-polygonPoints3d[i][j][0][1])/detail*k,polygonPoints3d[i][j][3][1]+(polygonPoints3d[i][j][2][1]-polygonPoints3d[i][j][3][1])/detail*k],[polygonPoints3d[i][j][0][2]+(polygonPoints3d[i][j][1][2]-polygonPoints3d[i][j][0][2])/detail*k,polygonPoints3d[i][j][3][2]+(polygonPoints3d[i][j][2][2]-polygonPoints3d[i][j][3][2])/detail*k],color=color_list1[0])
                plt.plot([polygonPoints3d[i][j][2][0],polygonPoints3d[i][j][3][0]],[polygonPoints3d[i][j][2][1],polygonPoints3d[i][j][3][1]],[polygonPoints3d[i][j][2][2],polygonPoints3d[i][j][3][2]],color=color_list1[0])


    for i in range(2):
        for j in range(2):
            if(math.fabs(kindOfCrossEdge[j][startToEnd[i]]-curveCrossPoints2d[i][2])==0.0):
                if(pentagonOrNot[1-i][j]!=1):
                    for k in range(detail+1):
                        plt.plot([polygonPoints3d[cornerRuling[i*2+j]][j][3][0],polygonPoints3d[cornerRuling[i*2+j]][j][2][0]+(cornerPoints3d[i*2+j][0]-polygonPoints3d[cornerRuling[i*2+j]][j][2][0])/detail*k],[polygonPoints3d[cornerRuling[i*2+j]][j][3][1],polygonPoints3d[cornerRuling[i*2+j]][j][2][1]+(cornerPoints3d[i*2+j][1]-polygonPoints3d[cornerRuling[i*2+j]][j][2][1])/detail*k],[polygonPoints3d[cornerRuling[i*2+j]][j][3][2],polygonPoints3d[cornerRuling[i*2+j]][j][2][2]+(cornerPoints3d[i*2+j][2]-polygonPoints3d[cornerRuling[i*2+j]][j][2][2])/detail*k],color=color_list1[0])
            else:
                for k in range(detail+1):
                    if(k==0):
                        plt.plot([polygonPoints3d[i*(sampleNum-6)+2][j][0][0]+(polygonPoints3d[i*(sampleNum-6)+2][j][1][0]-polygonPoints3d[i*(sampleNum-6)+2][j][0][0])/detail*k,cornerPoints3d[i*2+j][0]+(polygonPoints3d[i*(sampleNum-6)+2][j][2][0]-cornerPoints3d[i*2+j][0])/detail*k],[polygonPoints3d[i*(sampleNum-6)+2][j][0][1]+(polygonPoints3d[i*(sampleNum-6)+2][j][1][1]-polygonPoints3d[i*(sampleNum-6)+2][j][0][1])/detail*k,cornerPoints3d[i*2+j][1]+(polygonPoints3d[i*(sampleNum-6)+2][j][2][1]-cornerPoints3d[i*2+j][1])/detail*k],[polygonPoints3d[i*(sampleNum-6)+2][j][0][2]+(polygonPoints3d[i*(sampleNum-6)+2][j][1][2]-polygonPoints3d[i*(sampleNum-6)+2][j][0][2])/detail*k,cornerPoints3d[i*2+j][2]+(polygonPoints3d[i*(sampleNum-6)+2][j][2][2]-cornerPoints3d[i*2+j][2])/detail*k],color=color_list1[0])
                    else:
                        plt.plot([polygonPoints3d[i*(sampleNum-6)+2][j][0][0]+(polygonPoints3d[i*(sampleNum-6)+2][j][1][0]-polygonPoints3d[i*(sampleNum-6)+2][j][0][0])/detail*k,cornerPoints3d[i*2+j][0]+(polygonPoints3d[i*(sampleNum-6)+2][j][2][0]-cornerPoints3d[i*2+j][0])/detail*k],[polygonPoints3d[i*(sampleNum-6)+2][j][0][1]+(polygonPoints3d[i*(sampleNum-6)+2][j][1][1]-polygonPoints3d[i*(sampleNum-6)+2][j][0][1])/detail*k,cornerPoints3d[i*2+j][1]+(polygonPoints3d[i*(sampleNum-6)+2][j][2][1]-cornerPoints3d[i*2+j][1])/detail*k],[polygonPoints3d[i*(sampleNum-6)+2][j][0][2]+(polygonPoints3d[i*(sampleNum-6)+2][j][1][2]-polygonPoints3d[i*(sampleNum-6)+2][j][0][2])/detail*k,cornerPoints3d[i*2+j][2]+(polygonPoints3d[i*(sampleNum-6)+2][j][2][2]-cornerPoints3d[i*2+j][2])/detail*k],color=color_list1[0])
                if(math.fabs(kindOfCrossEdge[j][startToEnd[i]]-curveCrossPoints2d[i][2])==2.0):    
                    plt.plot([polygonPoints3d[i*(sampleNum-6)+2][j][2][0],cornerPoints3d[(i-1)*2+j][0]+(cornerPoints3d[i*2+j][0]-cornerPoints3d[(i-1)*2+j][0])/detail*k],[polygonPoints3d[i*(sampleNum-6)+2][j][2][1],cornerPoints3d[(i-1)*2+j][1]+(cornerPoints3d[i*2+j][1]-cornerPoints3d[(i-1)*2+j][1])/detail*k],[polygonPoints3d[i*(sampleNum-6)+2][j][2][2],cornerPoints3d[(i-1)*2+j][2]+(cornerPoints3d[i*2+j][2]-cornerPoints3d[(i-1)*2+j][2])/detail*k],color=color_list1[0])

            # plt.plot([cornerPoints3d[i*2+j][0],polygonPoints3d[realStartToEnd[i]][j][2][0]],[cornerPoints3d[i*2+j][1],polygonPoints3d[realStartToEnd[i]][j][2][1]],[cornerPoints3d[i*2+j][2],polygonPoints3d[realStartToEnd[i]][j][2][2]],color="skyblue")
    plt.plot([polygonPoints3d[realStartToEnd[0]][1][0][0],polygonPoints3d[realStartToEnd[0]][1][2][0]],[polygonPoints3d[realStartToEnd[0]][1][0][1],polygonPoints3d[realStartToEnd[0]][1][2][1]],[polygonPoints3d[realStartToEnd[0]][1][0][2],polygonPoints3d[realStartToEnd[0]][1][2][2]],color="skyblue")


plt.plot(x3d[0],x3d[1],x3d[2],color="k")
for i in range(2):
    plt.plot([x3d[0][startToEnd[i]],curveCrossPoints3d[i][0]],[x3d[1][startToEnd[i]],curveCrossPoints3d[i][1]],[x3d[2][startToEnd[i]],curveCrossPoints3d[i][2]],color="k")
# color_list2 = ["w", "darkblue", "g", "y", "m", "c","orange","hotpink","springgreen"]

ax.add_collection3d(art3d.Poly3DCollection([[basePoints[0][0],basePoints[0][1],basePoints[0][2]],[basePoints[1][0],basePoints[1][1],basePoints[1][2]],[basePoints[2][0],basePoints[2][1],basePoints[2][2]]],color='g',alpha=0.1))
ax.add_collection3d(art3d.Poly3DCollection([[basePoints[0][0],basePoints[0][1],basePoints[0][2]],[basePoints[2][0],basePoints[2][1],basePoints[2][2]],[basePoints[3][0],basePoints[3][1],basePoints[3][2]]],color='g',alpha=0.1))

# for j in range(numberOfBracesUnCut):
#     ax.add_collection3d(art3d.Poly3DCollection([[bracePointsUnCut[j][0][0],bracePointsUnCut[j][0][1],bracePointsUnCut[j][0][2]],[bracePointsUnCut[j][1][0],bracePointsUnCut[j][1][1],bracePointsUnCut[j][1][2]],[bracePointsUnCut[j][2][0],bracePointsUnCut[j][2][1],bracePointsUnCut[j][2][2]]],color='g',alpha=0.1))
#     ax.add_collection3d(art3d.Poly3DCollection([[bracePointsUnCut[j][0][0],bracePointsUnCut[j][0][1],bracePointsUnCut[j][0][2]],[bracePointsUnCut[j][2][0],bracePointsUnCut[j][2][1],bracePointsUnCut[j][2][2]],[bracePointsUnCut[j][3][0],bracePointsUnCut[j][3][1],bracePointsUnCut[j][3][2]]],color='g',alpha=0.1))

numberOfBraces
for j in range(numberOfBraces):
    if(j==6 or j==8 or j==10 or j==12 or j==14 or j==15 or j==17):
        for k in range(len(bracePoints[j])):
            plt.plot([bracePoints[j][k][0][0],bracePoints[j][k][2][0]],[bracePoints[j][k][0][1],bracePoints[j][k][2][1]],[bracePoints[j][k][0][2],bracePoints[j][k][2][2]],color="g")
            plt.plot([bracePoints[j][k][1][0],bracePoints[j][k][3][0]],[bracePoints[j][k][1][1],bracePoints[j][k][3][1]],[bracePoints[j][k][1][2],bracePoints[j][k][3][2]],color="g")
            ax.add_collection3d(art3d.Poly3DCollection([[bracePoints[j][k][0][0],bracePoints[j][k][0][1],bracePoints[j][k][0][2]],[bracePoints[j][k][1][0],bracePoints[j][k][1][1],bracePoints[j][k][1][2]],[bracePoints[j][k][2][0],bracePoints[j][k][2][1],bracePoints[j][k][2][2]]],color='g',alpha=0.1))
            ax.add_collection3d(art3d.Poly3DCollection([[bracePoints[j][k][1][0],bracePoints[j][k][1][1],bracePoints[j][k][1][2]],[bracePoints[j][k][2][0],bracePoints[j][k][2][1],bracePoints[j][k][2][2]],[bracePoints[j][k][3][0],bracePoints[j][k][3][1],bracePoints[j][k][3][2]]],color='g',alpha=0.1))

# plt.plot([0,normalVectorOfBase[0]*200],[0,normalVectorOfBase[1]*200],[0,normalVectorOfBase[2]*200],color="r")
# plt.plot([0,baseVector1[0]*200],[0,baseVector1[1]*200],[0,baseVector1[2]*200],color="b")
# plt.plot([0,baseVector2[0]*200],[0,baseVector2[1]*200],[0,baseVector2[2]*200],color="g")

# plt.plot([curveCrossPoints3d[0][0],curveCrossPoints3d[0][0]+20*normalVectorOfBase[0]],[curveCrossPoints3d[0][1],curveCrossPoints3d[0][1]+20*normalVectorOfBase[1]],[curveCrossPoints3d[0][2],curveCrossPoints3d[0][2]+20*normalVectorOfBase[2]],color="r")
# plt.plot([curveCrossPoints3d[0][0],normalVectorOfBase[0]],[curveCrossPoints3d[0][1],normalVectorOfBase[1]],[curveCrossPoints3d[0][2],normalVectorOfBase[2]],color="r")

# plt.plot(normalVectorOfBase[0],normalVectorOfBase[1],normalVectorOfBase[2],"o",color="r")
# for i in range(9):
#     for j in range(9):
#         plt.plot(costPointsWhere3d[i][j][0],costPointsWhere3d[i][j][1],costPointsWhere3d[i][j][2],"o",color="b")

# costPoints3dGoal=np.zeros(9*9*3).reshape(9,9,3)

# for i in range(9):
#     for j in range(9):
#         costPoints3dGoal[i][j]=[float(i) for i in input().split()]
# for i in range(9):
#     for j in range(9):
#         plt.plot(costPoints3dGoal[i][j][0],costPoints3dGoal[i][j][1],costPoints3dGoal[i][j][2],"o",color="b")
#         plt.plot([costPointsWhere3d[i][j][0],costPoints3dGoal[i][j][0]],[costPointsWhere3d[i][j][1],costPoints3dGoal[i][j][1]],[costPointsWhere3d[i][j][2],costPoints3dGoal[i][j][2]],color="g")
plt.show()