//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoder.h"

@interface NSCoder (CACoderAdditions)
- (_Bool)CA_decodeCGFloatArray:(double *)arg1 count:(unsigned long long)arg2 forKey:(id)arg3;
- (void)CA_encodeCGFloatArray:(const double *)arg1 count:(unsigned long long)arg2 forKey:(id)arg3;
- (id)CA_decodeObjectForKey:(id)arg1;
- (void)CA_encodeObject:(id)arg1 forKey:(id)arg2 conditional:(_Bool)arg3;
@end

