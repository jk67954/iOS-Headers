/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UICollectionViewCell.h"

@class PUPhotoView, UIImageView, UIView;

@interface PUPhotosGridCell : UICollectionViewCell
{
    UIView *_selectionOverlayView;
    UIImageView *_selectionBadgeImageView;
    UIView *_highlightOverlayView;
    UIView *_transitionFillerView;
    _Bool _selectionBadgeVisible;
    _Bool _transitionFillerViewEnabled;
    _Bool _transitionIsAppearing;
    PUPhotoView *_photoContentView;
    PUPhotoView *_temporaryPhotoContentView;
    struct UIEdgeInsets _fillerEdgeInsets;
}

@property(nonatomic) _Bool transitionIsAppearing; // @synthesize transitionIsAppearing=_transitionIsAppearing;
@property(nonatomic) _Bool transitionFillerViewEnabled; // @synthesize transitionFillerViewEnabled=_transitionFillerViewEnabled;
@property(nonatomic) struct UIEdgeInsets fillerEdgeInsets; // @synthesize fillerEdgeInsets=_fillerEdgeInsets;
@property(retain, nonatomic) PUPhotoView *temporaryPhotoContentView; // @synthesize temporaryPhotoContentView=_temporaryPhotoContentView;
@property(retain, nonatomic) PUPhotoView *photoContentView; // @synthesize photoContentView=_photoContentView;
@property(nonatomic, getter=isSelectionBadgeVisible) _Bool selectionBadgeVisible; // @synthesize selectionBadgeVisible=_selectionBadgeVisible;
@property(readonly, nonatomic) UIView *transitionFillerView; // @synthesize transitionFillerView=_transitionFillerView;
- (void).cxx_destruct;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)applyLayoutAttributes:(id)arg1;
- (void)_layoutTransitionFillerView;
- (void)layoutSubviews;
- (void)_updateSubviewOrdering;
- (void)_updateSelectionBadge;
- (void)_updateHighlight;
- (void)setTemporaryPhotoImage:(id)arg1 with:(long long)arg2;
- (void)removeTemporaryPhotoContentView;
- (void)addTemporaryPhotoContentView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
