//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@protocol VSSpeechServiceDelegate <NSObject>
- (oneway void)speechRequestDidStopWithSuccess:(_Bool)arg1 phonemesSpoken:(NSString *)arg2 error:(NSError *)arg3;
- (oneway void)speechRequestMark:(long long)arg1 didStartForRange:(struct _NSRange)arg2;
- (oneway void)speechRequestDidContinue;
- (oneway void)speechRequestDidPause;
- (oneway void)speechRequestDidStart;
@end

