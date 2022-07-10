/**
 * @file    playlist.hpp
 * @author  Felícito Manzano (felicito.manzano@detektor.com.sv)
 * @brief   
 *          https://www.techiedelight.com/queue-implementation-cpp/
 * @version 0.1
 * @date    2020-11-19
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#ifndef __PLAYLIST_H
#define __PLAYLIST_H

    #include <iostream>
    #include <cstdlib>
    using namespace std;

    // define default capacity of the queue
    #define SIZE 10

    // Class for queue
    class queue
    {
        int *arr;   	// array to store queue elements
        int capacity;   // maximum capacity of the queue
        int front;  	// front points to front element in the queue (if any)
        int rear;   	// rear points to last element in the queue
        int count;  	// current size of the queue

    public:
        queue(int size = SIZE);	 // constructor
        ~queue();				   // destructor
        void dequeue();
        void enqueue(int x);
        int peek();
        int size();
        //void erase();
        bool isEmpty();
        bool isFull();
    };

#endif  //__PLAYLIST_H 
