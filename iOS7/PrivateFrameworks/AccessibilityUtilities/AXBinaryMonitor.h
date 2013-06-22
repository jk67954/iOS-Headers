/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface AXBinaryMonitor : NSObject
{
    NSMutableDictionary *_bundleHandlerMap;
    NSMutableDictionary *_frameworkHandlerMap;
    NSMutableDictionary *_dylibHandlerMap;
}

+ (id)sharedInstance;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *dylibHandlerMap; // @synthesize dylibHandlerMap=_dylibHandlerMap;
@property(retain, nonatomic) NSMutableDictionary *frameworkHandlerMap; // @synthesize frameworkHandlerMap=_frameworkHandlerMap;
@property(retain, nonatomic) NSMutableDictionary *bundleHandlerMap; // @synthesize bundleHandlerMap=_bundleHandlerMap;
- (id)_dylibNameForImage:(id)arg1;
- (id)_bundleNameForImage:(id)arg1;
- (id)_frameworkNameForImage:(id)arg1;
- (BOOL)_loadImageIsDylib:(id)arg1;
- (BOOL)_loadImageIsBundle:(id)arg1;
- (BOOL)_loadImageIsFramework:(id)arg1;
- (void)_addHandler:(id)arg1 withName:(id)arg2 toMap:(id *)arg3;
- (void)addHandler:(id)arg1 forDylib:(void)arg2;
- (void)addHandler:(id)arg1 forFramework:(void)arg2;
- (void)addHandler:(id)arg1 forBundleName:(void)arg2;
- (void)addHandler:(id)arg1 forBundleID:(void)arg2;
- (void)_handleLoadedImagePath:(id)arg1;
- (void)dealloc;
- (id)init;

@end
