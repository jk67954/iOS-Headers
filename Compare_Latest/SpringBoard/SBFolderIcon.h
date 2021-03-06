/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBIcon.h"

#import "SBFolderObserver-Protocol.h"
#import "SBIconIndexNodeObserver-Protocol.h"
#import "SBIconObserver-Protocol.h"

@class NSHashTable, NSMutableArray, NSMutableSet, SBFolder;

@interface SBFolderIcon : SBIcon <SBFolderObserver, SBIconObserver, SBIconIndexNodeObserver>
{
    SBFolder *_folder;
    NSHashTable *_nodeObservers;
    NSMutableSet *_finishedDownloadIdentifiers;
    float _progress;
    NSMutableArray *_cachedMiniGrids;
}

+ (Class)_iconGridImageClass;
+ (unsigned int)_maxIconsInGridImage;
- (BOOL)hasFolderIconView;
- (id)folder;
- (BOOL)isFolderIcon;
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (void)removeNodeObserver:(id)arg1;
- (void)addNodeObserver:(id)arg1;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned int)arg2;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)containedNodeIdentifiers;
- (BOOL)containsNodeIdentifier:(id)arg1;
- (id)nodeIdentifier;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (void)iconImageDidUpdate:(id)arg1;
- (id)miniGridCellImageForIcon:(id)arg1;
- (id)gridImages;
- (void)purgeCachedImages;
- (id)_miniIconGridForExtraPage;
- (id)_miniIconGridForPage:(int)arg1;
- (unsigned int)gridCellIndexForIconIndex:(unsigned int)arg1;
- (unsigned int)listIndexForContainedIcon:(id)arg1;
- (void)_containedIconImageChanged:(id)arg1;
- (void)noteContainedIcon:(id)arg1 replacedIcon:(id)arg2;
- (void)noteContainedIconsAdded:(id)arg1 removed:(id)arg2;
- (void)_adjustForIconsAdded:(id)arg1 removed:(id)arg2;
- (float)progress;
- (void)_updateProgressBar;
- (void)_appPlaceholdersDidChange:(id)arg1;
- (void)_updateBadgeValue;
- (void)updateLabel;
- (void)launch:(int)arg1;
- (id)description;
- (void)localeChanged;
- (BOOL)matchesRepresentation:(id)arg1;
- (id)representation;
- (id)displayName;
- (id)getGenericIconImage:(int)arg1;
- (id)generateIconImage:(int)arg1;
- (void)dealloc;
- (id)initWithFolder:(id)arg1;
- (Class)iconImageViewClassForLocation:(int)arg1;
- (Class)iconViewClassForLocation:(int)arg1;

@end

