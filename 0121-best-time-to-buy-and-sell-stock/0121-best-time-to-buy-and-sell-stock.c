int maxProfit(int* prices, int pricesSize) {
    int minprice=prices[0],maxprofit=0,profit;
    for (int i=0;i<pricesSize;i++){
        if (prices[i]<minprice){
            minprice=prices[i];
        }
        profit=prices[i]-minprice;
        if (profit>maxprofit) maxprofit=profit;
    }
    return maxprofit;
}
























   /* int buy=prices[0],sell,ind;
    if (pricesSize==3){
        if (prices[0]<prices[1]) {
            buy=prices[0];
            if (prices[1]>prices[2]){
                sell=prices[1];
            }
            else sell = prices[2];
            
            return sell-buy; }
        else {
            buy = prices[1];
            if (prices[2]>prices[1]) sell=prices[2];
            else sell=prices[1];
            return sell-buy;
    }
    }

if (pricesSize==2){
        if (prices[1] > prices[0]){
            return prices[1]-prices[0];
        }
        else return 0;
    }
else {
    for(int i=0;i<pricesSize-1;i++){
        if (prices[i]<buy){
            buy=prices[i];
            ind=i;
        }
    }
    sell=buy;
    for (int i=ind;i<pricesSize;i++){
        if (prices[i]>sell){
            sell=prices[i];
            }
    }
    if (sell==buy) return 0;
    else return sell-buy;
} 

}*/
