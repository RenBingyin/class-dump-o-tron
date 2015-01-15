//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class AVAssetTrack, AVMediaSelectionOptionInternal, NSArray, NSLocale, NSString;

@interface AVMediaSelectionOption : NSObject <NSCopying>
{
    AVMediaSelectionOptionInternal *_mediaSelectionOption;
}

+ (id)mediaSelectionOptionForAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 hasUnderlyingTrack:(_Bool)arg4;
@property(readonly, nonatomic) int trackID;
@property(readonly, nonatomic) AVAssetTrack *track;
- (id)outOfBandIdentifier;
- (id)outOfBandSource;
@property(readonly, nonatomic) NSString *displayName;
- (id)displayNameWithLocale:(id)arg1;
- (id)displayNameWithLocale:(id)arg1 fallingBackToMatchingUndeterminedAndMultilingual:(_Bool)arg2;
- (id)_preferredMetadataTitleAccordingToPreferredLanguages:(id)arg1 fallingBackToMatchingEmptyLocale:(_Bool)arg2;
- (id)propertyList;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)metadataForFormat:(id)arg1;
@property(readonly, nonatomic) NSArray *availableMetadataFormats;
- (id)_title;
@property(readonly, nonatomic) NSArray *commonMetadata;
- (_Bool)displaysNonForcedSubtitles;
- (id)associatedPersistentIDs;
- (id)associatedExtendedLanguageTag;
@property(readonly, nonatomic) NSString *extendedLanguageTag;
@property(readonly, nonatomic) NSLocale *locale;
- (_Bool)_isDesignatedDefault;
@property(readonly, nonatomic, getter=isPlayable) _Bool playable;
- (_Bool)hasMediaCharacteristic:(id)arg1;
@property(readonly, nonatomic) NSArray *mediaSubTypes;
@property(readonly, nonatomic) NSString *mediaType;
- (id)_groupMediaType;
- (id)_groupID;
- (id)group;
- (id)optionID;
- (id)dictionary;
- (id)_ancillaryDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

