//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface KNAnimParameterGroup : NSObject
{
    NSMutableDictionary *_parametersDict;
    NSString *_fileName;
    NSString *_originalFileName;
    NSString *_name;
    NSArray *_parameterArray;
}

+ (id)parameterGroupForFile:(id)arg1;
@property(readonly, nonatomic) NSArray *parameterArray; // @synthesize parameterArray=_parameterArray;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)writeAnimationCurvesToFile;
- (void)resetAnimationCurvesFromBundle;
- (void)readAnimationCurvesFromFile;
- (void)dealloc;
- (id)initWithFileName:(id)arg1;
- (id)mediaTimingFunctionForAnimationCurve:(id)arg1 reversed:(_Bool)arg2;
- (id)mediaTimingFunctionForAnimationCurve:(id)arg1;
- (double)valueForAnimationCurve:(id)arg1 atPercent:(double)arg2;
- (double)valueForConstant:(id)arg1;

@end

