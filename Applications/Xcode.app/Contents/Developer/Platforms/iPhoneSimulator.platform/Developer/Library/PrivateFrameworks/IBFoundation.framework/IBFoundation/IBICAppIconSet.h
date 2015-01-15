//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBFoundation/IBICMappedMultipartImage.h>

@interface IBICAppIconSet : IBICMappedMultipartImage
{
    _Bool _preRendered;
}

+ (id)pluralTypeNameForIssues;
+ (id)typeNameForIssues;
+ (id)fileExtension;
+ (id)defaultInstanceForPlatforms:(id)arg1;
+ (id)defaultImageName;
+ (double)currentContentsJSONVersionNumber;
+ (double)latestUnderstoodContentsJSONVersionNumber;
+ (double)earliestUnderstoodContentsJSONVersionNumber;
+ (Class)imageRepClass;
@property(nonatomic, getter=isPreRendered) _Bool preRendered; // @synthesize preRendered=_preRendered;
- (id)descriptionShortClassName;
- (id)contentsDictionary;
- (id)readContentsJSONFromSnapshot:(id)arg1 results:(id)arg2;
- (id)suggestedFileNameForImageRepInSlot:(id)arg1;
- (id)childForIdentifier:(id)arg1;
- (id)imageRepForIdentifier:(id)arg1;
- (id)imageRepForImageRepIdentifier:(id)arg1;
- (id)imageRepForSlot:(id)arg1;

@end

