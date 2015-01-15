//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

#import "GSProtocol.h"

@class NSError, NSObject<GSProtocol>, NSObject<OS_dispatch_group>;

@interface GSDaemonProxySync : NSProxy <GSProtocol>
{
    NSObject<GSProtocol> *_proxy;
    NSObject<OS_dispatch_group> *_group;
    NSError *_error;
    id _result;
    int _recursive;
}

+ (id)proxy;
@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (id)waitForResultWithCFError:(struct __CFError **)arg1;
- (id)waitForResultWithError:(id *)arg1;
- (void)handleObjResult:(id)arg1 error:(id)arg2;
- (void)handleBoolResult:(_Bool)arg1 error:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithXPCObject:(id)arg1;

@end

