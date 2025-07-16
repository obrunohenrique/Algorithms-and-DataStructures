int main()
{
    AvlTree *tree = new AvlTree();

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        char command;
        cin >> command;

        int num;
        cin >> num;

        if(command == 'i')
            tree->insert(new Node(num));
        else if(command == 'd')
            tree->deleteNode(num);
    }

    tree->printTree();

    return 0;
}