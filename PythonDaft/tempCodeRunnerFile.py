for i in range(1,21):
    for j in range(1,i+1):
        print(f"{j:>2}*{i:>2}={i*j:<3}",end=' ')
    print()