//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSArray, NSString, SKUIColorScheme, SKUISegmentedControl;

@interface SKUIPillsControl : UIControl
{
    SKUIColorScheme *_colorScheme;
    struct UIEdgeInsets _contentInset;
    long long _maximumNumberOfVisiblePills;
    NSString *_moreListTitle;
    SKUISegmentedControl *_segmentedControl;
    NSArray *_titles;
}

@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(copy, nonatomic) NSString *moreListTitle; // @synthesize moreListTitle=_moreListTitle;
@property(nonatomic) long long maximumNumberOfVisiblePills; // @synthesize maximumNumberOfVisiblePills=_maximumNumberOfVisiblePills;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(copy, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (void).cxx_destruct;
- (void)_segmentedControlAction:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(nonatomic) long long selectedIndex;
@property(readonly, nonatomic) struct CGRect selectedPillFrame;
- (void)reloadPills;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

