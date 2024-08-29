class MyStack {
private:
    queue<int>q1;
    queue<int>q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        if(q2.empty()){
           q1.push(x); 
        }
        else{
          q2.push(x);   
        }  
    }
    
    int pop() {
        int y;
        if(q2.empty()){
        while(!q1.empty()){
        if(q1.size()==1){
            y=q1.front();
            q1.pop();
            break;
        }
        q2.push(q1.front());
        q1.pop();
        }
        }
        else if(q1.empty()){
        while(!q2.empty()){
        if(q2.size()==1){
            y=q2.front();
            q2.pop();
            break;
        }
        q1.push(q2.front()); 
        q2.pop();
        }
        }
        return y;
    }
    
    int top() {
         int y;
        if(q2.empty()){
        while(!q1.empty()){
        if(q1.size()==1){
            y=q1.front();
        }
        q2.push(q1.front());
        q1.pop();
        }
        }
        else if(q1.empty()){
        while(!q2.empty()){
        if(q2.size()==1){
            y=q2.front();
        }
        q1.push(q2.front()); 
        q2.pop();
        }
        }
        return y;
    }
    
    bool empty() {
        return q1.empty() && q2.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
