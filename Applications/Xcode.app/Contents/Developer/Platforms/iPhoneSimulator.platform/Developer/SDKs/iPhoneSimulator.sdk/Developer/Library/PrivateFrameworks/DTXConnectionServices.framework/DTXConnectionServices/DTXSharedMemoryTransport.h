//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DTXConnectionServices/DTXTransport.h>

@class NSObject<OS_dispatch_queue>;

@interface DTXSharedMemoryTransport : DTXTransport
{
    struct DTXSharedMemory *_shm;
    NSObject<OS_dispatch_queue> *_listenQueue;
    _Bool _creator;
}

+ (id)addressForMemory:(unsigned long long)arg1 inProcess:(int)arg2;
+ (id)addressForPosixSharedMemoryWithName:(id)arg1;
+ (id)schemes;
@property(readonly, nonatomic) struct DTXSharedMemory *sharedMemory; // @synthesize sharedMemory=_shm;
- (id)localAddresses;
- (void)disconnect;
- (unsigned long long)transmit:(const void *)arg1 ofLength:(unsigned long long)arg2;
@property(nonatomic) int remotePid;
- (void)dealloc;
- (id)initWithMappedMemory:(struct DTXSharedMemory *)arg1;
- (id)initWithMemoryAddress:(unsigned long long)arg1 inTask:(unsigned int)arg2;
- (id)initWithRemoteAddress:(id)arg1;
- (id)initWithLocalName:(id)arg1 size:(int)arg2;
- (id)initWithLocalAddress:(id)arg1;
- (_Bool)_setupCreatingSharedMemory:(id)arg1 size:(int)arg2;
- (_Bool)_setupWithShm:(struct DTXSharedMemory *)arg1 asCreator:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long totalSharedMemorySize;

@end

