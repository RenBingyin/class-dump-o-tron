//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface DYMobileServiceConnection : NSObject
{
    struct _AMDServiceConnection *_connection;
}

@property(readonly, nonatomic) struct _AMDServiceConnection *connection; // @synthesize connection=_connection;
- (void)dealloc;
- (id)initWithServiceConnection:(struct _AMDServiceConnection *)arg1;
- (id)init;

@end

