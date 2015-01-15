//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NSString, WebDataSource;

@protocol WebDocumentRepresentation <NSObject>
- (NSString *)title;
- (NSString *)documentSource;
- (_Bool)canProvideDocumentSource;
- (void)finishedLoadingWithDataSource:(WebDataSource *)arg1;
- (void)receivedError:(NSError *)arg1 withDataSource:(WebDataSource *)arg2;
- (void)receivedData:(NSData *)arg1 withDataSource:(WebDataSource *)arg2;
- (void)setDataSource:(WebDataSource *)arg1;
@end

