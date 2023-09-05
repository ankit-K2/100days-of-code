class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        map<Node *, Node *> m;
        Node *temp = head;
        while (temp != 0)
        {
            Node *copy = new Node(temp->val);
            m[temp] = copy;
            temp = temp->next;
        }
        temp = head;
        while (temp != 0)
        {
            m[temp]->next = m[temp->next];
            m[temp]->random = m[temp->random];
            temp = temp->next;
        }
        return m[head];
    }
};