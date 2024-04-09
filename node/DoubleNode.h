//
// Created by Endi on 09.04.2024.
//

#ifndef DATA_STRUCTURES_DOUBLENODE_H
#define DATA_STRUCTURES_DOUBLENODE_H
#include <memory>

namespace double_node {
    template<typename T>
    struct DoubleNode {
        T data;
        std::shared_ptr<DoubleNode> next;
        std::weak_ptr<DoubleNode> previous;

        DoubleNode(T data) : data{data} {}
    };
}
#endif //DATA_STRUCTURES_DOUBLENODE_H
