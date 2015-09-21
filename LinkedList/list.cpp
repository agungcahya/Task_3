void insert_after(List *L,element *p,element *prec)
{
    cout<<"Insert Data on After"<<endl<<endl;
    pegawai peg;
    input_data(&peg);
    p->next = prec->next;
    prec->next = p;
    cout<<endl<<"Insert Data  on After Success!"<<endl;
    _getch();
}
