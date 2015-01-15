//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VKMapTile, VKOverlayContainerModel, VKOverlayPainter, VKVectorTile;

@protocol VKOverlayContainerDelegate <NSObject>
- (void)overlayContainer:(VKOverlayContainerModel *)arg1 showingRouteInStandardModeDidChange:(_Bool)arg2;
- (_Bool)overlayContainerIsInRealisticMode:(VKOverlayContainerModel *)arg1;
- (VKVectorTile *)overlayContainer:(VKOverlayContainerModel *)arg1 roadTileForTile:(VKMapTile *)arg2;
- (VKOverlayPainter *)overlayContainer:(VKOverlayContainerModel *)arg1 painterForOverlay:(id <VKOverlay>)arg2;
@end

