class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {

        if(!s1.empty()){

            while(!s1.empty()){

                s2.push(s1.top());
                s1.pop();
            }
            int x = s2.top();
            s2.pop();
            
            while(!s2.empty()){

                s1.push(s2.top());
                s2.pop();
            }
            
            return x;
        }
        else{

            return 0;
        }
    }
    
    int peek() {
        if(!s1.empty()){

            while(!s1.empty()){

                s2.push(s1.top());
                s1.pop();
            }
            
            int x = s2.top();
                
            while(!s2.empty()){

                s1.push(s2.top());
                s2.pop();
            }
            return x;        
        }
        return 0;
    }
    
    bool empty() {
        return s1.empty();
    }
};
