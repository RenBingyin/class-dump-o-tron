//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SearchBar.h"

@class UIButton;

__attribute__((visibility("hidden")))
@interface SearchBarVariantCompact : SearchBar
{
    _Bool _editing;
    UIButton *_cancelButton;
}

- (void).cxx_destruct;
- (void)_layoutSubviewsWithAnimationDuration:(double)arg1;
- (void)layoutSubviews;
- (_Bool)isEditModeEnabled;
- (void)_updateLayoutMargins;
- (void)setEditModeEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (id)customTopBarView;
- (_Bool)resignFirstResponder;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_createCancelButtonIfNecessary;
- (void)performInitialSetup;

@end

