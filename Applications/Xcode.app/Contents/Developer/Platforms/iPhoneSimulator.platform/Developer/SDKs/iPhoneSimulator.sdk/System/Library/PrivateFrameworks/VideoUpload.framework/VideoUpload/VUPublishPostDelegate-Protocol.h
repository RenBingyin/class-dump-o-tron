//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError, VUPublishPost;

@protocol VUPublishPostDelegate
- (void)publishPost:(VUPublishPost *)arg1 hasWrittenBytes:(long long)arg2 expectsToWrite:(long long)arg3;
- (void)publishPostSucceeded:(VUPublishPost *)arg1;
- (void)publishPost:(VUPublishPost *)arg1 didFailWithError:(NSError *)arg2;
@end

