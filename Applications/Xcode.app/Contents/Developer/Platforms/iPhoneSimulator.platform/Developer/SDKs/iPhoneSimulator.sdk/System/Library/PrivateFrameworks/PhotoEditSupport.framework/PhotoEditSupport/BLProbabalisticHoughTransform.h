//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BLProbabalisticHoughTransform : NSObject
{
    int _cols;
    int _rows;
    float _rho;
    float _theta;
    int _threshold;
    int _lineLength;
    int _lineGap;
    int _numGoodLines;
}

- (void)leastSquareSmooth:(CDStruct_74df0099 *)arg1;
- (CDStruct_74df0099 *)houghLinesProbabalistic:(char *)arg1 rows:(int)arg2 cols:(int)arg3 numLines:(int *)arg4;

@end

