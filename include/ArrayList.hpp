namespace Zaioll
{
    template<typename Type>
    class ArrayList
    {
        public:
            ArrayList<Type>(const unsigned size)
                : _maxSize { size }, _size { 0 }
            {
                this->_list = new Type[this->_maxSize];
            }

            /**
             * @brief Destroy the Array List object
             */
            ~ArrayList();

            /**
             * @brief Get the Size object
             * 
             * @return unsigned 
             */
            unsigned getSize() const;

            /**
             * @brief Get the Max Size object
             * 
             * @return unsigned 
             */
            unsigned getMaxSize() const;

            /**
             * @brief Insert Element at position
             * 
             * @param element 
             * @param position 
             * @return true 
             * @return false 
             */
            bool insertAt(const Type &element, const unsigned position);

            /**
             * @brief Insert element at end.
             * 
             */
            bool insertEnd(const Type $element);

            /**
             * @brief 
             * 
             * @param position 
             * @return true 
             * @return false 
             */
            bool removeAt(unsigned position);

            /**
             * @brief 
             * 
             */
            void clearList();

            /**
             * @brief 
             * 
             * @param position 
             * @return Type 
             */
            Type retrieveAt(unsigned position) const;

            /**
             * @return true 
             * @return false 
             */
            bool isEmpty() const;
            
            /**
             * @brief 
             * 
             * @return true 
             * @return false 
             */
            bool isFull() const;

            /**
             * @brief 
             * 
             */
            void print() const;

            /**
             * @brief 
             * 
             * @param location 
             * @param item 
             * @return true 
             * @return false 
             */
            bool isItemAtEqual(unsigned location, const Type &item) const;

            /**
             * @brief
             *
             * @return true
             * @return false
             */
            bool operator==(const ArrayList<Type> &) const;

            /**
             * @brief
             *
             * @return true
             * @return false
             */
            bool operator!=(const ArrayList<Type> &) const;

            /**
             * @brief
             *
             * @return ArrayList<Type>
             */
            ArrayList<Type> operator=(const ArrayList<Type> &) const;

        private:
            const unsigned _maxSize;
            unsigned _size;
            Type *_list;
    };

    template<typename Type>
    bool ArrayList<Type>::operator==(const ArrayList<Type> &right) const
    {
        return false;
    }

    template<typename Type>
    bool ArrayList<Type>::operator!=(const ArrayList<Type> &right) const
    {
        return false;
    }

    template<typename Type>
    ArrayList<Type>::~ArrayList()
    {
    }

    template<typename Type>
    void ArrayList<Type>::clearList()
    {
    }

    template<typename Type>
    unsigned ArrayList<Type>::getMaxSize() const
    {
        return 0;
    }

    template<typename Type>
    unsigned ArrayList<Type>::getSize() const
    {
        return 0;
    }

    template<typename Type>
    bool ArrayList<Type>::insertAt(const Type &element, unsigned position)
    {
        return false;
    }

    template<typename Type>
    bool ArrayList<Type>::insertEnd(const Type $element)
    {
        return false;
    }

    template<typename Type>
    bool ArrayList<Type>::removeAt(const unsigned position)
    {
        return false;
    }

    template<typename Type>
    bool ArrayList<Type>::isEmpty() const
    {
        return false;
    }

    template<typename Type>
    bool ArrayList<Type>::isFull() const
    {
        return false;
    }

    template<typename Type>
    bool ArrayList<Type>::isItemAtEqual(unsigned position, const Type &item) const
    {
        return false;
    }

    template<typename Type>
    Type ArrayList<Type>::retrieveAt(unsigned position) const
    {
        return 0;
    }

    template<typename Type>
    void ArrayList<Type>::print() const
    {
    }

}