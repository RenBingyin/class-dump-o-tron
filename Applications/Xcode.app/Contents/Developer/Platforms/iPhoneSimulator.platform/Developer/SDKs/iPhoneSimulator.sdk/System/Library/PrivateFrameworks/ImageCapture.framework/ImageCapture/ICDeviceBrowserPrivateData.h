//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface ICDeviceBrowserPrivateData : NSObject
{
    id _delegate;
    _Bool _browsing;
    NSMutableArray *_internalDevices;
}

@property(retain) NSMutableArray *internalDevices; // @synthesize internalDevices=_internalDevices;
@property(getter=isBrowsing) _Bool browsing; // @synthesize browsing=_browsing;
@property id delegate; // @synthesize delegate=_delegate;
- (void)finalize;
- (void)dealloc;

@end
