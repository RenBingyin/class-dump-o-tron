//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AXEventListenerContainer : NSObject
{
    CDUnknownBlockType handler;
    NSString *identifier;
}

@property(retain, nonatomic) NSString *identifier; // @synthesize identifier;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler;

@end

