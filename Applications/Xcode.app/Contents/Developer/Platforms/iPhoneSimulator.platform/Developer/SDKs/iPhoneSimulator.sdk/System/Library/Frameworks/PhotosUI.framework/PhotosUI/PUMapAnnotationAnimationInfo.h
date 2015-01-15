//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PUMapAnnotationAnimationInfo : NSObject
{
    _Bool _remove;
    id _annotation;
    id _destinationAnnotation;
    long long _fadeType;
    id _annotationForCountSwap;
    long long _reason;
    CDStruct_2c43369c _sourceCoordinate;
    CDStruct_2c43369c _destinationCoordinate;
}

@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property(readonly, retain, nonatomic) id annotationForCountSwap; // @synthesize annotationForCountSwap=_annotationForCountSwap;
@property(readonly, nonatomic) _Bool remove; // @synthesize remove=_remove;
@property(readonly, nonatomic) long long fadeType; // @synthesize fadeType=_fadeType;
@property(readonly, nonatomic) CDStruct_c3b9c2ee destinationCoordinate; // @synthesize destinationCoordinate=_destinationCoordinate;
@property(readonly, nonatomic) CDStruct_c3b9c2ee sourceCoordinate; // @synthesize sourceCoordinate=_sourceCoordinate;
@property(readonly, retain, nonatomic) id destinationAnnotation; // @synthesize destinationAnnotation=_destinationAnnotation;
@property(readonly, retain, nonatomic) id annotation; // @synthesize annotation=_annotation;
- (void).cxx_destruct;
- (id)initWithAnnotation:(id)arg1 destinationAnnotation:(id)arg2 sourceCoordinate:(CDStruct_c3b9c2ee)arg3 destinationCoordinate:(CDStruct_c3b9c2ee)arg4 fadeType:(long long)arg5 remove:(_Bool)arg6 annotationForCountSwap:(id)arg7 reason:(long long)arg8;

@end

