//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaServices/MSVArtworkServiceRequest.h>

@class NSMutableArray, NSURL;

@interface MSVArtworkServiceResizeRequest : MSVArtworkServiceRequest
{
    _Bool _overwriteExistingDestinations;
    NSURL *_sourceURL;
    NSMutableArray *_resizeDestinations;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableArray *resizeDestinations; // @synthesize resizeDestinations=_resizeDestinations;
@property(nonatomic) _Bool overwriteExistingDestinations; // @synthesize overwriteExistingDestinations=_overwriteExistingDestinations;
@property(copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (Class)operationClass;
- (void)enumerateDestinationsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addDestinationWithSize:(struct CGSize)arg1 url:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceURL:(id)arg1;

@end

