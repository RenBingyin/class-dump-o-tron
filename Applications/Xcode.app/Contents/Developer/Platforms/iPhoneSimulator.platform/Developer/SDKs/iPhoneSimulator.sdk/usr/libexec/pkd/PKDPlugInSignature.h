//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface PKDPlugInSignature : NSObject
{
    NSData *_cdhash;
    NSString *_requirement;
}

@property(retain) NSString *requirement; // @synthesize requirement=_requirement;
@property(retain) NSData *cdhash; // @synthesize cdhash=_cdhash;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 error:(id *)arg2;

@end

