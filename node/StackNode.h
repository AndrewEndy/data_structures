//
// Created by Endi on 09.04.2024.
//

#ifndef DATA_STRUCTURES_STACKNODE_H
#define DATA_STRUCTURES_STACKNODE_H
#include <memory>

namespace stack_node {
    template<typename T>
    struct StackNode {
        T data;
        std::unique_ptr<StackNode> next;
        StackNode(T data) : data{data}, next{nullptr} {};
    };
}
#endif //DATA_STRUCTURES_STACKNODE_H
