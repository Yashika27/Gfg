bool func(Node* root, int l, int r)
{
    if(root==NULL)
    return true;
    if(root->data>r || root->data<l)
    return false;
    return (func(root->left, l, root->data -1) && func(root->right, root->data +1, r));
}

// return true if the given tree is a BST, else return false
bool isBST(Node* root) {
    if(root==NULL)
    return true;
    else
    return func(root, INT_MIN, INT_MAX);
}
