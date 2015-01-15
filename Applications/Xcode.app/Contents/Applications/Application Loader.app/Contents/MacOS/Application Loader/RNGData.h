//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RNGAbstractElement.h"

#import "RNGValidation.h"

@class NSMutableArray, NSString;

@interface RNGData : RNGAbstractElement <RNGValidation>
{
    NSString *_type;
    NSMutableArray *_params;
}

- (id)description;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)validateObject:(id)arg1;
- (id)validateParametersAgainst:(id)arg1;
- (id)validateParameter:(id)arg1 against:(id)arg2;
- (id)validateTypeAgainst:(id)arg1;
- (int)dataType;
- (id)validateByte:(id)arg1;
- (id)validateUnsignedByte:(id)arg1;
- (id)validateUnsignedShort:(id)arg1;
- (id)validateUnsignedLong:(id)arg1;
- (id)validateUnsignedInt:(id)arg1;
- (id)validateDecimal:(id)arg1;
- (id)validateNonPositiveInteger:(id)arg1;
- (id)validateNonNegativeInteger:(id)arg1;
- (id)validateNegativeInteger:(id)arg1;
- (id)validateInteger:(id)arg1;
- (id)validateFloat:(id)arg1;
- (id)validatePositiveInteger:(id)arg1;
- (id)validateToken:(id)arg1;
- (id)validateNormalizedString:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void)dealloc;
- (id)init;

@end

