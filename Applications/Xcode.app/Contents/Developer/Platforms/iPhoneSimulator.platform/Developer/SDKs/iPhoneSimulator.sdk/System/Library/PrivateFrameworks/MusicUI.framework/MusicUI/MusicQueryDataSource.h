//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPUCompletionQueryDataSource.h"

@interface MusicQueryDataSource : MPUCompletionQueryDataSource
{
}

- (id)_queryForNowPlayingComparisonAtIndex:(unsigned long long)arg1;
- (void)_defaultsDidChangeNotification:(id)arg1;
- (_Bool)_updateQueryPredicatesAndOrdering;
- (_Bool)queryIsNowPlayingAtIndex:(unsigned long long)arg1;
- (id)playbackContextForIndex:(unsigned long long)arg1;
- (_Bool)entityIsNowPlayingAtIndex:(unsigned long long)arg1;
- (id)entityCountFormat;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 entityType:(long long)arg2;

@end

