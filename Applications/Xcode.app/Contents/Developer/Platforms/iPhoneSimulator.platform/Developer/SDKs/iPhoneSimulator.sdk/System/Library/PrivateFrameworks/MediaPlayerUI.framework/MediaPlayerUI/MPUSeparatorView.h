//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface MPUSeparatorView : UIView
{
    double _leftMarginWidth;
    UIColor *_marginColor;
    double _rightMarginWidth;
    UIColor *_separatorColor;
}

@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) double rightMarginWidth; // @synthesize rightMarginWidth=_rightMarginWidth;
@property(retain, nonatomic) UIColor *marginColor; // @synthesize marginColor=_marginColor;
@property(nonatomic) double leftMarginWidth; // @synthesize leftMarginWidth=_leftMarginWidth;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

