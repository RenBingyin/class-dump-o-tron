//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKit/PKPaymentOptionGroupItemCell.h>

@class PKPassSnapshotter, UIImageView, UILabel;

@interface PKPaymentOptionGroupItemCardCell : PKPaymentOptionGroupItemCell
{
    UILabel *_displayLabel;
    UILabel *_censoredPANLabel;
    UIImageView *_cardArtView;
    PKPassSnapshotter *_passSnapshotter;
}

@property(retain, nonatomic) PKPassSnapshotter *passSnapshotter; // @synthesize passSnapshotter=_passSnapshotter;
- (void)layoutSubviews;
- (struct CGRect)_censoredPANLabelFrame;
- (struct CGRect)_displayLabelFrame;
- (struct CGRect)_cardArtFrame;
- (void)_updateCellContent;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;

@end

