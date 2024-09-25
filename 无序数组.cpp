public class UnorderArray {
    public static void main(String[] args) {
        IUnorderArray array = new IUnorderArray(10);
        array.insert(1);
        array.insert(2);
        array.insert(3);
        array.insert(4);
        array.display();//1 2 3 4
        System.out.println(array.get(2));//1
        array.delete(2);
        array.display();//1 3 4 
    }
}
class IUnorderArray{

    private long[] array;
    private int nElement;

    public IUnorderArray(int arraySize){
        array = new long[arraySize];
        nElement = 0;
    }

    public void insert(long data){
        array[nElement++] = data;
    }

    public int get(long data){
        for (int i = 0;i<nElement;i++){
            if (data == array[i]){
                return i;
            }
        }
        return -1;
    }

    public void delete(long data){
        int index = get(data);
        if (index==-1){
            System.out.println
        }else {
            for (int i = index;i<nElement;i++){
                array[i] = array[i+1];
            }
            nElement--;
        }
    }

    public void display(){
        for(int i = 0;i<nElement;i++){
            System.out.print(array[i]+" ");
        }
        System.out.println();
    }
}
