//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct XRGraphPoint {
    unsigned long long _field1;
    float _field2;
    void *_field3;
};

struct XRPathAttribute {
    id _field1;
    id _field2;
    double _field3;
    double *_field4;
    double _field5;
    double _field6;
};

struct XRTimeRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

