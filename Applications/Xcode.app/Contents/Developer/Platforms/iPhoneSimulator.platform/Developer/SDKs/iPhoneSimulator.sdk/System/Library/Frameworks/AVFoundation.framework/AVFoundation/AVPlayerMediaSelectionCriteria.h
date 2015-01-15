//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayerMediaSelectionCriteriaInternal, NSArray;

@interface AVPlayerMediaSelectionCriteria : NSObject
{
    AVPlayerMediaSelectionCriteriaInternal *_criteria;
}

- (id)description;
- (_Bool)precludeMultichannelAudio;
- (_Bool)preferMultichannelAudio;
- (id)precludedMediaSubTypes;
- (id)preferredMediaSubTypes;
@property(readonly, nonatomic) NSArray *preferredMediaCharacteristics;
@property(readonly, nonatomic) NSArray *preferredLanguages;
- (void)dealloc;
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4;
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2;
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4 preferMultichannelAudio:(_Bool)arg5 precludeMultichannelAudio:(_Bool)arg6;
- (id)init;
- (id)initWithFigDictionary:(id)arg1;
- (id)figDictionary;

@end

