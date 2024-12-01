 string addBinary(string& s1, string& s2) {
        int i = s1.size() - 1;
        int j = s2.size() - 1;
        int carry = 0;
        string result = "";
        while (i >= 0 || j >= 0 || carry) {
            int bit1 = i >= 0 ? s1[i] - '0': 0; 
            int bit2 = j >= 0 ? s2[j] - '0' : 0;

            int sum = bit1 + bit2 + carry; 
            carry = sum / 2;               
            result +=
                (sum % 2) + '0'; 

            i--;
            j--;
        }
        
        reverse(result.begin(), result.end());
        
        while (result.size() > 1 && result[0] == '0') {
            result.erase(result.begin());
        }
        return result;
    }
