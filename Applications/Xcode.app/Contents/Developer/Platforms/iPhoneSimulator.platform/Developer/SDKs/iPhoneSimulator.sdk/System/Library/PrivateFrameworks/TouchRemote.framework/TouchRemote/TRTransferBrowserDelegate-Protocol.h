//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, TRTransferBrowser;

@protocol TRTransferBrowserDelegate <NSObject>

@optional
- (void)browserDidDisconnect:(TRTransferBrowser *)arg1;
- (NSData *)browser:(TRTransferBrowser *)arg1 didReceiveData:(NSData *)arg2;
- (NSData *)browserDidStartTransfer:(TRTransferBrowser *)arg1;
@end

