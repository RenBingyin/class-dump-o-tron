//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PSHeaderFooterView.h"

@class GKLabel, GKTextStyle, NSString, PSSpecifier;

@interface GKSettingsAttributedFooterView : UIView <PSHeaderFooterView>
{
    PSSpecifier *_specifier;
    NSString *_text;
    GKTextStyle *_textStyle;
    GKLabel *_label;
}

@property(retain, nonatomic) GKLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) GKTextStyle *textStyle; // @synthesize textStyle=_textStyle;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (id)attributedStringForString:(id)arg1;
@property(readonly, nonatomic) GKTextStyle *defaultTextStyle;
- (void)layoutSubviews;
@property(readonly, nonatomic) PSSpecifier *specifier;
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (double)preferredHeightForWidth:(double)arg1;
- (void)dealloc;
- (id)initWithSpecifier:(id)arg1;

@end

