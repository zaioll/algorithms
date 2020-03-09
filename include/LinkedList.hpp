
namespace Zaioll
{
    template<typename Type>
    class Node
    {
        /*
         Set LinkedList as Node friend. It allows access its private properties
         
         Template parameters cannot shadow each other.
         Nested templates must have different template parameter names.

         template<typename _Type> works too.
        */
        template<typename>
        friend class LinkedList;

        public:
            /**
             * @brief Construct a new Node object
             * 
             */
            Node()
                // constructor delegation
                : Node(nullptr)  
            {
            }

            /**
             * @brief Construct a new Node object
             * 
             * @param el 
             */
            Node(const Type &el)
                // constructor initializers
                : _element { el }, _next { nullptr }, _prev { nullptr } // the parameters order does matter 
            {
            }

            /**
             * @brief Get the Next object
             * 
             * @return Node<Type> 
             */
            Node<Type> getNext() const
            {
                return this->_next;
            }

            /**
             * @brief Get the Previous object
             * 
             * @return Node<Type> 
             */
            Node<Type> getPrevious() const
            {
                return this->_prev;
            }
        private:
            Type _element;
            Node<Type> *_next;
            Node<Type> *_prev;
    };

    template<typename Type>
    class LinkedList
    {
        public:
            /**
             * @brief Construct a new Linked List< Type> object
             * 
             */
            LinkedList<Type>()
                : _head { nullptr }, _length { 0 }
            {
            }

            /**
             * @brief Get the Length object
             *
             * @return unsigned
             */
            unsigned getLength() const
            {
                return this->_length;
            }

            /**
             * @brief
             *
             * @param element 
             * @return true
             * @return false
             */
            bool recursiveInsertAtFront(const Type &element) const;

            bool recursiveInsertAtBack(const Type &element) const;

            bool isEmpty() const
            {
                return this->_length == 0;
            }

            bool recursiveInsertAt(const unsigned position, const Type $element) const;

            bool recursiveRemoveFromFront() const;

            bool recursiveRemoveFromBack() const;

            bool recursiveRemoveFrom(const unsigned position) const;

            Node<Type> recursiveGetElementFrom(const unsigned position) const;

            bool insertAtFront(const Type &element);

            bool insertAtBack(const Type &element) const;

            bool insertAt(const unsigned position, const Type $element) const;

            bool removeFromFront() const;

            bool removeFromBack() const;

            bool removeFrom(const unsigned position) const;

            Node<Type> getElementFrom(const unsigned position) const;

            Node<Type> getFirstElement() const;

            Node<Type> getLastElement() const;

        private:
            Node<Type> *_head;
            unsigned _length;
    };

    template<typename Type>
    bool LinkedList<Type>::insertAtFront(const Type &element)
    {
        /**
         * Allocate memory and assign address value to pointer node var;
         * 
         * Note that type is an unknown generic type which will be defined at build time.
         */
        Node<Type> *node = new Node<Type>(element);
        if (node == nullptr) {
            return false;
        }

        if (this->_head == nullptr) {
            this->_head = node;
            return true;
        }
        node->_next         = this->_head;
        this->_head->_prev  = node;
        this->_head         = node;

        return true;
    }
}