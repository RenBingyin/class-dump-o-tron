//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol WBSURLCompletionMatchData <NSObject>
@property(readonly, nonatomic) _Bool lastVisitWasFailure;
@property(readonly, nonatomic) double lastVisitedTimeInterval;
@property(readonly, nonatomic) _Bool containsBookmark;
@property(readonly, nonatomic) NSString *originalURLString;
- (float)topSitesScoreForPageTitleAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
- (float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
- (_Bool)matchesAutocompleteTrigger:(NSString *)arg1;
- (NSString *)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1;
- (NSString *)userVisibleURLStringAtIndex:(unsigned long long)arg1;
- (void)enumerateUserVisibleURLsUsingBlock:(void (^)(NSString *, unsigned long long, _Bool *))arg1;
- (NSString *)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1;
- (NSString *)pageTitleAtIndex:(unsigned long long)arg1;
- (void)enumeratePageTitlesUsingBlock:(void (^)(NSString *, unsigned long long, _Bool *))arg1;
- (id <WBSURLCompletionMatchData>)matchDataByMergingWithMatchData:(id <WBSURLCompletionMatchData>)arg1;
@end

