//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSData, NSManagedObject, NSNumber, NSSet, NSString, PLAssetDescription, PLManagedAsset;

@interface PLAdditionalAssetAttributes : PLManagedObject
{
}

- (void)willSave;
- (_Bool)validateForUpdate:(id *)arg1;
- (_Bool)validateForInsert:(id *)arg1;
@property(retain, nonatomic) NSString *longDescription;

// Remaining properties
@property(retain, nonatomic) PLManagedAsset *asset; // @dynamic asset;
@property(retain, nonatomic) PLAssetDescription *assetDescription; // @dynamic assetDescription;
@property(retain, nonatomic) NSManagedObject *cloudMaster; // @dynamic cloudMaster;
@property(retain, nonatomic) NSSet *cloudResources; // @dynamic cloudResources;
@property(retain, nonatomic) NSString *creatorBundleID; // @dynamic creatorBundleID;
@property(retain, nonatomic) NSString *customCollectionName; // @dynamic customCollectionName;
@property(retain, nonatomic) NSString *customCollectionUUID; // @dynamic customCollectionUUID;
@property(retain, nonatomic) NSString *customMomentName; // @dynamic customMomentName;
@property(retain, nonatomic) NSString *customMomentUUID; // @dynamic customMomentUUID;
@property(retain, nonatomic) NSString *editorBundleID; // @dynamic editorBundleID;
@property(retain, nonatomic) NSString *exifTimestampString; // @dynamic exifTimestampString;
@property(retain, nonatomic) NSNumber *externalUsageIntent; // @dynamic externalUsageIntent;
@property(retain, nonatomic) id importSessionID; // @dynamic importSessionID;
@property(retain, nonatomic) NSSet *keywords; // @dynamic keywords;
@property(retain, nonatomic) NSNumber *locationHash; // @dynamic locationHash;
@property(retain, nonatomic) id originalAssetsUUID; // @dynamic originalAssetsUUID;
@property(retain, nonatomic) NSString *originalFilename; // @dynamic originalFilename;
@property(retain, nonatomic) NSNumber *originalFilesize; // @dynamic originalFilesize;
@property(retain, nonatomic) NSData *originalHash; // @dynamic originalHash;
@property(retain, nonatomic) NSNumber *originalHeight; // @dynamic originalHeight;
@property(retain, nonatomic) NSNumber *originalOrientation; // @dynamic originalOrientation;
@property(retain, nonatomic) NSString *originalPath; // @dynamic originalPath;
@property(retain, nonatomic) NSNumber *originalResourceChoice; // @dynamic originalResourceChoice;
@property(retain, nonatomic) NSNumber *originalWidth; // @dynamic originalWidth;
@property(retain, nonatomic) NSString *publicGlobalUUID; // @dynamic publicGlobalUUID;
@property(retain, nonatomic) NSData *reverseLocationData; // @dynamic reverseLocationData;
@property(retain, nonatomic) NSNumber *reverseLocationDataIsValid; // @dynamic reverseLocationDataIsValid;
@property(retain, nonatomic) NSString *timeZoneName; // @dynamic timeZoneName;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSManagedObject *unmanagedAdjustment; // @dynamic unmanagedAdjustment;
@property(retain, nonatomic) NSNumber *uploadAttempts; // @dynamic uploadAttempts;

@end

