//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKClientProxy, GKDataTransport;

@interface GKService : NSObject
{
    GKClientProxy *_clientProxy;
    GKDataTransport *_transport;
}

+ (Class)interfaceClass;
+ (unsigned long long)requiredEntitlements;
+ (id)serviceForBundleID:(id)arg1;
+ (id)serviceWithTransport:(id)arg1 forClient:(id)arg2;
@property(retain, nonatomic) GKDataTransport *transport; // @synthesize transport=_transport;
@property(retain, nonatomic) GKClientProxy *clientProxy; // @synthesize clientProxy=_clientProxy;
- (_Bool)requiresAuthenticationForSelector:(SEL)arg1;
- (_Bool)requiresAuthentication;
- (void)dealloc;
- (id)initWithTransport:(id)arg1 forClient:(id)arg2;

@end

