//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, UIDynamicAnimator;

@interface UIDynamicBehavior : NSObject
{
    UIDynamicAnimator *_context;
    NSMutableArray *_items;
    NSMutableArray *_behaviors;
    NSMutableArray *_addedBehaviors;
    _Bool __isPrimitiveBehavior;
    CDUnknownBlockType _action;
}

+ (void)initialize;
@property(nonatomic, setter=_isPrimitiveBehavior:) _Bool _isPrimitiveBehavior; // @synthesize _isPrimitiveBehavior=__isPrimitiveBehavior;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
- (id)description;
- (id)_itemsDescription;
- (void)_changedParameterForBody:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *childBehaviors;
- (void)removeChildBehavior:(id)arg1;
- (void)addChildBehavior:(id)arg1;
- (_Bool)allowsAnimatorToStop;
- (void)_dissociate;
- (void)_associate;
- (void)willMoveToAnimator:(id)arg1;
- (void)_reevaluate:(unsigned long long)arg1;
- (void)_step;
- (void)dealloc;
- (id)init;
- (id)_init:(_Bool)arg1;
- (id)items;
@property(readonly, nonatomic) UIDynamicAnimator *dynamicAnimator;
- (id)_context;
- (id)_items;
- (void)_setItems:(id)arg1;
- (void)_setContext:(id)arg1;

@end

