//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABPropertySimpleCell.h>

@class ABTransportButton, UIColor, UIImageView;

@interface ABPropertySimpleTransportCell : ABPropertySimpleCell
{
    ABTransportButton *_transportIcon1;
    ABTransportButton *_transportIcon2;
    UIImageView *_starView;
    _Bool _allowsActions;
    UIColor *_actionsColor;
}

@property(retain, nonatomic) UIColor *actionsColor; // @synthesize actionsColor=_actionsColor;
@property(nonatomic) _Bool allowsActions; // @synthesize allowsActions=_allowsActions;
- (void)transportButtonClicked:(id)arg1;
- (_Bool)shouldPerformDefaultAction;
- (id)variableConstraints;
- (id)rightMostView;
- (void)updateStarIcon;
- (void)updateTransportButtons;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateWithPropertyItem:(id)arg1;
- (void)setCardGroupItem:(id)arg1;
@property(readonly, nonatomic) _Bool shouldShowStar;
@property(readonly, nonatomic) UIImageView *standardStarView;
- (void)_updateStarImageForView:(id)arg1;
@property(readonly, nonatomic) ABTransportButton *transportIcon2;
@property(readonly, nonatomic) ABTransportButton *transportIcon1;
@property(readonly, nonatomic) ABTransportButton *standardTransportIcon;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

