    # include <iostream>
    using namespace std;
    int main()
    {
        char sw;
        float n1, n2;
        cout << "Enter operator either + or - or * or /: ";
        cin >> sw;
        cout << "Enter two operands: ";
        cin >> n1 >> n2;
        switch(sw)
        {
            case '+':
                cout << n1+n2;
                break;
            case '-':
                cout << n1-n2;
                break;
            case '*':
                cout << n1*n2;
                break;
            case '/':
                cout << n1/n2;
                break;
            default:
                // If the operator is other than +, -, * or /, error message is shown
                cout << "Error! Operator is not correct";
                break;
        }
        return 0;
    }
