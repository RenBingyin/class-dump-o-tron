//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSString, PHAsset, PHAssetCollection;

@interface _PUPhotosGridProgressInfo : NSObject
{
    NSString *_identifier;
    PHAsset *_asset;
    PHAssetCollection *_collection;
    NSIndexPath *_cachedIndexPath;
    double _progress;
}

@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSIndexPath *cachedIndexPath; // @synthesize cachedIndexPath=_cachedIndexPath;
@property(retain, nonatomic) PHAssetCollection *collection; // @synthesize collection=_collection;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end

