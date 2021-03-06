/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class VGLUncompressedTexture, VKImage;

@interface VGLIcon : NSObject
{
    VKImage *_image;
    struct CGRect _textureRect;
    int _iconTag;
}

@property(readonly, nonatomic) int iconTag; // @synthesize iconTag=_iconTag;
- (id).cxx_construct;
- (BOOL)isCityDot;
- (void)setIconTagFromName:(id)arg1;
@property(readonly, nonatomic) struct CGRect textureRect;
@property(readonly, nonatomic) VGLUncompressedTexture *texture;
- (BRectImp_7721609a)textureCoordinateRect;
- (CDStruct_818bb265)quadAtPixel:(Vec2Imp_1782d7e3)arg1;
- (CDStruct_818bb265)rectAtPixel:(Vec2Imp_1782d7e3)arg1;
- (void)dealloc;
- (id)initWithPackedIcon:(id)arg1 imageAtlas:(id)arg2 quadSize:(struct CGSize)arg3;
- (id)initWithImage:(id)arg1;
@property(readonly, nonatomic) float verticalPadding;

@end

