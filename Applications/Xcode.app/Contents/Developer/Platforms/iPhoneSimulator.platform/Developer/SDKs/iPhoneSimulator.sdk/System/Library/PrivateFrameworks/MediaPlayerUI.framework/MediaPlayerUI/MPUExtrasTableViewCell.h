//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class IKListItemLockupElement, MPUContentSizeLayoutConstraint, MPUExtrasConstrainedArtworkContainerView, NSArray, NSLayoutConstraint, UILabel, UIView;

@interface MPUExtrasTableViewCell : UITableViewCell
{
    MPUExtrasConstrainedArtworkContainerView *_artworkContainer;
    UIView *_textContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSLayoutConstraint *_minimumHeightConstraint;
    NSArray *_topConstraints;
    NSArray *_bottomConstraints;
    NSLayoutConstraint *_leadingViewConstraint;
    NSLayoutConstraint *_artworkSpacerHeightConstraint;
    NSLayoutConstraint *_textSpacerHeightConstraint;
    NSLayoutConstraint *_artworkWidthConstraint;
    NSLayoutConstraint *_artworkHeightConstraint;
    NSLayoutConstraint *_textLeadingConstraint;
    NSLayoutConstraint *_textTrailingConstraint;
    NSLayoutConstraint *_topLabelConstraint;
    MPUContentSizeLayoutConstraint *_subtitleBaselineConstraint;
    NSLayoutConstraint *_bottomLabelConstraint;
    IKListItemLockupElement *_element;
}

@property(nonatomic) IKListItemLockupElement *element; // @synthesize element=_element;
@property(readonly, nonatomic) MPUExtrasConstrainedArtworkContainerView *artworkContainerView; // @synthesize artworkContainerView=_artworkContainer;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configureForListItemLockupElement:(id)arg1 wide:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

