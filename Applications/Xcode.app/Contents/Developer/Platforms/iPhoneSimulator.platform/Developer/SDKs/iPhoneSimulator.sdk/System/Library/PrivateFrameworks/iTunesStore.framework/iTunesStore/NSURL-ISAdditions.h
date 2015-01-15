//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (ISAdditions)
+ (id)unescapedStringForString:(id)arg1;
+ (id)queryStringForDictionary:(id)arg1 escapedValues:(_Bool)arg2;
+ (id)escapedStringForString:(id)arg1;
+ (id)copyDictionaryForQueryString:(id)arg1 unescapedValues:(_Bool)arg2;
- (void)enumerateQueryWithBlock:(CDUnknownBlockType)arg1;
- (id)urlByReplacingSchemeWithScheme:(id)arg1;
- (id)schemeSwizzledURL;
- (_Bool)isSafeExternalURL;
- (id)urlBySettingQueryStringDictionary:(id)arg1;
- (id)URLByAppendingQueryParameter:(id)arg1 value:(id)arg2;
- (id)copyQueryStringDictionaryWithUnescapedValues:(_Bool)arg1;
@end

