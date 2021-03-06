//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FlickrPhotoSet : NSObject
{
    long long _identifier;
    long long _primaryPhotoID;
    long long _farmID;
    long long _serverID;
    NSString *_secret;
    NSString *_title;
    NSString *_photoSetDescription;
}

@property(copy, nonatomic) NSString *photoSetDescription; // @synthesize photoSetDescription=_photoSetDescription;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *secret; // @synthesize secret=_secret;
@property(nonatomic) long long serverID; // @synthesize serverID=_serverID;
@property(nonatomic) long long farmID; // @synthesize farmID=_farmID;
@property(nonatomic) long long primaryPhotoID; // @synthesize primaryPhotoID=_primaryPhotoID;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;

@end

