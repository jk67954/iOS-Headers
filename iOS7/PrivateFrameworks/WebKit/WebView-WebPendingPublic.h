/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebKit/WebView.h>

@interface WebView (WebPendingPublic)
- (void)removeVisitedLink:(id)arg1;
- (void)addVisitedLinks:(id)arg1;
- (float)mediaVolume;
- (void)setMediaVolume:(float)arg1;
- (void)resetPageZoom:(id)arg1;
- (_Bool)canResetPageZoom;
- (void)zoomPageOut:(id)arg1;
- (_Bool)canZoomPageOut;
- (void)zoomPageIn:(id)arg1;
- (_Bool)canZoomPageIn;
- (float)pageSizeMultiplier;
- (void)setPageSizeMultiplier:(float)arg1;
- (void)setAllowsUndo:(_Bool)arg1;
- (_Bool)allowsUndo;
- (void)scrollDOMRangeToVisible:(id)arg1 withInset:(double)arg2;
- (void)scrollDOMRangeToVisible:(id)arg1;
- (id)rectsForTextMatches;
- (void)unmarkAllTextMatches;
- (unsigned long long)countMatchesForText:(id)arg1 inDOMRange:(id)arg2 options:(unsigned long long)arg3 highlight:(_Bool)arg4 limit:(unsigned long long)arg5 markMatches:(_Bool)arg6;
- (unsigned long long)countMatchesForText:(id)arg1 options:(unsigned long long)arg2 highlight:(_Bool)arg3 limit:(unsigned long long)arg4 markMatches:(_Bool)arg5;
- (_Bool)canMarkAllTextMatches;
- (_Bool)shouldClose;
- (id)historyDelegate;
- (void)setHistoryDelegate:(id)arg1;
- (id)scriptDebugDelegate;
- (void)setScriptDebugDelegate:(id)arg1;
- (_Bool)tabKeyCyclesThroughElements;
- (void)setTabKeyCyclesThroughElements:(_Bool)arg1;
- (void)setMainFrameDocumentReady:(_Bool)arg1;
- (id)DOMRangeOfString:(id)arg1 relativeTo:(id)arg2 options:(unsigned long long)arg3;
- (_Bool)findString:(id)arg1 options:(unsigned long long)arg2;
@end
