//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct PerFileCost {
    struct PerLineCost _field1;
    struct unordered_map<unsigned int, PerFileCost::PerLineCost, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PerFileCost::PerLineCost>>> _field2;
};

struct PerLineCost {
    struct vector<double, std::__1::allocator<double>> _field1;
    double _field2;
};

struct __hash_node<std::__1::__hash_value_type<unsigned int, PerFileCost::PerLineCost>, void *>;

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, PerFileCost::PerLineCost>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, PerFileCost::PerLineCost>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, PerFileCost::PerLineCost>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, PerFileCost::PerLineCost>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<unsigned int, PerFileCost::PerLineCost>, void *> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, PerFileCost::PerLineCost>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, PerFileCost::PerLineCost>, void *>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unordered_map<unsigned int, PerFileCost::PerLineCost, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PerFileCost::PerLineCost>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned int, PerFileCost::PerLineCost>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, PerFileCost::PerLineCost>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, PerFileCost::PerLineCost>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, PerFileCost::PerLineCost>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, PerFileCost::PerLineCost>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, PerFileCost::PerLineCost>, void *>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, PerFileCost::PerLineCost>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, PerFileCost::PerLineCost>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, PerFileCost::PerLineCost>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<unsigned int, PerFileCost::PerLineCost>, void *> *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, PerFileCost::PerLineCost>, std::__1::hash<unsigned int>, true>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, PerFileCost::PerLineCost>, std::__1::equal_to<unsigned int>, true>> {
            float _field1;
        } _field4;
    } _field1;
};

struct vector<double, std::__1::allocator<double>> {
    double *_field1;
    double *_field2;
    struct __compressed_pair<double *, std::__1::allocator<double>> {
        double *_field1;
    } _field3;
};

