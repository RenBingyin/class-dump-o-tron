//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSURLConnectionRequestDelegate.h"

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSNumber, NSString, NSURL, SSItemImageCollection, SSItemOffer, SSURLConnectionRequest;

@interface SSItem : NSObject <SSURLConnectionRequestDelegate>
{
    NSDate *_expirationDate;
    NSArray *_offers;
    NSDictionary *_properties;
    NSString *_tellAFriendBody;
    NSString *_tellAFriendBodyMIMEType;
    NSMutableArray *_tellAFriendHandlers;
    SSURLConnectionRequest *_tellAFriendRequest;
    NSString *_tellAFriendSubject;
}

@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (id)_tellAFriendDictionary;
- (id)_offers;
- (void)_finishTellAFriendLoadWithError:(id)arg1;
- (void)urlConnectionRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (id)viewReviewsURL;
- (id)videoDetails;
- (id)softwareType;
- (id)shortDescription;
- (void)_setExpirationDate:(id)arg1;
- (id)seriesName;
- (id)sendGiftURL;
- (id)seasonNumber;
- (id)preOrderIdentifier;
- (id)releaseDateString;
- (id)releaseDate;
- (id)rawItemDictionary;
- (id)podcastFeedURL;
- (id)podcastEpisodeGUID;
- (id)numberOfItemsInCollection;
- (id)numberOfCollectionsInCollectionGroup;
- (id)networkName;
- (id)mediaKind;
- (id)longDescription;
- (_Bool)isCompilation;
- (id)indexInCollection;
- (id)genreName;
- (id)genreIdentifier;
- (id)episodeSortIdentifier;
- (id)episodeIdentifier;
- (id)contentRating;
- (id)composerName;
- (id)collectionName;
- (id)collectionIndexInCollectionGroup;
- (id)collectionIdentifier;
- (id)collectionArtistName;
- (id)bundleVersion;
- (id)bundleIdentifier;
- (id)artistIdentifier;
- (id)initWithItemDictionary:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)priceDisplay;
- (id)playableMedia;
- (id)buyParameters;
@property(readonly, nonatomic) NSURL *viewItemURL;
- (id)valueForProperty:(id)arg1;
- (id)tweetURL;
- (id)tweetInitialText;
@property(readonly, nonatomic) NSArray *thumbnailImages;
- (id)tellAFriendSubject;
- (id)tellAFriendBodyURL;
- (id)tellAFriendBodyMIMEType;
- (id)tellAFriendBody;
- (id)relatedItemsForRelationType:(id)arg1;
@property(readonly, nonatomic) long long numberOfUserRatings;
- (long long)numberOfPrintedPages;
- (void)loadTellAFriendMessageWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSNumber *ITunesStoreIdentifier;
@property(readonly, nonatomic) NSString *itemTitle;
- (id)itemOfferForIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *itemKind;
@property(readonly, nonatomic, getter=isHighDefinition) _Bool highDefinition;
@property(readonly, nonatomic, getter=isRestricted) _Bool restricted;
@property(readonly, nonatomic, getter=isGameCenterEnabled) _Bool gameCenterEnabled;
@property(readonly, nonatomic) SSItemImageCollection *imageCollection;
@property(readonly, nonatomic) SSItemOffer *defaultItemOffer;
@property(readonly, nonatomic) float averageUserRating;
@property(readonly, nonatomic) NSString *artistName;
@property(readonly, nonatomic) NSArray *allItemOffers;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

