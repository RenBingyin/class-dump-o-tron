//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PSHeaderFooterView.h"

@class PSSpecifier, UIActivityIndicatorView;

@interface GKSettingsSpinnerView : UIView <PSHeaderFooterView>
{
    PSSpecifier *_specifier;
    UIActivityIndicatorView *_spinnerView;
}

@property(retain, nonatomic) UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
- (void)layoutSubviews;
@property(readonly, nonatomic) PSSpecifier *specifier;
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (double)preferredHeightForWidth:(double)arg1;
- (void)dealloc;
- (id)initWithSpecifier:(id)arg1;

@end

