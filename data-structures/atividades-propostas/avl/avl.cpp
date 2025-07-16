int main()
{
    Avl avl;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        char command;
        cin >> command;

        int num;
        cin >> num;

        if(command == 'i')
            avl.inserir(num);
        else if(command == 'd')
            avl.deletar(num);
    }

    avl.preOrdem();
    cout << endl;
    avl.emOrdem();
    cout << endl;
    avl.posOrdem();
    cout << endl;

    return 0;
}