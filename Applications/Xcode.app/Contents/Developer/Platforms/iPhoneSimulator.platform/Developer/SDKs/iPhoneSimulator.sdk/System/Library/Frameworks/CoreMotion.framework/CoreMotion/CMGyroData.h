//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

@interface CMGyroData : CMLogItem
{
    id _internal;
}

@property(readonly, nonatomic) CDStruct_31142d93 rotationRate;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRotationRate:(CDStruct_03942939)arg1 andTimestamp:(double)arg2;

@end

