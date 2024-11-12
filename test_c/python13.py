Arr1=[1,2,3]
Arr2=[5,6,9,7,5]
Result=[]
min_len=min(len(Arr1),len(Arr2))
for i in range(min_len):
    Result.append(Arr1[i])
    Result.append(Arr2[i])

    print(Result)