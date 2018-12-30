int a = 5, b = 4;
int c[10];
const int d;
int print(int x, int y){
    return x + y;
}
int factn(int n){
    if(n == 1){
        return 1;
    }else{
        return n * factn(n-1);
    }
}
int main(){
    int x;
    double y = 3.5;
    double z = 0.0;
    z = y * y;
    x = print(a, b);
    x = factn(10);
    x = a - b;
    x = a % b;
    x = a << b;
    x++;
    for(int i = 0; i < 10; i++){
        x ++;
    }

}