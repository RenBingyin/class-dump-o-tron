//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IKLockupElement, MPUContentSizeLayoutConstraint, MPUExtrasConstrainedArtworkContainerView, NSLayoutConstraint, UILabel, UIView;

@interface MPUExtrasGridCollectionViewCell : UICollectionViewCell
{
    UIView *_spacerView;
    NSLayoutConstraint *_artworkContainerWidthConstraint;
    NSLayoutConstraint *_artworkContainerHeightConstraint;
    MPUContentSizeLayoutConstraint *_topLineHeight;
    MPUContentSizeLayoutConstraint *_subtitleLineHeight;
    MPUContentSizeLayoutConstraint *_spacerHeight;
    NSLayoutConstraint *_spacerTop;
    IKLockupElement *_lockupElement;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    MPUExtrasConstrainedArtworkContainerView *_artworkContainer;
}

@property(readonly, nonatomic) MPUExtrasConstrainedArtworkContainerView *artworkContainer; // @synthesize artworkContainer=_artworkContainer;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak IKLockupElement *lockupElement; // @synthesize lockupElement=_lockupElement;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)configureForLockup:(id)arg1 cellStyle:(id)arg2;
- (void)configureForLockup:(id)arg1 cellStyle:(id)arg2 withSizing:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

