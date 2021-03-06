/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSATSGlyphStorage, NSATSLineFragment;

@interface _NSATSTypesetterGuts : NSObject
{
    NSATSLineFragment *_lineFragment;
    NSATSGlyphStorage *_glyphStorage;
    unsigned int _lastGlyphIndex;
    unsigned int _lastContainerIndex;
    CDStruct_6c9b9d05 *_typesetterAuxiliary;
    CDUnion_a04c68c6 *_lineFragmentRectArgs;
    char *_bidiLevels;
    struct {
        unsigned int _isiChatTypesetter:1;
        unsigned int _resToWillSetLineFragmentRect:1;
        unsigned int _isBusy:1;
        unsigned int _baselineRendering:1;
        unsigned int _forceWordWrapping:1;
        unsigned int _reserved:27;
    } _flags;
    struct {
        unsigned int _resolvedWritingDirection:2;
        unsigned int _reserved:30;
    } _paragraphState;
    struct __CTTypesetter *_ctTypesetter;
}

- (void)finalize;
- (void)dealloc;
- (id)initWithTypesetter:(id)arg1;

@end

