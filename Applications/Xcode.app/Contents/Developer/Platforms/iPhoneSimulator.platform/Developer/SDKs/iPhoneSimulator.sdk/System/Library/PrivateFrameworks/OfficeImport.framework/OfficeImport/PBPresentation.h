//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface PBPresentation : NSObject
{
}

+ (void)addHeadersFootersToDocumentContainer:(id)arg1 instance:(int)arg2;
+ (void)setFontEntites:(id)arg1 environmentHolder:(id)arg2;
+ (void)readFrom:(struct PptBinaryReader *)arg1 to:(id)arg2 cancel:(id)arg3 asThumbnail:(_Bool)arg4 delegate:(id)arg5;
+ (id)drawingGroupHolderWithDocumentContainerHolder:(id)arg1;
+ (void)readNotes:(id)arg1 masterLayoutMap:(id)arg2 slideIdMap:(id)arg3 state:(id)arg4;
+ (void)readSlides:(id)arg1 masterLayoutMap:(id)arg2 slideIdMap:(id)arg3 state:(id)arg4 isThumbnail:(_Bool)arg5 delegate:(id)arg6;
+ (void)processLayoutTypesFromDocument:(id)arg1 masterLayoutMap:(id)arg2 state:(id)arg3;
+ (void)readCommentAuthorsFrom:(id)arg1 state:(id)arg2;
+ (void)scanSlideListForLayoutTypes:(id)arg1 slideListHolder:(id)arg2 masterLayoutMap:(id)arg3;
+ (void)readMasterAndLayouts:(id)arg1 masterLayoutMap:(id)arg2 state:(id)arg3;
+ (void)readDefaultTextListStyle:(id)arg1 fromDocumentContainer:(id)arg2 state:(id)arg3;
+ (void)setDefaultTextStyleWithEnvironmentHolder:(id)arg1 state:(id)arg2;

@end

