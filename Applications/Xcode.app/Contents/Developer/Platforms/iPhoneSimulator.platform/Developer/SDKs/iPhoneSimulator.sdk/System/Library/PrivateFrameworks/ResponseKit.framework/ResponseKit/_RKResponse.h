//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _RKResponse : NSObject
{
    NSString *_text;
    unsigned long long _type;
}

@property unsigned long long type; // @synthesize type=_type;
@property(retain) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)description;
- (id)initWithText:(id)arg1 type:(unsigned long long)arg2;
- (id)init;

@end

