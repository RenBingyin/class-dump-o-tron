//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIResponder;

@interface SKUIComposeTextFieldListView : UIView
{
    id <SKUIComposeTextFieldListViewDelegate> _delegate;
    NSMutableArray *_fields;
    _Bool _isValid;
    long long _style;
}

@property(nonatomic) __weak id <SKUIComposeTextFieldListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long composeReviewStyle; // @synthesize composeReviewStyle=_style;
- (void).cxx_destruct;
- (void)_updateValidity;
- (void)composeTextFieldValidityChanged:(id)arg1;
- (id)textForFieldAtIndex:(unsigned long long)arg1;
- (void)reloadData;
- (void)layoutSubviews;
- (_Bool)isValid;
@property(readonly, nonatomic) UIResponder *initialFirstResponder;
@property(readonly, nonatomic) double height;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

