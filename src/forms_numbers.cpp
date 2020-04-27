std::string infx2pstfx(std::string n)
{
    TStack<char> stack1;
    
    std::string fin;
  
    int len = n.length();
    for (int i = 0; i < len; i++) {
        if ('0' <= n[i] && n[i] <= '9') { fin += n[i]; }
        else if (n[i] == '(')
            stack1.push(n[i]);

 else if ((n[i] == '+' || n[i] == '-') && (stack1.get() != '*') && (stack1.get() != '/') && (stack1.get() != '+') && (stack1.get() != '-'))
            stack1.push(n[i]);
        else if ((n[i] == '*') || (n[i] == '/') && ((stack1.get() != '*') || (stack1.get() != '/')))
            stack1.push(n[i]);
        else if (n[i] == ')')
        {
            while (stack1.get() != '(') {
                fin += stack1.get();
                stack1.pop();
            }
            stack1.pop();
        }

        else
        {
            if (n[i] == '+' || n[i] == '-')
            {
                while ( (stack1.get() != '(') && (!stack1.isEmpty())) {
                    fin += stack1.get();
                    stack1.pop();
                }
                stack1.push(n[i]);
          }
            if (n[i] == '*' || n[i] == '/') {
                while( (stack1.get() == '*' || stack1.get() == '/') && (!stack1.isEmpty()) ) {
                    fin += stack1.get();
                    stack1.pop();
               }
                stack1.push(n[i]);
         }
          
        }
      
    }
    while (!stack1.isEmpty()) {
        fin += stack1.get();
        stack1.pop();
    }
    n = fin;
    return n;
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
