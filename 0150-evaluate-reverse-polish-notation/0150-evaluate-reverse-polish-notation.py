class Solution:
    def evalRPN(self, tokens: List[str]) -> int:

        stack = []

        for i in tokens:
            if i != "+" and i != "-" and i != "*" and i!= "/":
                stack.append(int(i))
            else:
                secondNum = stack.pop()
                firstNum = stack.pop()

                if i == "+":
                    stack.append(firstNum + secondNum)
                elif i == "-":
                    stack.append(firstNum - secondNum)
                elif i == "/":
                    stack.append(int(firstNum/secondNum))
                elif i == "*":
                    stack.append(firstNum*secondNum)
                
        return stack.pop()
        