//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesConnectFoundation/ITunesTransporterWorker.h>

@class NSString;

@interface ITunesTransporterAuthenticatePurpleProviderWorker : ITunesTransporterWorker
{
    NSString *_provider;
}

- (id)provider;
- (void)transporterCompleted;
- (id)parsePurpleProviderFromXMLString:(id)arg1;
- (void)transporterWillStart;
- (void)dealloc;
- (id)init;

@end

