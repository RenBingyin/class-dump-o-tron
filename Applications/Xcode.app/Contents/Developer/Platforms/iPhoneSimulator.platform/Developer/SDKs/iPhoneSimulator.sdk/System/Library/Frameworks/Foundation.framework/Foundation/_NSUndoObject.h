//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _NSUndoObject : NSObject
{
    _NSUndoObject *next;
    _NSUndoObject *previous;
    id _target;
}

- (id)target;
- (void)invoke;
- (_Bool)isEndMark;
- (_Bool)isBeginMark;
- (id)initWithTarget:(id)arg1;
- (id)init;

@end

