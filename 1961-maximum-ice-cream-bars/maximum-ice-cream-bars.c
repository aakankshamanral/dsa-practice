int maxIceCream(int* costs, int costsSize, int coins) {
    int max = costs[0];
    for(int i = 1 ; i < costsSize ; i ++)
        if (max<costs[i]) max = costs[i];

    int count[max+1];
    for(int i = 0 ; i <=max ; i++)
        count[i]=0;

    for(int i = 0 ; i < costsSize ; i++){
        count[costs[i]]++;
    }
    
    int ans = 0 ;
    for(int price = 1 ; price<=max ; price++ ){
        while(coins>= price && count[price]>0){
            coins -=price;
            count[price]--;
            ans++;
        }
    }

    return ans;
}