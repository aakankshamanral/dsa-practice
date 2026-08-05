/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingAndRepeatedValues(int** grid, int gridSize, int* gridColSize, int* returnSize) {
    int * arr = (int*)malloc(2*sizeof(int));
    int n = (gridSize * gridSize)+1;
    int count[n];
    for(int i = 0 ; i< n ; i++ ) count[i]=0;

    for(int i = 0 ; i < gridSize ; i ++){
        for(int k = 0 ; k < gridSize ; k ++){
            int num = grid[i][k];
            count[num]++;
        }
    }

    for(int i = 1 ; i< n ; i++ ){
        if (count[i]==0) arr[1]=i;
        if (count[i]>1) arr[0]=i;
    }
    *returnSize = 2;
    return arr;
}