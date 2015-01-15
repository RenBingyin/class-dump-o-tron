//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class GKLabel, NSLayoutConstraint, UIActivityIndicatorView, UICollectionView;

@interface GKShowMoreView : UICollectionReusableView
{
    _Bool _loading;
    _Bool _showShowAll;
    SEL _showMoreAction;
    double _textAlignmentOffset;
    GKLabel *_label;
    long long _sectionIndex;
    NSLayoutConstraint *_horizontalContraint;
    NSLayoutConstraint *_verticalContraint;
    long long _numberToShow;
    UICollectionView *_collectionView;
    UIActivityIndicatorView *_spinner;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) long long numberToShow; // @synthesize numberToShow=_numberToShow;
@property(nonatomic) _Bool showShowAll; // @synthesize showShowAll=_showShowAll;
@property(retain, nonatomic) NSLayoutConstraint *verticalContraint; // @synthesize verticalContraint=_verticalContraint;
@property(retain, nonatomic) NSLayoutConstraint *horizontalContraint; // @synthesize horizontalContraint=_horizontalContraint;
@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(retain, nonatomic) GKLabel *label; // @synthesize label=_label;
@property(nonatomic) double textAlignmentOffset; // @synthesize textAlignmentOffset=_textAlignmentOffset;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) SEL showMoreAction; // @synthesize showMoreAction=_showMoreAction;
- (void)dealloc;
- (void)prepareForReuse;
- (void)updateLabel;
- (void)applyLayoutAttributes:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

