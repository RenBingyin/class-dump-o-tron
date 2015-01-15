//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTMutableOrderedDictionary;

@interface IBStoryboardCanvasLinkMapping : NSObject
{
    DVTMutableOrderedDictionary *sourcesToOutgoingCanvasLinkPacks;
    DVTMutableOrderedDictionary *destinationsToIncomingCanvasLinkPacks;
}

- (void).cxx_destruct;
- (id)incomingCanvasLinkPacksForDestination:(id)arg1;
- (id)outgoingCanvasLinkPacksForSource:(id)arg1;
@property(readonly, nonatomic) id <NSFastEnumeration> destinations;
@property(readonly, nonatomic) id <NSFastEnumeration> sources;
- (void)addCanvasLink:(id)arg1 fromSource:(id)arg2 toDestination:(id)arg3;
- (id)canvasLinkPackFromSource:(id)arg1 toDestination:(id)arg2;

@end

