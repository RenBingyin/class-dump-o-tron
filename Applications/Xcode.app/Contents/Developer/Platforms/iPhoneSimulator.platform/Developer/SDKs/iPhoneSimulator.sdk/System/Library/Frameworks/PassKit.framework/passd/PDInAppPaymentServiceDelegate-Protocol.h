//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, NSXPCListenerEndpoint, PKPaymentRequest;

@protocol PDInAppPaymentServiceDelegate <NSObject>
- (void)retrievePaymentListenerEndpointForHostIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSXPCListenerEndpoint *))arg2;
- (void)registerPaymentListenerEndpoint:(NSXPCListenerEndpoint *)arg1 forHostIdentifier:(NSString *)arg2 processIdentifier:(int)arg3 completion:(void (^)(_Bool))arg4;
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(PKPaymentRequest *)arg1 forHostIdentifier:(NSString *)arg2 processIdentifier:(int)arg3 orientation:(NSNumber *)arg4 completion:(void (^)(_Bool))arg5;
@end
