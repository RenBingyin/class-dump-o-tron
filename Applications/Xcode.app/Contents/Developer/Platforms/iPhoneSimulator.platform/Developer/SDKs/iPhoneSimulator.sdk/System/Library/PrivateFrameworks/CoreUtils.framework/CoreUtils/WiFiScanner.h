//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSSet;

@interface WiFiScanner : NSObject
{
    _Bool _started;
    NSMutableSet *_devices;
    _Bool _autoPoweredOn;
    NSObject<OS_dispatch_source> *_scanTimer;
    int _stopErr;
    unsigned int _scanFlags;
    NSObject<OS_dispatch_queue> *_queue;
    struct LogCategory *_ucat;
    CDUnknownBlockType _handler;
}

@property(copy) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property unsigned int scanFlags; // @synthesize scanFlags=_scanFlags;
@property struct LogCategory *logCategory; // @synthesize logCategory=_ucat;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_queue;
- (_Bool)_isUnconfiguredIE:(id)arg1;
- (void)_stop2;
- (void)_stop:(int)arg1;
- (void)stop;
- (void)start;
@property(readonly, copy) NSSet *devices;
- (void)dealloc;
- (id)init;

@end

