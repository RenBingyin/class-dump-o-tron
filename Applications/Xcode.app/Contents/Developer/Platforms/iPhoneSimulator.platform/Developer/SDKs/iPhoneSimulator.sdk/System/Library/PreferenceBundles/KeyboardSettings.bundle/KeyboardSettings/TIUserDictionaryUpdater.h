//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface TIUserDictionaryUpdater : NSObject
{
    NSXPCConnection *_connection;
}

@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (_Bool)canValidateLocally;
- (void)performTransaction:(id)arg1;
- (void)performTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didPerformTransaction:(id)arg1 success:(_Bool)arg2;
- (void)applicationResumed:(id)arg1;
- (void)applicationSuspended:(id)arg1;
- (void)closeConnectionToKBD;
- (void)openConnectionToKBD;
- (id)init;
- (void)dealloc;

@end

