 int maxProduct(vector<int> &arr) {
        int max_product = arr[0];
        int min_product = arr[0];
        int result = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            int num = arr[i];
            if (num < 0) {
                swap(max_product, min_product);
            }
            max_product = max(num, num * max_product);
            min_product = min(num, num * min_product);
            result = max(result, max_product);
        }

        return result;
    }
