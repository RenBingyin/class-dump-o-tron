//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSImage, NSPasteboard, NSURL, NSView, NSWindow;

@protocol NSDraggingInfo <NSObject>
@property long long numberOfValidItemsForDrop;
@property BOOL animatesToDestination;
@property long long draggingFormation;
- (void)enumerateDraggingItemsWithOptions:(unsigned long long)arg1 forView:(NSView *)arg2 classes:(NSArray *)arg3 searchOptions:(NSDictionary *)arg4 usingBlock:(void (^)(NSDraggingItem *, long long, char *))arg5;
- (NSArray *)namesOfPromisedFilesDroppedAtDestination:(NSURL *)arg1;
- (void)slideDraggedImageTo:(struct CGPoint)arg1;
- (long long)draggingSequenceNumber;
- (id)draggingSource;
- (NSPasteboard *)draggingPasteboard;
- (NSImage *)draggedImage;
- (struct CGPoint)draggedImageLocation;
- (struct CGPoint)draggingLocation;
- (unsigned long long)draggingSourceOperationMask;
- (NSWindow *)draggingDestinationWindow;
@end

