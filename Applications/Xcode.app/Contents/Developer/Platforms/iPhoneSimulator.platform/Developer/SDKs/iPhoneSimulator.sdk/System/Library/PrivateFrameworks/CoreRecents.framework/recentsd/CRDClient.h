//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection, _CRRecentsLibrary;

@interface CRDClient : NSObject
{
    NSXPCConnection *_connection;
    _CRRecentsLibrary *_library;
}

@property(readonly, nonatomic) _CRRecentsLibrary *library; // @synthesize library=_library;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (_Bool)hasEntitlement:(id)arg1;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 library:(id)arg2;

@end

