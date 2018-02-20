//ARRAY_PROB_1:Find a pair in an array of size 'n', whose sum is X
//Let Array be {1, 4, 45, 6, 10, -8} and sum to find be 16Sort the array
//A = {-8, 1, 4, 6, 10, 45}

//Initialize l = 0, r = 5
//A[l] + A[r] ( -8 + 45) > 16 => decrement r. Now r = 4
//A[l] + A[r] ( -8 + 10) < 2 => increment l. Now l = 1
//A[l] + A[r] ( 1 + 10) < 16 => increment l. Now l = 2
//A[l] + A[r] ( 4 + 10) < 14 => increment l. Now l = 3
//A[l] + A[r] ( 6 + 10) == 16 => Found candidates (return 1)
