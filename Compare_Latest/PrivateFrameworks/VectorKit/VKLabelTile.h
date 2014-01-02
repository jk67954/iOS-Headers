/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKTile.h>

@class GEOVectorTile;

// Not exported
@interface VKLabelTile : VKTile
{
    int _tileType;
    struct weak_ptr<vk::LabelManager> _labelManager;
    GEOVectorTile *_modelTile;
    set_4d79ca70 _roadFeatures;
    set_d0a7cc39 _pointFeatures;
    unsigned int _styleStamp;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (const set_d0a7cc39 *)pointFeatures;
- (const set_4d79ca70 *)roadFeatures;
- (id)modelTile;
- (int)tileType;
- (void)updateStylesIfNeededWithManager:(struct LabelManager *)arg1;
- (void)dealloc;
- (id)initWithKey:(const struct VKTileKey *)arg1 modelTile:(id)arg2 tileType:(int)arg3 labelManager:(const shared_ptr_dd1f7020 *)arg4;

@end
