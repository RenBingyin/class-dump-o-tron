//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, NSError;

@protocol NEProfilePayloadBaseDelegate
- (_Bool)setPostprocessedPayloadContents:(NSDictionary *)arg1;
- (NSDictionary *)getPreprocessedPayloadContents;
- (NSError *)validatePayload;
- (id)initWithPayload:(NSDictionary *)arg1;
@end

