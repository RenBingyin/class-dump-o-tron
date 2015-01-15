//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSSet, NSString, PSSearchResults;

@interface PSSearchOperation : NSOperation
{
    _Bool _newQuery;
    NSString *_query;
    NSSet *_rootEntries;
    PSSearchResults *_currentResults;
    id <PSSearchOperationDelegate> _delegate;
}

+ (struct __CFStringTokenizer *)_wordBoundaryTokenizer;
@property(nonatomic) id <PSSearchOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isNewQuery) _Bool newQuery; // @synthesize newQuery=_newQuery;
@property(readonly, copy) PSSearchResults *currentResults; // @synthesize currentResults=_currentResults;
@property(readonly, copy, nonatomic) NSSet *rootEntries; // @synthesize rootEntries=_rootEntries;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
- (id)debugDescription;
- (id)description;
- (id)_filterEntriesMatchingQuery:(id)arg1 forQuery:(id)arg2;
- (_Bool)_searchEntries:(id)arg1 forQuery:(id)arg2;
- (void)main;
- (void)_didCancel;
- (void)dealloc;
- (id)initWithSearchQuery:(id)arg1 rootEntries:(id)arg2;

@end

