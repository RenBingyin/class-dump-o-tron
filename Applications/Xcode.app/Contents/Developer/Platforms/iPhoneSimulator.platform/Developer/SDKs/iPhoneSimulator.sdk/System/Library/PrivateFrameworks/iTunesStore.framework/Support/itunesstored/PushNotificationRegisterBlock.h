//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface PushNotificationRegisterBlock : NSObject
{
    NSNumber *_accountIdentifier;
    CDUnknownBlockType _block;
    NSString *_environmentName;
}

@property(copy, nonatomic) NSString *environmentName; // @synthesize environmentName=_environmentName;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (void)dealloc;

@end

