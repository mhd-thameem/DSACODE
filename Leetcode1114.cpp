class Foo {
private:
    atomic<int>stage;
public:
    Foo() {
       stage=1;
    }
    

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        stage=2;
    }

    void second(function<void()> printSecond) {
        while(stage.load()!=2){
            this_thread::yield();
        }
        // printSecond() outputs "second". Do not change or remove this line.

        printSecond();
        stage=3;
    }

    void third(function<void()> printThird) {
        while(stage.load()!=3){
            this_thread::yield();
        }
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
};