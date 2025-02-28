
class Solution {
  public:
    int evaluate(vector<string>& arr) 
    {
         stack<int> st;
         for (const string& token : arr) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
            int b = st.top(); st.pop(); 
            int a = st.top(); st.pop(); 
            if (token == "+") st.push(a + b);
            else if (token == "-") st.push(a - b);
            else if (token == "*") st.push(a * b);
            else if (token == "/") st.push(a / b); 
        } else {
            st.push(stoi(token)); 
        }
    }
    return st.top();
    }
};
