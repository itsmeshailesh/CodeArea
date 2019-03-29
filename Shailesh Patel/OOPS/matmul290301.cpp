#include<iostream>
using namespace std;

class matrix
{
    int mat[10][10];
    int r,c;

public :
    void input()
    {
        cout<<"Enter the number of rows and number of columns :";
        cin>>r>>c;
        cout<<"Enter elements : ";
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                cin>>mat[i][j];
    }
    void output()
    {
        cout<<"Elements : \n";
        for(int i=0;i<r;i++)
        {
                for(int j=0;j<c;j++)
                    cout<<mat[i][j]<<" ";
                    cout<<endl;
        }

    }
    void multiply(matrix A,matrix B)
    {
        if(A.c==B.r)
        {
             r=A.r;
             c=B.c;
              for(int i=0;i<r;i++)
                {
                    for(int j=0;j<c;j++)
                        {
                            mat[i][j]=0;
                            for(int k=0;k<r;k++)
                                for(int l=0;l<c;l++)
                                {   int sum=0;
                                    for(int m=0;m<A.c;m++)
                                    {
                                        sum+=A.mat[k][m]*B.mat[m][l];
                                    }
                                    mat[k][l]=sum;
                                }

                        }
                }
        }
        else
            cout<<"Multiplication Not Possible";
    }
};

int main()
{
    matrix m1,m2,m3;
    m1.input();
    m2.input();
    m3.multiply(m1,m2);
    m1.output();
    m2.output();
    m3.output();
    return 0;

}
