//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface OAVPath : NSObject
{
}

+ (void)writePath:(id)arg1 toString:(id)arg2;
+ (void)readPath:(id)arg1 toGeometry:(id)arg2;
+ (struct EshComputedValue)parseParam:(const char **)arg1 first:(_Bool)arg2;
+ (int)parseCommand:(const char **)arg1;

@end

