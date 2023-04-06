//https://viblo.asia/p/cau-truc-du-lieu-va-giai-thuat-ngan-xep-stack-DbmemoJqvAg
func push(key: T) {
        // neu ngan xep chua co dinh
        if top == nil {
            top = Node<T>()
        }

        // neu dinh ngan xep rong
        if top.key ==  nil {
            top.key = key
            return
        } else { // khong thi tao 1 nut moi roi gan nut do vao dinh
            let newNode = Node<T>()
            newNode.key = key
            newNode.next = top
            top = newNode
        }
    }
func pop() -> T? {
        // kiem tra xem dinh danh sach co rong khong
        // neu rong thi ket thuc
        guard let popItem =  top.key else {
            return
        }

        // kiem tra xem nut tiep theo cua dinh co rong khoong
        if let nextNode = top.next {
            top = nextNode
        } else {
            top = nil
        }

        return popItem
    }
func peek() -> T? {
        // kiem tra xem dinh dach sach co rong khong
        guard let topItem = top.key else {
            // neu rong thi tra ve nil
            return nil
        }

        // con khong tra ve gia tri dinh danh sach
        return topItem
    }
    func buildStack() {
        let numberList = [1,4,7,9,10,12,20]

        for number in numberList {
            stack.push(number)
        }

        printStack()
    }

    func printStack() {
        var top = stack.top
        print(top.key)

        while top.next != nil {
            top = top.next
            print(top.key)
        }
    }
func pushStack() {
        stack.push(40)

        printStack()
    }
func popStack() {
        let item = stack.pop()
        print(item)
    }
