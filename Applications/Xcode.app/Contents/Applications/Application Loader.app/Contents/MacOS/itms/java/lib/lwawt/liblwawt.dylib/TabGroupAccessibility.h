//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <lwawt/JavaComponentAccessibility.h>

@interface TabGroupAccessibility : JavaComponentAccessibility
{
    long long _numTabs;
}

- (id)initWithParent:(id)arg1 withEnv:(const struct JNINativeInterface_ **)arg2 withAccessible:(struct _jobject *)arg3 withIndex:(int)arg4 withView:(id)arg5 withJavaRole:(id)arg6;
- (id)initializeAttributeNamesWithEnv:(const struct JNINativeInterface_ **)arg1;
- (id)currentTabWithEnv:(const struct JNINativeInterface_ **)arg1 withAxContext:(struct _jobject *)arg2;
- (id)tabControlsWithEnv:(const struct JNINativeInterface_ **)arg1 withTabGroupAxContext:(struct _jobject *)arg2 withTabCode:(long long)arg3 allowIgnored:(BOOL)arg4;
- (id)contentsWithEnv:(const struct JNINativeInterface_ **)arg1 withTabGroupAxContext:(struct _jobject *)arg2 withTabCode:(long long)arg3 allowIgnored:(BOOL)arg4;
- (id)accessibilityTabsAttribute;
- (BOOL)accessibilityIsTabsAttributeSettable;
- (long long)numTabs;
- (id)accessibilityContentsAttribute;
- (BOOL)accessibilityIsContentsAttributeSettable;
- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (void)accessibilitySetValueAttribute:(id)arg1;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;

@end

