//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct NSMutableArray {
    Class _field1;
};

struct XRSQLQueryDefinition {
    char *_field1;
    unsigned char _field2;
    struct XRSQLSchemaColumn _field3[0];
};

struct XRSQLSchemaColumn {
    int _field1;
    char *_field2;
};

struct XRSQLTableDefinition {
    struct __CFString *_field1;
    unsigned char _field2;
    struct XRSQLSchemaColumn _field3[0];
};

struct XRSpaceDataToken {
    Class _field1;
};

struct XRTimeRange {
    unsigned long long start;
    unsigned long long length;
};

struct XRTimeValue {
    unsigned long long value;
    unsigned long long units;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct bitset<23> {
    unsigned long long __first_;
};

struct sqlite3_index_constraint {
    int _field1;
    unsigned char _field2;
    unsigned char _field3;
    int _field4;
};

struct sqlite3_index_constraint_usage {
    int _field1;
    unsigned char _field2;
};

struct sqlite3_module {
    int _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownFunctionPointerType _field13;
    CDUnknownFunctionPointerType _field14;
    CDUnknownFunctionPointerType _field15;
    CDUnknownFunctionPointerType _field16;
    CDUnknownFunctionPointerType _field17;
    CDUnknownFunctionPointerType _field18;
    CDUnknownFunctionPointerType _field19;
    CDUnknownFunctionPointerType _field20;
    CDUnknownFunctionPointerType _field21;
    CDUnknownFunctionPointerType _field22;
    CDUnknownFunctionPointerType _field23;
};

#pragma mark Named Unions

union XRSQLValueScalarUnion {
    long long asInt;
    double asFloat;
};
