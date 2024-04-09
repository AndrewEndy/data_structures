//
// Created by Endi on 08.04.2024.
//

#ifndef DATA_STRUCTURES_SINGLENODE_H
#define DATA_STRUCTURES_SINGLENODE_H
#include <memory>

namespace single_node {
    template<typename T>
    struct SingleNode {
        T data;
        std::unique_ptr<SingleNode> next;
        SingleNode(T data) : data{data}, next{nullptr} {};
    };
}
#endif //DATA_STRUCTURES_SINGLENODE_H
