//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView;

@interface CKEditableCollectionViewCell : UICollectionViewCell
{
    _Bool _editing;
    UIImageView *_checkmark;
    struct CGRect _contentAlignmentRect;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _marginInsets;
}

@property(retain, nonatomic) UIImageView *checkmark; // @synthesize checkmark=_checkmark;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) struct UIEdgeInsets marginInsets; // @synthesize marginInsets=_marginInsets;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) struct CGRect contentAlignmentRect; // @synthesize contentAlignmentRect=_contentAlignmentRect;
- (void)updateCheckmarkImage;
@property(readonly, nonatomic) struct UIEdgeInsets contentAlignmentInsets;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (id)description;
- (void)dealloc;

@end
