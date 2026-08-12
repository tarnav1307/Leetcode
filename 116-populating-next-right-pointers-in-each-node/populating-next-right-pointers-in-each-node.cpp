class Solution {
public:
    Node* prev = NULL;

    Node* connect(Node* root) {
        if (root == NULL) return NULL;

        queue<Node*> q;
        q.push(root);
        q.push(NULL);

        while (!q.empty()) {
            Node* curr = q.front();
            q.pop();

            if (curr == NULL) {
                if (q.empty())
                    break;

                q.push(NULL);
                prev = NULL;
            }
            else {
                if (curr->left)
                    q.push(curr->left);

                if (curr->right)
                    q.push(curr->right);

                if (prev != NULL)
                    prev->next = curr;

                prev = curr;
            }
        }

        return root;
    }
};