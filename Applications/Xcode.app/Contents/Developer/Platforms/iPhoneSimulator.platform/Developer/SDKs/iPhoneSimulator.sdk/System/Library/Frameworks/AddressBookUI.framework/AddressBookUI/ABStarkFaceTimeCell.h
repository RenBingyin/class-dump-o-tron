//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABContactCell.h>

@class ABTransportButton, NSDictionary, UILabel;

@interface ABStarkFaceTimeCell : ABContactCell
{
    id <ABPropertyCellDelegate> _delegate;
    NSDictionary *_labelTextAttributes;
    UILabel *_faceTimeLabel;
    ABTransportButton *_transportIcon;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(readonly, nonatomic) ABTransportButton *transportIcon; // @synthesize transportIcon=_transportIcon;
@property(retain, nonatomic) UILabel *faceTimeLabel; // @synthesize faceTimeLabel=_faceTimeLabel;
@property(copy, nonatomic) NSDictionary *labelTextAttributes; // @synthesize labelTextAttributes=_labelTextAttributes;
@property(nonatomic) id <ABPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)transportButtonClicked:(id)arg1;
- (void)performDefaultAction;
- (id)constantConstraints;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)tintColorDidChange;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

