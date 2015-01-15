//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

#import "NSCopying.h"
#import "TSDTextSelection.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPSelection : TSKSelection <NSCopying, TSDTextSelection>
{
    int _type;
    struct _NSRange _range;
    unsigned long long _headChar;
    unsigned long long _tailChar;
    _Bool _leadingEdge;
    unsigned long long _leadingCharIndex;
    _Bool _validVisualRanges;
    int _styleInsertionBehavior;
    int _caretAffinity;
    struct _NSRange _smartFieldRange;
    struct TSWPRangeVector _visualRanges;
}

+ (_Bool)p_checkEndOfLineFlagForRange:(struct _NSRange *)arg1 leadingEdge:(_Bool *)arg2 type:(int *)arg3 endOfLine:(_Bool)arg4 storage:(id)arg5;
+ (id)selectionWithRange:(struct _NSRange)arg1 type:(int)arg2 leadingEdge:(_Bool)arg3 storage:(id)arg4;
+ (id)selectionWithRange:(struct _NSRange)arg1;
+ (Class)archivedSelectionClass;
@property(readonly, nonatomic) _Bool validVisualRanges; // @synthesize validVisualRanges=_validVisualRanges;
@property(readonly, nonatomic) int caretAffinity; // @synthesize caretAffinity=_caretAffinity;
@property(readonly, nonatomic) int styleInsertionBehavior; // @synthesize styleInsertionBehavior=_styleInsertionBehavior;
@property(readonly, nonatomic) unsigned long long leadingCharIndex; // @synthesize leadingCharIndex=_leadingCharIndex;
@property(readonly, nonatomic) _Bool leadingEdge; // @synthesize leadingEdge=_leadingEdge;
@property(nonatomic) unsigned long long tailChar; // @synthesize tailChar=_tailChar;
@property(nonatomic) unsigned long long headChar; // @synthesize headChar=_headChar;
@property(readonly, nonatomic) struct _NSRange smartFieldRange; // @synthesize smartFieldRange=_smartFieldRange;
@property(readonly, nonatomic) struct _NSRange rawRange; // @synthesize rawRange=_range;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isAtEndOfLine;
- (void)saveToArchive:(struct SelectionArchive *)arg1 archiver:(id)arg2;
- (_Bool)intersectsRange:(struct _NSRange)arg1;
- (_Bool)containsCharacterAtIndex:(unsigned long long)arg1 allowRightEdge:(_Bool)arg2;
- (_Bool)containsCharacterAtIndex:(unsigned long long)arg1;
- (unsigned long long)rightEdge;
- (unsigned long long)leftEdge;
- (unsigned long long)visualRangeCount;
- (void)setHeadChar:(unsigned long long)arg1 tailChar:(unsigned long long)arg2;
- (id)visualRangesArray;
- (struct TSWPRangeVector *)i_visualRanges;
- (const struct TSWPRangeVector *)visualRanges;
- (void)i_setVisualRanges:(const struct TSWPRangeVector *)arg1;
- (struct _NSRange)superRange;
- (unsigned long long)end;
- (unsigned long long)start;
- (id)copyWithVisualRanges:(const struct TSWPRangeVector *)arg1 startChar:(unsigned long long)arg2 endChar:(unsigned long long)arg3 rightToLeft:(_Bool)arg4 sameLine:(_Bool)arg5;
- (id)copyWithNewVisualRanges:(const struct TSWPRangeVector *)arg1;
- (id)constrainToRange:(struct _NSRange)arg1;
- (id)copyWithNewRange:(struct _NSRange)arg1;
- (id)copyWithNewType:(int)arg1;
- (id)copyWithNewVisualTypeRange:(struct _NSRange)arg1 head:(unsigned long long)arg2 tail:(unsigned long long)arg3;
- (id)copyWithNewType:(int)arg1 range:(struct _NSRange)arg2;
- (id)copyWithNewType:(int)arg1 smartFieldRange:(struct _NSRange)arg2;
- (_Bool)isEquivalentForInsertionStyle:(id)arg1;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool isValid;
@property(readonly, nonatomic) _Bool isInsertionPoint;
@property(readonly, nonatomic) _Bool isRange;
@property(readonly, nonatomic) _Bool isVisual;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithArchive:(const struct SelectionArchive *)arg1;
- (id)initWithRange:(struct _NSRange)arg1;
- (id)initWithType:(int)arg1 range:(struct _NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4;
- (id)initWithType:(int)arg1 range:(struct _NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange)arg5 leadingEdge:(_Bool)arg6 storage:(id)arg7;
- (id)initWithType:(int)arg1 range:(struct _NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange)arg5 leadingEdge:(_Bool)arg6 leadingCharIndex:(unsigned long long)arg7;
@property(readonly, nonatomic) struct _NSRange range;
- (unsigned long long)insertionChar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

