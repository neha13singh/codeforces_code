t = int(input())

while t > 0:
    arr = list(map(int, input().split()))

    if arr[0] == arr[1] + arr[2] or arr[1] == arr[0] + arr[2] or arr[2] == arr[0] + arr[1]:
        print("Yes")
    else:
        print("No")

    t = t - 1
