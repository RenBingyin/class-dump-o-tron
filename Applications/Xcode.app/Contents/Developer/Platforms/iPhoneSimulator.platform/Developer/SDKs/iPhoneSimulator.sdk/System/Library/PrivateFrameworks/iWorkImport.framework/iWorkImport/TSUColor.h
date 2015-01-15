//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "TSSPreset.h"
#import "TSSPresetSource.h"
#import "TSSThemeAsset.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TSUColor : NSObject <TSSPreset, TSSPresetSource, TSSThemeAsset, NSCopying>
{
    struct CGColor *mCGColor;
}

+ (id)brownColor;
+ (id)purpleColor;
+ (id)orangeColor;
+ (id)magentaColor;
+ (id)yellowColor;
+ (id)cyanColor;
+ (id)blueColor;
+ (id)greenColor;
+ (id)redColor;
+ (id)lightGrayColor;
+ (id)grayColor;
+ (id)whiteColor;
+ (id)blackColor;
+ (id)clearColor;
+ (id)randomColor;
+ (id)colorWithUIColor:(id)arg1;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)presetKinds;
+ (id)p_defaultPresetColors:(int)arg1;
@property(readonly) struct CGColor *CGColor; // @synthesize CGColor=mCGColor;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)newBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (_Bool)isNearlyWhite;
- (_Bool)isOpaque;
- (double)luminance;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)invertedColor;
- (id)grayscaleColor;
- (id)UIColor;
- (void)getRGBAComponents:(double *)arg1;
- (double)alphaComponent;
- (double)blueComponent;
- (double)greenComponent;
- (double)redComponent;
- (double)p_rgbComponentWithIndex:(unsigned char)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isAlmostEqualToColor:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithUIColor:(id)arg1;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (void)saveToMessage:(struct Color *)arg1;
- (id)initWithMessage:(const struct Color *)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (_Bool)isThemeEquivalent:(id)arg1;
@property(readonly, nonatomic) NSString *presetKind;
- (void)saveToArchive:(struct Color *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct Color *)arg1 unarchiver:(id)arg2;

@end

