public class SparseMatrix {
    public static void main(String[] args){
        int rows,cols,size,count = 0;
        //Intialize matrix a
        int a[][]={
                {4,0,0},
                {0,5,0},
                {0,0,6}
        };
        //Calculates number of rows and columns present in
        rows = a.length;
        cols = a[0].length;

        //calculate the size if array
        size = rows * cols;
        //count all zero element present in matrix
        for(int i = 0;i < rows; i++){
            for(int j = 0; j < cols;j++){
                if(a[i][j] == 0)
                    count++;
            }
        }
        if(count > (size/2))
            System.out.println("Give matrix is a sparse matrix");
        else System.out.println("Given matrix is not a sparse matrix");
    }
}
