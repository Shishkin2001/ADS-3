int eval(std::string m)
{
    TStack<int> stack2;

    int len = m.length();
    for (int i = 0; i < len; i++) {
        if ('0' <= m[i] && m[i] <= '9') {    
          int x = m[i] - '0';

            stack2.push(x);
        }
        if (m[i] == '+') {
            int a = stack2.get();  stack2.pop();
            int b = stack2.get();  stack2.pop();
            int c = b + a;  stack2.push(c);       
        }
        if (m[i] == '-') {
            int a = stack2.get();  stack2.pop();
            int b = stack2.get();  stack2.pop();
            int c = b - a;  stack2.push(c);
        }
        if (m[i] == '*') {
            int a = stack2.get();  stack2.pop();
            int b = stack2.get();  stack2.pop();
            int c = b * a;  stack2.push(c);
        }
        if (m[i] == '/') {
            int a = stack2.get();  stack2.pop();
            int b = stack2.get();  stack2.pop();
            int c = b / a;  stack2.push(c);
        }
    }
    int fin = stack2.get();  stack2.pop();
    return fin;
}


int eval(std::string m)
{
    TStack<int> stack2;

    int len = m.length();
    for (int i = 0; i < len; i++) {
        if ('0' <= m[i] && m[i] <= '9') {    
          int x = m[i] - '0';

            stack2.push(x);
        }
        if (m[i] == '+') {
            int a = stack2.get();  stack2.pop();
            int b = stack2.get();  stack2.pop();
            int c = b + a;  stack2.push(c);       
        }
        if (m[i] == '-') {
            int a = stack2.get();  stack2.pop();
            int b = stack2.get();  stack2.pop();
            int c = b - a;  stack2.push(c);
        }
        if (m[i] == '*') {
            int a = stack2.get();  stack2.pop();
            int b = stack2.get();  stack2.pop();
            int c = b * a;  stack2.push(c);
        }
        if (m[i] == '/') {
            int a = stack2.get();  stack2.pop();
            int b = stack2.get();  stack2.pop();
            int c = b / a;  stack2.push(c);
        }
    }
    int fin = stack2.get();  stack2.pop();
    return fin;
}
