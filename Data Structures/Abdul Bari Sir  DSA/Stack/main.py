def findSaddlePoint(mat, n):
    ans = False
    for i in range(n):

        min_row = mat[i][0]
        col_ind = 0
        for j in range(1, n):  # this loop gets the smallest element in ith
            if (min_row > mat[i][j]):
                min_row = mat[i][j]
                col_ind = j

        k = 0
        for k in range(n):

            if (min_row < mat[k][col_ind]):
                break
            k += 1

        if (k == n):
            print("Saddle Point Is = ", min_row)
            ans = True

    return ans


def reverse_findSaddlePoint(mat, n):
    ans = False
    for i in range(n):

        max_row = mat[i][0]
        col_ind = 0
        for j in range(1, n):  # this loop gets the smallest element in ith
            if (max_row < mat[i][j]):
                max_row = mat[i][j]
                col_ind = j

        k = 0
        for k in range(n):

            if (max_row > mat[k][col_ind]):
                break
            k += 1

        if (k == n):
            print("Saddle Point Is = ", max_row)
            ans = True

    return ans


if __name__ == '_main_':

    mat = [[10, 12, 7, 3, 12],
           [3, 10, 6, 2, 8],
           [18, 24, 17, 6, 10],
           [15, 21, 10, 8, 12],
           [1, 18, 22, 4, 15]]

    n = 5

    print("Condition Greatest In Row Smallest In Column")
    if(reverse_findSaddlePoint(mat, n) == False):
        print("No Saddle Point")
    print("\n")

    print("Condition Smallest In Row Greatest  In Column")
    if (findSaddlePoint(mat, n) == False):
        print("No Saddle Point")
