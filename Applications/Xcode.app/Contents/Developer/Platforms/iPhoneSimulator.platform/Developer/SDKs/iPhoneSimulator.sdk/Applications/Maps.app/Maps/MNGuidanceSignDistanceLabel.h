//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface MNGuidanceSignDistanceLabel : UIView
{
    NSString *_text;
    long long _textAlignment;
    UIColor *_textColor;
    UIColor *_accentColor;
    struct __CTFrame *_frame;
    int _framing;
    double _maximumWidth;
    NSString *_fontName;
    NSString *_digitsFontName;
    double _fontSize;
    double _digitsFontSize;
}

+ (id)stringAttributesWithFont:(struct __CTFont *)arg1 alignment:(long long)arg2 color:(id)arg3;
+ (id)attributedStringWithText:(id)arg1 font:(struct __CTFont *)arg2 digitsFont:(struct __CTFont *)arg3 alignment:(long long)arg4 color:(id)arg5;
@property(nonatomic) double digitsFontSize; // @synthesize digitsFontSize=_digitsFontSize;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) NSString *digitsFontName; // @synthesize digitsFontName=_digitsFontName;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property(nonatomic) int framing; // @synthesize framing=_framing;
@property(retain, nonatomic) UIColor *accentColor; // @synthesize accentColor=_accentColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (double)textWidthForSize:(struct CGSize)arg1;
@property(readonly, nonatomic) double textWidth;
- (void)clearCTFrame;
- (struct __CTFrame *)CTFrameForSize:(struct CGSize)arg1;
- (struct __CTFrame *)CTFrame;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

