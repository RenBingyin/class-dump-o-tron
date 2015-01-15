//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBRuntimeValueMarshaller.h"

@interface IBRuntimeDictionaryMarshaller : IBRuntimeValueMarshaller
{
    IBRuntimeValueMarshaller *keyMarshaller;
    IBRuntimeValueMarshaller *objectMarshaller;
}

+ (id)dictionaryMarshallerWithKeyMarshaller:(id)arg1 objectMarshaller:(id)arg2 globalContext:(id)arg3;
- (void).cxx_destruct;
- (id)invertingMarshallerInitializationState;
- (id)marshallIntermediateValue:(id)arg1;
- (id)marshallRuntimeValue:(id)arg1;
- (id)initWithLocalContext:(id)arg1 globalContext:(id)arg2;
- (_Bool)marshallsNilValues;

@end

