//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSPortNameServer.h>

@interface NSMachBootstrapServer : NSPortNameServer
{
}

+ (id)sharedInstance;
- (_Bool)removePortForName:(id)arg1;
- (id)portForName:(id)arg1 host:(id)arg2;
- (id)servicePortWithName:(id)arg1;
- (_Bool)registerPort:(id)arg1 name:(id)arg2;
- (id)portForName:(id)arg1;
- (id)portForName:(id)arg1 options:(unsigned long long)arg2;

@end

