//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface GEONavigationListener : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _routeSummaryUpdatedHandler;
    CDUnknownBlockType _guidanceStateUpdatedHandler;
}

@property(copy, nonatomic) CDUnknownBlockType guidanceStateUpdatedHandler; // @synthesize guidanceStateUpdatedHandler=_guidanceStateUpdatedHandler;
@property(copy, nonatomic) CDUnknownBlockType routeSummaryUpdatedHandler; // @synthesize routeSummaryUpdatedHandler=_routeSummaryUpdatedHandler;
- (void)_closeConnection;
- (void)_createConnection;
- (void)_request:(id)arg1;
- (void)requestGuidanceState;
- (void)requestRouteSummary;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

