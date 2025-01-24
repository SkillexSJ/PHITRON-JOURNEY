class Solution
{
public:
    void down_heapify(int idx, vector<int> &nodes)
    {
        while (1)
        {
            int largetIndex = idx;

            int l = 2 * idx + 1;
            int r = 2 * idx + 2;

            if (l < nodes.size() && nodes[largetIndex] < nodes[l])
                largetIndex = l;
            if (r < nodes.size() && nodes[largetIndex] < nodes[r])
                largetIndex = r;

            if (largetIndex == idx)
                break;

            swap(nodes[idx], nodes[largetIndex]);
            idx = largetIndex;
        }
    }
    int maxProduct(vector<int> &nums)
    {
        int idx = nums.size() - 1;

        int lastNonLeafNode = nums.size() / 2 - 1;

        for (int i = lastNonLeafNode; i >= 0; i--)
        {
            down_heapify(i, nums);
        }
        int first = nums[0];      // amra jani first element ta sob theke boro element hobe
        swap(nums[0], nums[idx]); // kintu er porer ta kothay hboxe ta jani na tai amra reset kore dibo
        nums.pop_back();
        down_heapify(0, nums); // notun max element er jonno down heapify korbo

        int second = nums[0]; // oita hobe second max element

        return (first - 1) * (second - 1);
    }
};