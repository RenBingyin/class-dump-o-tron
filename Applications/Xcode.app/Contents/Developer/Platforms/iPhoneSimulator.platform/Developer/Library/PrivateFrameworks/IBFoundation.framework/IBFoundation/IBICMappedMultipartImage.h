//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBFoundation/IBICMultipartImage.h>

@interface IBICMappedMultipartImage : IBICMultipartImage
{
}

+ (id)orderedSlotComponentClasses;
+ (double)currentContentsJSONVersionNumber;
+ (double)latestUnderstoodContentsJSONVersionNumber;
+ (double)earliestUnderstoodContentsJSONVersionNumber;
- (id)contentsDictionary;
- (id)infoDictionary;
- (void)populateContentsJSONImageEntry:(id)arg1 forImageRep:(id)arg2;
- (_Bool)shouldIncludeImageRepInContentsJSON:(id)arg1;
- (void)replaceChildrenFromFileSystemSnapshot:(id)arg1 results:(id)arg2;
- (id)imageRepsByMergingLooseFilesContentFromSnapshot:(id)arg1 withJSONReferencedContent:(id)arg2 results:(id)arg3;
- (id)imageRepsFromContentsJSONImageEntries:(id)arg1 results:(id)arg2;
- (id)imageRepFromImageEntry:(id)arg1 results:(id)arg2;
- (id)validatedContentsJSONImageEntriesFromSnapshot:(id)arg1 results:(id)arg2;
- (id)readContentsJSONFromSnapshot:(id)arg1 results:(id)arg2;
- (_Bool)fileStructureSnapshotChildWouldMapToModelChild:(id)arg1;
- (id)manifestFileData;
- (id)manifestFileName;
- (id)orderedSlotComponentClasses;

@end
