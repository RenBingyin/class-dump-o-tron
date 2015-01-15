//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/Xcode3Library.h>

@class NSString, Xcode3FileReference;

@interface Xcode3LibraryReference : Xcode3Library
{
    Xcode3FileReference *_fileReference;
    NSString *_disambiguationString;
}

+ (id)libraryForFileReference:(id)arg1;
- (id)disambiguationString;
@property(retain) Xcode3FileReference *fileReference; // @synthesize fileReference=_fileReference;
- (void).cxx_destruct;
- (void)_computeDisambiguationString;
- (id)fileURL;
- (id)path;
- (id)displayName;
- (id)initWithFileReference:(id)arg1;

@end

