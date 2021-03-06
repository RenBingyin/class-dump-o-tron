//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNTracePlayer, MNTraceRecorder, NSMapTable, StarkLikelyRouteUpdater, StarkLikelyRoutesManager, StarkSuggestionsProvider;

__attribute__((visibility("hidden")))
@interface StarkRouteGeniusLikelyRoutesProvider : NSObject
{
    StarkSuggestionsProvider *_suggestionsProvider;
    StarkLikelyRoutesManager *_likelyRoutesManager;
    StarkLikelyRouteUpdater *_bestSuggestion;
    NSMapTable *_changeHandlers;
    _Bool _started;
    MNTracePlayer *_tracePlayer;
    MNTraceRecorder *_traceRecorder;
}

@property(readonly, nonatomic) StarkLikelyRouteUpdater *bestSuggestion; // @synthesize bestSuggestion=_bestSuggestion;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 changeHandler:(CDUnknownBlockType)arg2;
- (void)_invokeChangeHandlers;
- (void)simulateToCurrentSuggestion;
- (void)lockCurrentSuggestion;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithSuggestionsProvider:(id)arg1 optionalTracePlayer:(id)arg2;

@end

