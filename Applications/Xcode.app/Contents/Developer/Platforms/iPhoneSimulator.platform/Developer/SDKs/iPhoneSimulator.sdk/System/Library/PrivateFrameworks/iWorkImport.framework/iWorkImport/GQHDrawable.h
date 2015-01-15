//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GQDrawablesGenerator.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface GQHDrawable : NSObject <GQDrawablesGenerator>
{
}

+ (Class)beginTable:(id)arg1;
+ (int)endDrawables:(id)arg1;
+ (int)handleInlineDrawable:(id)arg1 htmlState:(id)arg2;
+ (int)handleFloatingDrawable:(id)arg1 htmlState:(id)arg2;
+ (void)doneGeneratingDrawable:(id)arg1 htmlState:(id)arg2;
+ (void)aboutToGenerateDrawable:(id)arg1 htmlState:(id)arg2;
+ (int)handleDrawable:(id)arg1 state:(id)arg2;
+ (int)beginDrawables:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

