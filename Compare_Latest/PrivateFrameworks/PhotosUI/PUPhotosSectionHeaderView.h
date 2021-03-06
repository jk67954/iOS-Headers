/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UICollectionReusableView.h"

@class NSArray, NSDate, NSString, UIButton, UIImage, UIImageView, UILabel, _UIBackdropView;

@interface PUPhotosSectionHeaderView : UICollectionReusableView
{
    UILabel *_titleLabel;
    UIImageView *_titleBgView;
    UILabel *_locationsLabel;
    UILabel *_dateLabel;
    UIImageView *_locationsIconView;
    UIButton *_actionButton;
    UIImage *_titleBgImage;
    struct CGSize _titleBgImageSize;
    struct UIEdgeInsets _titleBgInsets;
    float _titleBgOpacity;
    struct CGSize _titleBgOffset;
    struct CGSize _actionButtonBaseSize;
    BOOL _animateNextLayout;
    BOOL _allowBlurringWhenFloating;
    _UIBackdropView *_backdropView;
    BOOL _showsActionButton;
    BOOL _allowsLocationInteraction;
    NSString *_backdropViewGroupName;
    id <PUPhotosSectionHeaderViewDelegate> _delegate;
    int _sectionIndex;
    unsigned int _style;
    NSString *_sectionTitle;
    NSArray *_sectionLocations;
    NSDate *_sectionStartDate;
    NSDate *_sectionEndDate;
    NSString *_actionButtonTitle;
    struct UIEdgeInsets _contentInsets;
}

+ (void)_updateLabelGlobalCachedSizes;
+ (void)initialize;
@property(nonatomic) BOOL allowsLocationInteraction; // @synthesize allowsLocationInteraction=_allowsLocationInteraction;
@property(copy, nonatomic) NSString *actionButtonTitle; // @synthesize actionButtonTitle=_actionButtonTitle;
@property(nonatomic) BOOL showsActionButton; // @synthesize showsActionButton=_showsActionButton;
@property(readonly, nonatomic) NSDate *sectionEndDate; // @synthesize sectionEndDate=_sectionEndDate;
@property(readonly, nonatomic) NSDate *sectionStartDate; // @synthesize sectionStartDate=_sectionStartDate;
@property(retain, nonatomic) NSArray *sectionLocations; // @synthesize sectionLocations=_sectionLocations;
@property(retain, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
@property(nonatomic) int sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) __weak id <PUPhotosSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *backdropViewGroupName; // @synthesize backdropViewGroupName=_backdropViewGroupName;
@property(nonatomic) BOOL allowBlurringWhenFloating; // @synthesize allowBlurringWhenFloating=_allowBlurringWhenFloating;
- (void).cxx_destruct;
- (struct CGSize)_preferredSizeForText:(id)arg1 withFont:(id)arg2;
- (struct CGSize)_preferredSizeForLabel:(id)arg1;
- (void)prepareForReuse;
- (void)prepareBackdropViewForBackground;
- (void)_layoutSubviewsStyleFullDetail;
- (void)_layoutSubviewsStyleOnelineDetail;
- (void)_layoutSubviewsStyleOnelineMinimal;
- (void)_layoutSubviewStyleOverlayTitle;
- (void)_layoutSubviews;
- (void)_getTitleFrame:(struct CGRect *)arg1 actionButtonFrame:(struct CGRect *)arg2;
- (void)layoutSubviews;
- (void)_tapGesture:(id)arg1;
- (id)_sectionPrettyDateForStartDate:(id)arg1 endDate:(id)arg2 appendYear:(BOOL)arg3;
- (void)_updateAllowsLocationInteractionAnimated:(BOOL)arg1;
- (void)_updateActionButtonAnimated:(BOOL)arg1;
- (void)_updateDateLabelAnimated:(BOOL)arg1;
- (void)_updateLocationsLabelVisibilityAnimated:(BOOL)arg1;
- (void)_updateTitleBackgroundAnimated:(BOOL)arg1;
- (void)_updateTitleLabelAnimated:(BOOL)arg1;
- (void)_handleActionButton:(id)arg1;
- (void)_handleSignificantDateChange:(id)arg1;
- (BOOL)_disableRasterizeInAnimations;
- (void)applyLayoutAttributes:(id)arg1;
- (void)blurBackground:(BOOL)arg1;
- (void)_updateBackdropViewGroupName;
- (void)setAllowsLocationInteraction:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowsActionButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSectionStartDate:(id)arg1 endDate:(id)arg2 animated:(BOOL)arg3;
- (void)setSectionLocations:(id)arg1 animated:(BOOL)arg2;
- (void)setSectionTitleBackgroundImage:(id)arg1 stretchableInsets:(struct UIEdgeInsets)arg2 offset:(struct CGSize)arg3 opacity:(float)arg4 animated:(BOOL)arg5;
- (void)setSectionTitle:(id)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

