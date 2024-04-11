//
// Created by Endi on 09.04.2024.
//

#ifndef DATA_STRUCTURES_QUEUENODA_H
#define DATA_STRUCTURES_QUEUENODA_H
#include <memory>

namespace queue_node {
    template<typename T>
    struct QueueNode {
        T data;
        std::shared_ptr<QueueNode> next;
        std::weak_ptr<QueueNode> previous;

        QueueNode(T data) : data{data} {}
    };
}
#endif //DATA_STRUCTURES_QUEUENODA_H
