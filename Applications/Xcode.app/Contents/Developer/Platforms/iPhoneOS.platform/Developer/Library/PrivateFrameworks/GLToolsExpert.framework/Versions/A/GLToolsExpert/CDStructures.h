//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct Argument {
    void *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned short _field5;
    unsigned short _field6;
};

struct CoreFunction {
    unsigned int _field1;
    unsigned int _field2;
    unsigned short _field3;
    unsigned short _field4;
    union {
        unsigned long long _field1;
        unsigned long long _field2;
    } _field5;
    struct Argument _field6;
    struct Argument _field7[16];
    unsigned int _field8;
    unsigned int _field9;
    void *_field10;
    void *_field11;
};

struct DYGLExpertFindingPrototype {
    int _field1;
    unsigned int _field2;
    id _field3;
    int _field4;
    id _field5;
    id _field6;
};

struct Function {
    struct CoreFunction _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long *_field4;
    unsigned short _field5;
    unsigned short _field6;
    int _field7;
    void *_field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    struct Function *_field13;
    void *_field14;
};

struct __hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>;

struct __hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::bitset<4>>, void *>;

struct bitset<4> {
    unsigned long long __first_;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::bitset<4>>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::bitset<4>>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::bitset<4>>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::bitset<4>>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::bitset<4>>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::bitset<4>>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::bitset<4>>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unordered_map<unsigned int, unsigned int, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unsigned int>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::hash<unsigned int>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::equal_to<unsigned int>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_map<unsigned long long, std::__1::bitset<4>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::bitset<4>>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::bitset<4>>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::bitset<4>>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::bitset<4>>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::bitset<4>>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::bitset<4>>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::bitset<4>>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::bitset<4>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::bitset<4>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::bitset<4>>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::bitset<4>>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::bitset<4>>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::bitset<4>>, std::__1::equal_to<unsigned long long>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct bitset<4> {
    unsigned long long __first_;
} bitset_dc343b9a;

