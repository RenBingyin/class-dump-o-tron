//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBBasePreviewRecipe.h"

@class IBCocoaTouchIdiom, IBCocoaTouchOSVersion, IBUIScreenMetrics, IBUISimulatedOrientationMetrics;

@interface IBCocoaTouchPreviewRecipe : IBBasePreviewRecipe
{
    IBCocoaTouchIdiom *_idiom;
    IBCocoaTouchOSVersion *_systemVersion;
    IBUIScreenMetrics *_screenMetrics;
    IBUISimulatedOrientationMetrics *_orientationMetrics;
}

@property(retain) IBUISimulatedOrientationMetrics *orientationMetrics; // @synthesize orientationMetrics=_orientationMetrics;
@property(retain) IBUIScreenMetrics *screenMetrics; // @synthesize screenMetrics=_screenMetrics;
@property(retain) IBCocoaTouchOSVersion *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(retain) IBCocoaTouchIdiom *idiom; // @synthesize idiom=_idiom;
- (void).cxx_destruct;
- (id)memberConfiguration;
- (id)targetRuntime;
- (id)propertyListRepresentation;
- (id)initWithPropertyList:(id)arg1;
- (id)initWithLanguage:(id)arg1 idiom:(id)arg2 systemVersion:(id)arg3 screenMetrics:(id)arg4 orientationMetrics:(id)arg5;

@end

