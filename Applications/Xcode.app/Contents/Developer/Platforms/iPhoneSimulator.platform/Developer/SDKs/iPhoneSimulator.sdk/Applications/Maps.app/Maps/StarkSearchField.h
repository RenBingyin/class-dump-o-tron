//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@class StarkSearchBarView;

__attribute__((visibility("hidden")))
@interface StarkSearchField : UITextField
{
    StarkSearchBarView *_owner;
}

@property(nonatomic) __weak StarkSearchBarView *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resetDelegateIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;

@end

