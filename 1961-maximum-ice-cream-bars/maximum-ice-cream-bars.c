int compare( const void *a , const void *b){
    return ( *(int*)a - *(int*)b );
}

int maxIceCream(int* costs, int costsSize, int coins) {
    qsort(costs, costsSize , sizeof(int) , compare);
    int ans = 0 ;
    for(int i = 0 ; i <costsSize ; i ++){
        if(coins>=costs[i]){
            ans ++;
            coins-= costs[i];
        }
        else break;
    }
    return ans;
}