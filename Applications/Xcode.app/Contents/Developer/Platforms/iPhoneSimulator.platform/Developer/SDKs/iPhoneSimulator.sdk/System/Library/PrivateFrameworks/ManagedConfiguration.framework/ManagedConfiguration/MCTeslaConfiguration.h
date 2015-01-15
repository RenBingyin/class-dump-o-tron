//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface MCTeslaConfiguration : NSObject
{
    _Bool _fetching;
    CDUnknownBlockType _callback;
    NSXPCConnection *_connection;
}

@property(nonatomic, getter=isFetching) _Bool fetching; // @synthesize fetching=_fetching;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)fetchConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchDidFailWithError:(id)arg1;
- (id)connectionError;
- (void)dealloc;
- (id)init;

@end

