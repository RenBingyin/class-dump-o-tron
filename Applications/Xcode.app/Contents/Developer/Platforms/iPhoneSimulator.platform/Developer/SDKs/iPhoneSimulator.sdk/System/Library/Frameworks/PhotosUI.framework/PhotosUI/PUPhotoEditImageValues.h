//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface PUPhotoEditImageValues : NSObject
{
    _Bool _complete;
    NSDictionary *_smartToneStatistics;
    NSDictionary *_smartColorStatistics;
    NSDictionary *_smartBlackAndWhiteStatistics;
    double _smartToneAutoSuggestion;
    double _smartColorAutoSuggestion;
}

@property(getter=isComplete) _Bool complete; // @synthesize complete=_complete;
@property double smartColorAutoSuggestion; // @synthesize smartColorAutoSuggestion=_smartColorAutoSuggestion;
@property double smartToneAutoSuggestion; // @synthesize smartToneAutoSuggestion=_smartToneAutoSuggestion;
@property(copy) NSDictionary *smartBlackAndWhiteStatistics; // @synthesize smartBlackAndWhiteStatistics=_smartBlackAndWhiteStatistics;
@property(copy) NSDictionary *smartColorStatistics; // @synthesize smartColorStatistics=_smartColorStatistics;
@property(copy) NSDictionary *smartToneStatistics; // @synthesize smartToneStatistics=_smartToneStatistics;
- (void).cxx_destruct;

@end

