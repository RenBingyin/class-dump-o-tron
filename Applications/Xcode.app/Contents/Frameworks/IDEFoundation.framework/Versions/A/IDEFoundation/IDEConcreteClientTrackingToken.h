//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEClientTrackingToken.h"

@class DVTSystemActivityToken, IDEConcreteClientTracker, NSString;

@interface IDEConcreteClientTrackingToken : NSObject <IDEClientTrackingToken>
{
    NSString *_clientName;
    CDUnknownBlockType _cancellationBlock;
    BOOL _hasUnregistered;
    IDEConcreteClientTracker *_clientTracker;
    DVTSystemActivityToken *_systemActivityToken;
}

@property(retain) DVTSystemActivityToken *systemActivityToken; // @synthesize systemActivityToken=_systemActivityToken;
@property(readonly) NSString *clientName; // @synthesize clientName=_clientName;
- (void).cxx_destruct;
- (void)cancelClient;
- (id)initWithClientName:(id)arg1 clientTracker:(id)arg2 cancellationBlock:(CDUnknownBlockType)arg3;
@property(readonly, copy) NSString *description;
- (void)unregisterClient;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
