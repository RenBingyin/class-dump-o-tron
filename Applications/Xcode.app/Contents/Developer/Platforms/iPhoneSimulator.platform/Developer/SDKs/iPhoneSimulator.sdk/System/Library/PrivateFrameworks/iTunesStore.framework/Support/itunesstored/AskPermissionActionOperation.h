//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

@class NSString, NSURL;

@interface AskPermissionActionOperation : ISOperation
{
    NSString *_requestIdentifier;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
- (void)run;
@property(readonly, copy) NSString *requestIdentifier;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

