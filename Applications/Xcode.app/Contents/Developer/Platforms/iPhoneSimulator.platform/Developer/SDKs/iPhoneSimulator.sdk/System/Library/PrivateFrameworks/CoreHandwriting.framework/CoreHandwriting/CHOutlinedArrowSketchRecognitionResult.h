//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreHandwriting/CHSketchRecognitionResult.h>

@interface CHOutlinedArrowSketchRecognitionResult : CHSketchRecognitionResult
{
    struct CGPoint _center;
    struct CGSize _size;
    struct CGPoint _controlPoint;
}

@property(readonly) struct CGPoint controlPoint; // @synthesize controlPoint=_controlPoint;
@property(readonly) struct CGSize size; // @synthesize size=_size;
@property(readonly) struct CGPoint center; // @synthesize center=_center;
- (id).cxx_construct;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 center:(struct CGPoint)arg4 size:(struct CGSize)arg5 controlPointLocation:(struct CGPoint)arg6;

@end

