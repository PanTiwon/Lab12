int fibonacci(int x){
    if (x == 0 || x == 1 ){
        return x ;
    }
    else{
        return x = fibonacci(x-1) + fibonacci(x-2);
    }
}