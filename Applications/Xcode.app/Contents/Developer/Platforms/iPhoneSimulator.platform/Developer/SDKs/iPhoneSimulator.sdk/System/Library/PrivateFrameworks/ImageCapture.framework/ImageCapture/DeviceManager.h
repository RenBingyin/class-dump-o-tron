//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICDeviceManagerProtocol.h"

@class DeviceManagerThread, NSDictionary, NSMutableDictionary, NSString;

@interface DeviceManager : NSObject <ICDeviceManagerProtocol>
{
    DeviceManagerThread *_thread;
    NSDictionary *_deviceMatchingInfo;
    NSMutableDictionary *_devices;
}

- (void)postNotification:(id)arg1;
- (void)postCommandCompletionNotification:(id)arg1;
- (void)ejectImp:(id)arg1;
- (void)downloadFileImp:(id)arg1;
- (void)deleteFileImp:(id)arg1;
- (void)getMetadataOfFileImp:(id)arg1;
- (void)getThumbnailOfFileImp:(id)arg1;
- (void)syncClockImp:(id)arg1;
- (void)closeSessionImp:(id)arg1;
- (void)openSessionImp:(id)arg1;
- (void)closeDeviceImp:(id)arg1;
- (void)openDeviceImp:(id)arg1;
- (int)eject:(id)arg1;
- (int)downloadFile:(id)arg1 fromDevice:(id)arg2 options:(id)arg3 contextInfo:(void *)arg4;
- (int)deleteFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void *)arg3;
- (int)getMetadataOfFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void *)arg3;
- (int)getThumbnailOfFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void *)arg3;
- (int)syncClock:(id)arg1 contextInfo:(void *)arg2;
- (int)closeSession:(id)arg1 contextInfo:(void *)arg2;
- (int)openSession:(id)arg1 contextInfo:(void *)arg2;
- (int)closeDevice:(id)arg1 contextInfo:(void *)arg2;
- (int)openDevice:(id)arg1 contextInfo:(void *)arg2;
- (void)stopRunning;
- (void)startRunning;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

