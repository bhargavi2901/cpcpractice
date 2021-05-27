class Solution{
    public:
    //Function to find the height of a binary tree.
    int max(int a,int b)
    {
       return (a>b)?a:b;
    }
    int height(struct Node* node){
        // code here 
        if(!node)
        return 0;
        return max(height(node->left),height(node->right))+1;
    }
};
