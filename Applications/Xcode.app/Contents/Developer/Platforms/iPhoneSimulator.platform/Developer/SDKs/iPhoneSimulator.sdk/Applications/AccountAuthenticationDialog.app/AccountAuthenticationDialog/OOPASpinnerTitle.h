//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UILabel;

@interface OOPASpinnerTitle : UIView
{
    UILabel *_titleView;
    UIActivityIndicatorView *_spinner;
}

- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1;

@end

