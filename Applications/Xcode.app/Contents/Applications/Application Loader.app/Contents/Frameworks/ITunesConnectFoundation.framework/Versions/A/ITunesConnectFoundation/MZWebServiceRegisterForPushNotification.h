//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesConnectFoundation/MZITunesProducerServiceClient.h>

@class NSData, NSString;

@interface MZWebServiceRegisterForPushNotification : MZITunesProducerServiceClient
{
    NSData *_devToken;
    NSString *_preferredLanguage;
}

@property(retain, nonatomic) NSString *preferredLanguage; // @synthesize preferredLanguage=_preferredLanguage;
@property(retain, nonatomic) NSData *devToken; // @synthesize devToken=_devToken;
- (id)generateArguments;
- (id)operationMethod;
- (void)dealloc;

@end

