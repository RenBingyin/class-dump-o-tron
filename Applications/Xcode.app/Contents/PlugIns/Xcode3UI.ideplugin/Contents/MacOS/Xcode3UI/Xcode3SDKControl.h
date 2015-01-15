//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSArray, NSCell, NSDictionary, NSMatrix, NSSlider, NSStepper, NSString, NSTextField;

@interface Xcode3SDKControl : NSView
{
    NSDictionary *_textAttributes;
    NSDictionary *_disabledTextAttributes;
    NSArray *_sdks;
    NSArray *_allSdks;
    NSSlider *_sdkSlider;
    NSStepper *_sdkStepper;
    NSTextField *_sdkTextField;
    NSSlider *_osSlider;
    NSStepper *_osStepper;
    NSTextField *_osTextField;
    NSMatrix *_recommendedMatrix;
    long long _baseSDK;
    long long _deploymentOS;
    long long _recommendedBaseSDK;
    long long _recommendedDeploymentOS;
    long long _targetsBaseSDK;
    long long _targetsDeploymentOS;
    BOOL _useRecommendedSDKs;
    BOOL _enabled;
    id _baseSDKTarget;
    SEL _baseSDKAction;
    id _deploymentOSTarget;
    SEL _deploymentOSAction;
    NSCell *_hiddenKnobCell;
    NSCell *_sliderCell;
}

@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property SEL deploymentOSAction; // @synthesize deploymentOSAction=_deploymentOSAction;
@property(retain) id deploymentOSTarget; // @synthesize deploymentOSTarget=_deploymentOSTarget;
@property SEL baseSDKAction; // @synthesize baseSDKAction=_baseSDKAction;
@property(retain) id baseSDKTarget; // @synthesize baseSDKTarget=_baseSDKTarget;
@property(retain) NSMatrix *recommendedMatrix; // @synthesize recommendedMatrix=_recommendedMatrix;
@property(retain) NSTextField *osTextField; // @synthesize osTextField=_osTextField;
@property(retain) NSStepper *osStepper; // @synthesize osStepper=_osStepper;
@property(retain) NSSlider *osSlider; // @synthesize osSlider=_osSlider;
@property(retain) NSTextField *sdkTextField; // @synthesize sdkTextField=_sdkTextField;
@property(retain) NSStepper *sdkStepper; // @synthesize sdkStepper=_sdkStepper;
@property(retain) NSSlider *sdkSlider; // @synthesize sdkSlider=_sdkSlider;
@property(retain, nonatomic) NSArray *allSdks; // @synthesize allSdks=_allSdks;
@property(retain, nonatomic) NSArray *sdks; // @synthesize sdks=_sdks;
- (void).cxx_destruct;
- (BOOL)control:(id)arg1 didFailToFormatString:(id)arg2 errorDescription:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)selectRecommendation:(id)arg1;
- (void)takeDeploymentOSFrom:(id)arg1;
- (void)takeBaseSDKFrom:(id)arg1;
@property(retain) id contentView;
@property BOOL useRecommendedSDKs;
@property(retain) NSString *targetsDeploymentOS;
@property(retain) NSString *targetsBaseSDK;
@property(retain) NSString *recommendedDeploymentOS;
@property(retain) NSString *recommendedBaseSDK;
@property(retain) NSString *deploymentOS;
- (void)selectRecommendedWithTag:(long long)arg1;
@property(retain) NSString *baseSDK;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)allIndexForSDK:(id)arg1;
- (long long)slotForSDK:(id)arg1;
- (long long)indexForSDK:(id)arg1;
- (id)sdkForIndex:(long long)arg1;
- (BOOL)_loadUI;

@end

