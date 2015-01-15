//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface DSATextSearchResult : NSObject <NSCopying>
{
    float _resultRelevance;
    float _childrenRelevance;
    NSArray *_children;
}

+ (id)buildResultTree:(id)arg1;
+ (float)maximumRelevanceForResults:(id)arg1;
@property(copy) NSArray *children; // @synthesize children=_children;
@property float childrenRelevance; // @synthesize childrenRelevance=_childrenRelevance;
@property float resultRelevance; // @synthesize resultRelevance=_resultRelevance;
- (void).cxx_destruct;
- (void)_calculateChildrenRelevance;
- (id)flattenTree;
- (id)description;
- (id)iterativeDescriptionWithIndent:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *title;
- (id)docSet;
- (id)parentNode;
- (id)nearestNodeID;
- (id)node;
- (id)URL;
@property(readonly) float relevance;
@property(readonly) BOOL isTitleMatch;

@end

