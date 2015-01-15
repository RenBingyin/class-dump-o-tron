//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle, NSDictionary, NSString;

@interface Client : NSObject
{
    int _client_type;
    int _pid;
    NSString *_client;
    NSString *_name;
    NSString *_path;
    NSBundle *_bundle;
    NSDictionary *_plugin;
}

@property(readonly) NSDictionary *plugin; // @synthesize plugin=_plugin;
@property(readonly) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly) NSString *path; // @synthesize path=_path;
@property(readonly) int pid; // @synthesize pid=_pid;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *client; // @synthesize client=_client;
@property(readonly) int client_type; // @synthesize client_type=_client_type;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMessage:(id)arg1;
- (id)initWithPid:(int)arg1;

@end

