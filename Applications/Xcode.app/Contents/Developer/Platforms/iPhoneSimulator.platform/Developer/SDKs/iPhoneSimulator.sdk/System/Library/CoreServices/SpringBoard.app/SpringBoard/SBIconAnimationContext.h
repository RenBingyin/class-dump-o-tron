//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBIconAnimationContext : NSObject
{
    double _delay;
    double _fraction;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) double fraction; // @synthesize fraction=_fraction;
@property(nonatomic) double delay; // @synthesize delay=_delay;
- (void)invalidate;
- (void)dealloc;
- (id)initWithNotificationIdentifier:(id)arg1;

@end

