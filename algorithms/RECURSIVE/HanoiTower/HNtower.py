#Step 1: Move (n - 1) tower in top from begin to middle;
#Step 2: Move n (biggest tower) from begin to end;
#Step 3: Move (n - 1) tower left from middle to end;


def HaNoitower(n, start, end, middle):
    if n == 0:
        return 
    HaNoitower(n - 1, start, middle, end)
    print("Move tower ", n, " from ", start, " to ", end);
    HaNoitower(n - 1, middle, end, start)

HaNoitower(3, "start", "end", "middle")