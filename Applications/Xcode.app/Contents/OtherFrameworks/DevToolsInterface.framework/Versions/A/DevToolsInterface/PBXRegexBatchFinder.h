//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXReferenceBasedBatchFinder.h>

@class TSRegularExpression;

@interface PBXRegexBatchFinder : PBXReferenceBasedBatchFinder
{
    TSRegularExpression *_findExpression;
}

- (id)replacementStringForFoundString:(id)arg1 replaceString:(id)arg2;
- (id)findableForReference:(id)arg1;
- (id)findExpression;
- (void)dealloc;

@end

