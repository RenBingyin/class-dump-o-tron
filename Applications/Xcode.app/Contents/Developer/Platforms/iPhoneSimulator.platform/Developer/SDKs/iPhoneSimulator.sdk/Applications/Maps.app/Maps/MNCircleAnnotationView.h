//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKAnnotationView.h"

@class CALayer;

__attribute__((visibility("hidden")))
@interface MNCircleAnnotationView : MKAnnotationView
{
    CALayer *_circleLayer;
    double _radius;
}

@property(nonatomic) double radius; // @synthesize radius=_radius;
- (void).cxx_destruct;
- (void)_setMapPitchRadians:(double)arg1;
- (void)setColorRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end

