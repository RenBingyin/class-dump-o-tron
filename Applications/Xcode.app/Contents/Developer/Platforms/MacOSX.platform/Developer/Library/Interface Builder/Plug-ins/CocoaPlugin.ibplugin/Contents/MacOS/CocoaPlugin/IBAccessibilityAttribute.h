//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBAttributePlaceholder.h"

@class NSString;

@interface IBAccessibilityAttribute : IBAttributePlaceholder
{
    NSString *accessibilityValue;
}

- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)archiveConnectionIntoObjectData:(id)arg1 previousIDs:(id)arg2;
- (id)accessibilityValue;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1 name:(id)arg2 andValue:(id)arg3;

@end

