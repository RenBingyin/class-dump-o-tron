//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface GEOPersistenceManager : NSObject
{
}

+ (_Bool)phoneNumberMuidMappingFileExists;
+ (_Bool)writePhoneNumberMuidMappingForMapping:(id)arg1 uniquePhoneNumbers:(id)arg2 error:(id *)arg3;
+ (_Bool)readPhoneNumberMuidMapping:(id *)arg1 uniquePhoneNumbers:(id *)arg2 version:(id *)arg3 error:(id *)arg4;
+ (_Bool)readPhoneNumberMuidMapping:(id *)arg1 uniquePhoneNumbers:(id *)arg2 error:(id *)arg3;
+ (_Bool)createMuidMappingDirectoryWithError:(id *)arg1;

@end

