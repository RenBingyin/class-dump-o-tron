//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBHITabView, IBHIView, NSString;

@interface IBHITabViewItem : NSObject
{
    NSString *title;
    IBHITabView *tabView;
    IBHIView *view;
    BOOL enabled;
    int contentResID;
}

- (void)customizeView:(struct OpaqueControlRef *)arg1;
- (id)dictionaryRepresentation;
- (int)index;
- (void)setContentResID:(int)arg1;
- (int)contentResID;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (id)tabView;
- (void)setTabView:(id)arg1;
- (struct ControlTabEntry)tabEntry;
- (id)view;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 andView:(id)arg2;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

