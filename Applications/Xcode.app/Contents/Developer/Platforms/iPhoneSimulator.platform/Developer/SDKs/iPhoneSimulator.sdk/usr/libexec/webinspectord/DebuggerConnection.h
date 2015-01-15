//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DebuggerConnection : NSObject
{
    id <DebuggerConnectionDelegate> _delegate;
    NSString *_tag;
}

@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) id <DebuggerConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)_dispatchMessage:(id)arg1;
- (void)_reportClose;
- (void)sendMessage:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

