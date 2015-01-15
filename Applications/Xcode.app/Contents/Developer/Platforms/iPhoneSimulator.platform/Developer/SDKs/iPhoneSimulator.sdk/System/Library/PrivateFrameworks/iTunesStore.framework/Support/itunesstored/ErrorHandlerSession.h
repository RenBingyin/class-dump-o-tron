//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

@interface ErrorHandlerSession : NSObject
{
    long long _sessionID;
    NSMutableDictionary *_sessionProperties;
}

@property(copy, nonatomic) NSDictionary *sessionProperties; // @synthesize sessionProperties=_sessionProperties;
@property(readonly, nonatomic) long long sessionIdentifier; // @synthesize sessionIdentifier=_sessionID;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)valueForSessionProperty:(id)arg1;
- (void)setValue:(id)arg1 forSessionProperty:(id)arg2;
- (void)dealloc;
- (id)init;

@end

