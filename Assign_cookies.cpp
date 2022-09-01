int findContentChildren(vector<int>& children, vector<int>& cookies){
    sort(children.begin(),children.end());
    sort(cookies.begin(),cookies.end());
    int child = 0, cookies = 0;
    while (child < children.size() && cookie < cookies.size())
    {
        if (children[child] <= cookies[cookie]) ++child;
        ++cookie;
        
    }
    return child;
    
}

// 一群孩子站成一排，每一个孩子有自己的评分。现在需要给这些孩子发糖果
// 规则是如果一个孩子的评分比自己旁边一个孩子要高
// 那么这个孩子就必须得到比身旁孩子更多得糖果
// 所有孩子至少有一个糖果。
// 求解最少需要多少个糖果