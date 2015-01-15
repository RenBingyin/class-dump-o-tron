//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DYTextureImageBackingStore.h"

@class NSData, NSString;

@interface DYMTLTextureImageBackingStore : NSObject <DYTextureImageBackingStore>
{
    int lock;
    NSData *_data;
    NSData *_uncompressedData;
}

@property(retain, nonatomic) NSData *uncompressedData; // @synthesize uncompressedData=_uncompressedData;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

