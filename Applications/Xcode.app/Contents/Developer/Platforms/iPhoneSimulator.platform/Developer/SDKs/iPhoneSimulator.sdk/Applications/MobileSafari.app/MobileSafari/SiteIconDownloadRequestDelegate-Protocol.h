//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, SiteIconDownloadRequest, UIColor;

@protocol SiteIconDownloadRequestDelegate <NSObject>
- (void)siteIconDownloadRequest:(SiteIconDownloadRequest *)arg1 didComputeIconKeyColor:(UIColor *)arg2;
- (void)siteIconDownloadRequest:(SiteIconDownloadRequest *)arg1 didLoadIconData:(NSData *)arg2;
- (void)siteIconDownloadRequestDidFail:(SiteIconDownloadRequest *)arg1;
@end

