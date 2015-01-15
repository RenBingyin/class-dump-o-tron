//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HAPAccessoryServer, HAPAccessoryServerBrowser, NSError, NSString;

@protocol HAPAccessoryServerBrowserDelegate <NSObject>
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 didFailToDiscoverAccessoryServerWithIdentifier:(NSString *)arg2;
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 didStopDiscoveringWithError:(NSError *)arg2;
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 didStartDiscoveringWithError:(NSError *)arg2;
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 didRemoveAccessoryServer:(HAPAccessoryServer *)arg2;
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 didFindAccessoryServer:(HAPAccessoryServer *)arg2;
@end

