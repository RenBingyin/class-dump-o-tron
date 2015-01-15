//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPDisposable.h"

@class CPCluster, CPZone, NSMutableArray;

@interface CPGuideFinder : NSObject <CPDisposable>
{
    CPZone *contentZone;
    unsigned int countOfWordsInZone;
    double *anchorArray;
    double *rightHandSideArray;
    CDStruct_8db92b66 *crossingWordArray;
    CPCluster *anchors;
    CPCluster *rightHandSides;
    double medianFontSizeOfFirstCharacter;
    double medianFontSizeOfLastCharacter;
    NSMutableArray *gutters;
    NSMutableArray *leftGuides;
    NSMutableArray *rightGuides;
}

+ (void)reclusterBetweenGuides:(id)arg1;
+ (void)reclusterPreservingAlignment:(id)arg1;
+ (_Bool)gutterSeparates:(id)arg1 from:(id)arg2;
+ (_Bool)guideSeparates:(id)arg1 from:(id)arg2;
- (id)rightGuides;
- (_Bool)hasRightGuides;
- (id)leftGuides;
- (_Bool)hasLeftGuides;
- (id)gutters;
- (_Bool)hasGutters;
- (void)markTextLines;
- (void)splitTextLines;
- (void)splitTextLinesBetweenBorderWords;
- (void)splitTextLinesAtBorderWords;
- (void)findGuides;
- (void)findGutters;
- (void)findWordEdgeClusters;
- (void)subdivideRightGuideAt:(unsigned int)arg1;
- (void)subdivideLeftGuideAt:(unsigned int)arg1;
- (void)subdivideGutterFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)subdivideStripInto:(id)arg1 from:(double)arg2 to:(double)arg3 borderedBy:(CDStruct_8db92b66 *)arg4 ofCount:(unsigned int)arg5 crossedBy:(CDStruct_8db92b66 *)arg6 ofCount:(unsigned int)arg7;
- (void)setAlignForWordWithExtent:(CDStruct_8db92b66 *)arg1 stripArray:(id)arg2 stripMax:(double)arg3;
- (_Bool)addStripTo:(id)arg1 bottom:(double)arg2 left:(double)arg3 top:(double)arg4 right:(double)arg5;
- (void)getWordEdges;
- (double)medianFontSizeOfLastCharacter;
- (double)medianFontSizeOfFirstCharacter;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initWithContentZone:(id)arg1;

@end

