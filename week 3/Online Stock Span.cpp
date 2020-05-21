class StockSpanner {
public:
    
    StockSpanner() { 
        std::ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    stack<pair<int, int>> currentDay;
    
    int next(int price) {

       int span =1;
        pair<int, int>stock_span;
        
        stock_span.first = price;
        stock_span.second = span;
      
        while(!currentDay.empty() && currentDay.top().first <= stock_span.first){
                stock_span.second += currentDay.top().second;
                currentDay.pop();
        }
        
        currentDay.push(stock_span);
        return currentDay.top().second;
    }
};
