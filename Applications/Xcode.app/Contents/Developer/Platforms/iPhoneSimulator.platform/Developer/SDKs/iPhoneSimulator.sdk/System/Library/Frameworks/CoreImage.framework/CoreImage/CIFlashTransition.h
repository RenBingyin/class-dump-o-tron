//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIFlashTransition : CIFilter
{
    CIImage *inputImage;
    CIImage *inputTargetImage;
    CIVector *inputCenter;
    CIVector *inputExtent;
    CIColor *inputColor;
    NSNumber *inputTime;
    NSNumber *inputMaxStriationRadius;
    NSNumber *inputStriationStrength;
    NSNumber *inputStriationContrast;
    NSNumber *inputFadeThreshold;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputFadeThreshold; // @synthesize inputFadeThreshold;
@property(retain, nonatomic) NSNumber *inputStriationContrast; // @synthesize inputStriationContrast;
@property(retain, nonatomic) NSNumber *inputStriationStrength; // @synthesize inputStriationStrength;
@property(retain, nonatomic) NSNumber *inputMaxStriationRadius; // @synthesize inputMaxStriationRadius;
@property(retain, nonatomic) NSNumber *inputTime; // @synthesize inputTime;
@property(retain, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property(retain, nonatomic) CIVector *inputExtent; // @synthesize inputExtent;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property(retain, nonatomic) CIImage *inputTargetImage; // @synthesize inputTargetImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_geomKernel;
- (id)_colorKernel;
- (void)setDefaults;

@end

