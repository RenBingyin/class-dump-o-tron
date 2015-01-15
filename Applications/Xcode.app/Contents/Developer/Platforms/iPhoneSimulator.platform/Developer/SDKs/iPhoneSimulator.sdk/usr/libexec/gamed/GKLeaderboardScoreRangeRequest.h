//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKLeaderboardScoreRequest.h"

@interface GKLeaderboardScoreRangeRequest : GKLeaderboardScoreRequest
{
    struct _NSRange _range;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)loadScoresWithService:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchScoresWithService:(id)arg1 context:(id)arg2 serverResponse:(id)arg3 timeToLive:(double)arg4 handler:(CDUnknownBlockType)arg5;
- (id)resourceIdentifier;
- (id)serverRequest;
- (id)bagKey;
- (void)sanitizeRange;

@end

