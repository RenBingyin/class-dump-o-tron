//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPlugIn/XRTimeFlag.h>

@class NSString;

@interface XRTimeDataElementFlag : XRTimeFlag
{
    NSString *_dataElementIdentifier;
    NSString *_dataElementStringValue;
}

+ (void)initialize;
- (id)dataElementsForContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 summary:(id)arg2 icon:(id)arg3 modifiable:(BOOL)arg4 global:(BOOL)arg5 timestamp:(unsigned long long)arg6 dataElementIdentifier:(id)arg7 dataElementStringValue:(id)arg8;

@end

