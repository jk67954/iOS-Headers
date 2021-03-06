/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GEOFeatureStyleAttributes, VGLMeshVendor, VGLTexture, VKStyle, VKVectorTile;

@interface VKPolygonGroup : NSObject
{
    VKStyle *_style;
    VKVectorTile *_tile;
    VGLMeshVendor *_fillMeshVendor;
    VGLMeshVendor *_strokeMeshVendor;
    float _contentScale;
    VGLTexture *_texture;
    VGLTexture *_textureVariant;
    float _variation;
    GEOFeatureStyleAttributes *_styleAttributes;
}

@property(retain, nonatomic) GEOFeatureStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(readonly, nonatomic) VGLTexture *textureVariant; // @synthesize textureVariant=_textureVariant;
@property(readonly, nonatomic) VGLMeshVendor *strokeMeshVendor; // @synthesize strokeMeshVendor=_strokeMeshVendor;
@property(readonly, nonatomic) VGLMeshVendor *fillMeshVendor; // @synthesize fillMeshVendor=_fillMeshVendor;
@property(readonly, nonatomic) VGLTexture *texture; // @synthesize texture=_texture;
@property(readonly, nonatomic) VKStyle *style; // @synthesize style=_style;
- (void)updateTextures;
- (unsigned int)triangleCount;
- (id)_textureForName:(id)arg1 scale:(float)arg2;
- (void)dealloc;
- (id)initWithStyle:(id)arg1 tile:(id)arg2 attributes:(id)arg3 contentScale:(float)arg4;

@end

