//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DYSimulatorDaemonInstance : NSObject
{
    struct _xpc_connection_s *_connection;
    NSString *_xcodePath;
}

@property(readonly, nonatomic) NSString *xcodePath; // @synthesize xcodePath=_xcodePath;
@property(readonly, nonatomic) struct _xpc_connection_s *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithXcodePath:(id)arg1;

@end

