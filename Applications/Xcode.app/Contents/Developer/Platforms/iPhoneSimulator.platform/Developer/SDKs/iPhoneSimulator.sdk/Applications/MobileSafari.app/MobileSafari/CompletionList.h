//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CompletionProviderDelegate.h"
#import "UniversalSearchCompletionProviderDelegate.h"

@class CompletionListGroup, FindOnPageCompletionProvider, NSArray, NSDate, NSString, NSTimer, QuickWebsiteSearchCompletionProvider, ReadingListCompletionProvider, SearchSuggestionProvider, URLCompletionProvider, UniversalSearchCompletionProvider, WBSBookmarkAndHistoryCompletionMatch, WBSCompletionQuery, WBSParsecSearchSession;

@interface CompletionList : NSObject <CompletionProviderDelegate, UniversalSearchCompletionProviderDelegate>
{
    WBSCompletionQuery *_query;
    unsigned long long _inputTypeOfStringToComplete;
    NSArray *_groups;
    URLCompletionProvider *_URLCompletionProvider;
    SearchSuggestionProvider *_suggestionProvider;
    ReadingListCompletionProvider *_readingListProvider;
    FindOnPageCompletionProvider *_findOnPageProvider;
    UniversalSearchCompletionProvider *_universalSearchProvider;
    QuickWebsiteSearchCompletionProvider *_quickWebsiteSearchProvider;
    NSDate *_nextAllowedUpdateTime;
    NSDate *_showPartialCompletionsTime;
    NSDate *_universalSearchRenderTimeoutTime;
    NSDate *_universalSearchOtherRenderTimeoutTime;
    long long _universalSearchRenderTimeout;
    long long _universalSearchOtherRenderTimeout;
    _Bool _shouldShowUniversalSearchResultsOnSubsequentPass;
    NSTimer *_updateTimer;
    CompletionListGroup *_findOnPageGroup;
    NSString *_stringMatchedByTopHit;
    NSString *_matchingStringInTopHit;
    WBSBookmarkAndHistoryCompletionMatch *_topHit;
    _Bool _shouldIncludeSearchSuggestions;
    _Bool _networkIsReachable;
    WBSParsecSearchSession *_parsecSearchSession;
    id <CompletionListDelegate> _delegate;
    unsigned long long _maximumCompletionsPerGroup;
}

@property(nonatomic) _Bool networkIsReachable; // @synthesize networkIsReachable=_networkIsReachable;
@property(nonatomic) unsigned long long maximumCompletionsPerGroup; // @synthesize maximumCompletionsPerGroup=_maximumCompletionsPerGroup;
@property(nonatomic) _Bool shouldIncludeSearchSuggestions; // @synthesize shouldIncludeSearchSuggestions=_shouldIncludeSearchSuggestions;
@property(nonatomic) __weak id <CompletionListDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WBSParsecSearchSession *parsecSearchSession; // @synthesize parsecSearchSession=_parsecSearchSession;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long findOnPageGroupIndex;
- (void)clearCachedSearches;
- (void)stopCompleting;
@property(readonly, nonatomic) _Bool hasCompletions;
- (void)configureHeaderView:(id)arg1 forGroupAtIndex:(unsigned long long)arg2;
- (id)headerViewForGroupAtIndex:(unsigned long long)arg1;
- (id)headerViewReuseIdentifierForGroupAtIndex:(unsigned long long)arg1;
- (id)completionsForGroupAtIndex:(unsigned long long)arg1;
- (id)titleForGroupAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfGroups;
- (void)universalSearchCompletionProvider:(id)arg1 didFinishQuery:(id)arg2;
- (void)completionProviderDidFail:(id)arg1;
- (void)completionProvider:(id)arg1 didFinishCompletingString:(id)arg2;
- (_Bool)isTopHitReadyForString:(id)arg1;
- (id)topHitForString:(id)arg1;
- (_Bool)_topHitMatchesString:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)_updateProviders;
- (void)_setNeedsUpdate;
- (void)_scheduleUpdateOnOrBeforeDate:(id)arg1 withCurrentDate:(id)arg2;
- (void)_updateTimerFired:(id)arg1;
- (void)_update;
- (void)_invalidateUpdateTimer;
- (_Bool)_urlString:(id)arg1 isProbablyContainedIn:(id)arg2;
- (id)_groupsForQuery:(id)arg1 allowPartialCompletions:(_Bool)arg2 findOnPageGroup:(id *)arg3 topHit:(id *)arg4 topHitReady:(_Bool *)arg5;
- (_Bool)_shouldFetchSearchSuggestions;
- (void)_removeCompletionsWithAddressInSet:(id)arg1 fromArray:(id)arg2 andTruncateTo:(unsigned long long)arg3;
- (id)_groupsOnUnreachableNetworkForString:(id)arg1;
- (void)_removeSearchURLsFromCompletions:(id)arg1;
- (id)_groupWithTitle:(id)arg1 completions:(id)arg2;
- (id)_groupWithTitle:(id)arg1 completions:(id)arg2 maximumCompletions:(unsigned long long)arg3;
- (id)_titleForFindOnPageHeaderWithMatchCount:(unsigned long long)arg1;
- (id)_completionsByMergingRecentSearches:(id)arg1 withSuggestions:(id)arg2 andLiteralSearch:(id)arg3;
- (id)_recentSearchesForString:(id)arg1;
- (void)dealloc;
- (id)initWithParsecSearchSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

