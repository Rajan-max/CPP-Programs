#include <bits/stdc++.h>
using namespace std;

void solve(Node *root, int key, int &sum)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left && root->right && (root->left->left || root->left->right) && (root->left->left->data == key || root->left->right->data == key))
    {
        sum += root->right->left->data + root->right->right->data;
        return;
    }
    if (root->left && root->right &&  (root->right->left || root->right->right) && (root->right->left->data == key || root->right->right->data == key))
    {
        sum += root->left->left->data + root->left->right->data;
        return;
    }
    solve(root->left,key,sum);
    solve(root->right,key,sum);
}
