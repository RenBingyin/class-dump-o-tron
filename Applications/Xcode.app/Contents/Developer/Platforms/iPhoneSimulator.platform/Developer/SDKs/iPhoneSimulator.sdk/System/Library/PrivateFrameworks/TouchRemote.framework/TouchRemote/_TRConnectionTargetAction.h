//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface _TRConnectionTargetAction : NSObject
{
    SEL _action;
    NSObject<OS_dispatch_queue> *_queue;
    id _target;
}

@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 queue:(id)arg3;

@end

