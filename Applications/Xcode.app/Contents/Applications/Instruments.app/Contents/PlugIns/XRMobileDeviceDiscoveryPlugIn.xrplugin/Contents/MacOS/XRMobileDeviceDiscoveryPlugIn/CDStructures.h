//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct _AMDServiceConnection;

struct _AMDevice;

struct _CSTypeRef {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _XRDeviceTimeInfo {
    unsigned long long _field1;
    unsigned long long _field2;
    struct mach_timebase_info _field3;
};

struct mach_timebase_info {
    unsigned int _field1;
    unsigned int _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    struct _AMDevice *deviceRef;
    struct _AMDServiceConnection *notificationRef;
} CDStruct_fe0e0a34;

