/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface CPTextLineMaker : NSObject
{
    NSMutableArray *textLines;
}

- (unsigned int)makeTextLines:(id)arg1;
- (void)zOrderSplitLines:(id)arg1;
- (void)splitByGraphic:(id)arg1 with:(struct CPPDFContext *)arg2;
- (id)textLines;
- (void)dealloc;

@end

