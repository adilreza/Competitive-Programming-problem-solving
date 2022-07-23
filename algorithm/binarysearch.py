def binary_search(arr, l, h, x):
    # base case
    if h>=l:
        mid = (h+l)//2
        if arr[mid]==x:
            return mid
        elif arr[mid]<x:
            return binary_search(arr, mid+1,h, x)
        else:
            return binary_search(arr, l, mid-1, x)
    else:
        return -1


arr = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16]

print(binary_search(arr,0, len(arr), 2))
