//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFormatter.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface OITSUDurationFormatter : NSFormatter
{
    NSString *mFormat;
    int mCompactStyleStartUnit;
}

@property(nonatomic) int compactStyleStartUnit; // @synthesize compactStyleStartUnit=mCompactStyleStartUnit;
@property(copy, nonatomic) NSString *format; // @synthesize format=mFormat;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (void)dealloc;
- (void)p_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

