//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKMapView.h"

@interface MKMapView (SearchResultsAdditions)
- (CDStruct_2c43369c)pinDroppingCoordinate;
- (_Bool)_pinPositionAvailableAtPoint:(struct CGPoint)arg1;
- (void)setSelectedSearchResult:(id)arg1;
- (id)selectedSearchResult;
- (void)goToSearchResults:(id)arg1 mapRegion:(id)arg2 requireMapMovement:(_Bool)arg3 animation:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)goToSearchResults:(id)arg1 mapRegion:(id)arg2 requireMapMovement:(_Bool)arg3;
- (_Bool)isCoordinateVisible:(CDStruct_2c43369c)arg1;
- (CDStruct_2f492f29)mapRectContainingSearchResults:(id)arg1;
- (struct UIEdgeInsets)defaultInsetsForPinAnnotations;
- (CDStruct_2f492f29)mapRectThatFits:(CDStruct_2f492f29)arg1 minMetersPerPoint:(double)arg2;
@end

