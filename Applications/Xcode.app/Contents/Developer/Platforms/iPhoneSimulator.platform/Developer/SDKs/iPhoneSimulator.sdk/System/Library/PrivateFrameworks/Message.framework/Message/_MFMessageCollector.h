//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MessageConsumer.h"
#import "QueryProgressMonitor.h"

@class MFActivityMonitor, NSMutableArray;

@interface _MFMessageCollector : NSObject <MessageConsumer, QueryProgressMonitor>
{
    NSMutableArray *_messages;
    MFActivityMonitor *_monitor;
    CDUnknownBlockType _transmogrifier;
}

@property(copy, nonatomic) CDUnknownBlockType transmogrifier; // @synthesize transmogrifier=_transmogrifier;
- (_Bool)shouldCancel;
- (void)newMessagesAvailable:(id)arg1;
- (id)copyMessages;
- (id)messages;
- (void)dealloc;
- (id)init;

@end

