//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNAction.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SCNActionGroup : SCNAction
{
    struct SCNCActionGroup *_mycaction;
    NSArray *_actions;
}

+ (id)groupWithActions:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (_Bool)finished;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isCustom;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

