//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSDInsertionContext : NSObject
{
}

+ (id)dragInsertionContextWithPreferredCenter:(struct CGPoint)arg1 required:(_Bool)arg2 shouldEndEditing:(_Bool)arg3 fromDragToInsertController:(_Bool)arg4 insertFloating:(_Bool)arg5;
+ (id)dragInsertionContextWithPreferredCenter:(struct CGPoint)arg1 required:(_Bool)arg2 fromDragToInsertController:(_Bool)arg3 insertFloating:(_Bool)arg4;
+ (id)nonInteractiveFloatingInsertionContext;
+ (id)nonInteractiveInsertionContext;
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive;
@property(readonly, nonatomic) _Bool fromDragToInsertController;
@property(readonly, nonatomic) _Bool insertFromDrag;
@property(readonly, nonatomic) _Bool insertFloating;
@property(readonly, nonatomic) _Bool shouldEndEditing;
@property(readonly, nonatomic) struct CGPoint preferredCenter;
@property(readonly, nonatomic, getter=isPreferredCenterRequired) _Bool preferredCenterRequired;
@property(readonly, nonatomic) _Bool hasPreferredCenter;
- (id)init;

@end

