//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HistoryItemTableViewCell.h"

@class StarkSuggestion;

__attribute__((visibility("hidden")))
@interface StarkSuggestionHistoryItemCell : HistoryItemTableViewCell
{
    StarkSuggestion *_suggestion;
}

+ (Class)layoutClass;
@property(retain, nonatomic) StarkSuggestion *suggestion; // @synthesize suggestion=_suggestion;
- (void).cxx_destruct;
- (id)glyph;
- (void)layoutSubviews;

@end

