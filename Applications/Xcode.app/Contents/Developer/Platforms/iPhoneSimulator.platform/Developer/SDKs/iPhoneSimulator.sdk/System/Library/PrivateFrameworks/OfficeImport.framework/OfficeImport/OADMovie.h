//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OCDDelayedMedia.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface OADMovie : OCDDelayedMedia
{
    NSData *mData;
    NSString *mName;
    float mStart;
    float mEnd;
    _Bool loop;
}

@property _Bool loop; // @synthesize loop;
@property float movieEndPoint; // @synthesize movieEndPoint=mEnd;
@property float movieStartPoint; // @synthesize movieStartPoint=mStart;
@property(retain) NSString *name; // @synthesize name=mName;
@property(retain) NSData *data; // @synthesize data=mData;
@property(readonly) _Bool isAudioOnly;
- (void)dealloc;

@end

