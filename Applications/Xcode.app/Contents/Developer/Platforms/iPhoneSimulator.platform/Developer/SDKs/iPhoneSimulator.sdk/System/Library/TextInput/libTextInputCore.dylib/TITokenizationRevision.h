//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface TITokenizationRevision : NSObject
{
    unsigned long long _revisedDocumentLocation;
    unsigned long long _branchedTokenIndex;
    unsigned long long _mergedTokenIndex;
    NSMutableArray *_branchTokens;
    struct _NSRange _originalSelectedTokenRange;
    struct _TIRevisionHistoryTokenIterator _originalIterator;
}

@property(readonly, nonatomic) NSMutableArray *branchTokens; // @synthesize branchTokens=_branchTokens;
@property(nonatomic) unsigned long long mergedTokenIndex; // @synthesize mergedTokenIndex=_mergedTokenIndex;
@property(nonatomic) unsigned long long branchedTokenIndex; // @synthesize branchedTokenIndex=_branchedTokenIndex;
@property(nonatomic) unsigned long long revisedDocumentLocation; // @synthesize revisedDocumentLocation=_revisedDocumentLocation;
@property(nonatomic) struct _TIRevisionHistoryTokenIterator originalIterator; // @synthesize originalIterator=_originalIterator;
@property(nonatomic) struct _NSRange originalSelectedTokenRange; // @synthesize originalSelectedTokenRange=_originalSelectedTokenRange;
- (id)initWithTokenIterator:(struct _TIRevisionHistoryTokenIterator)arg1;
- (id)init;
- (void)dealloc;

@end

