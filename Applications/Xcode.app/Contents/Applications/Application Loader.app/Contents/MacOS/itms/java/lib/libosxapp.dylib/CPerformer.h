//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CPerformer : NSObject
{
    id fTarget;
    SEL fSelector;
    id fArg;
    BOOL fWait;
}

- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 arg:(id)arg3;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 arg:(id)arg3 wait:(BOOL)arg4;
- (void)dealloc;
- (void)perform;
- (void)performCompatible;
- (void)_performCompatible:(id)arg1;

@end
