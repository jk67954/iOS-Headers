/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "EKDayAllDayViewDelegate-Protocol.h"
#import "EKDayTimeViewDelegate-Protocol.h"
#import "EKDayViewContentDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class EKDayAllDayView, EKDayTimeView, EKDayViewContent, EKEvent, NSArray, NSCalendar, NSDate, NSDateComponents, UIColor, UIImageView, UIScrollAnimation, UIScrollView;

@interface EKDayView : UIView <UIScrollViewDelegate, EKDayAllDayViewDelegate, EKDayViewContentDelegate, EKDayTimeViewDelegate>
{
    UIScrollView *_scroller;
    int _orientation;
    double _dayStart;
    double _dayEnd;
    double _nextDSTTransition;
    BOOL _putSelectionOnTop;
    BOOL _scrollbarShowsInside;
    BOOL _scrollingToOccurrence;
    BOOL _settingDate;
    BOOL _userScrolling;
    BOOL _scrollToOccurrencesOnNextReload;
    UIImageView *_topVerticalGridExtension;
    UIImageView *_bottomVerticalGridExtension;
    UIView *_bottomLine;
    NSDate *_lastInspectedOccurrenceOnDate;
    struct CGSize _scrolledToFirstVisibleSecondForSize;
    EKDayAllDayView *_allDayView;
    EKDayViewContent *_dayContent;
    EKDayTimeView *_timeView;
    UIScrollAnimation *_scrollAnimation;
    UIView *_allDayDividerViewTop;
    UIView *_allDayDividerViewBottom;
    BOOL _allowsOccurrenceSelection;
    BOOL _alignsMidnightToTop;
    BOOL _shouldEverShowTimeIndicators;
    id <EKDayViewDelegate> _delegate;
    id <EKDayViewDataSource> _dataSource;
    NSDateComponents *_displayDate;
    NSCalendar *_calendar;
    float _contentInset;
    int _outlineStyle;
    UIColor *_occurrenceTextBackgroundColor;
}

@property(retain, nonatomic) UIColor *occurrenceTextBackgroundColor; // @synthesize occurrenceTextBackgroundColor=_occurrenceTextBackgroundColor;
@property(nonatomic) int outlineStyle; // @synthesize outlineStyle=_outlineStyle;
@property(nonatomic) BOOL shouldEverShowTimeIndicators; // @synthesize shouldEverShowTimeIndicators=_shouldEverShowTimeIndicators;
@property(readonly, nonatomic) float contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) BOOL alignsMidnightToTop; // @synthesize alignsMidnightToTop=_alignsMidnightToTop;
@property(nonatomic) BOOL allowsOccurrenceSelection; // @synthesize allowsOccurrenceSelection=_allowsOccurrenceSelection;
@property(readonly, nonatomic) double dayEnd; // @synthesize dayEnd=_dayEnd;
@property(readonly, nonatomic) double dayStart; // @synthesize dayStart=_dayStart;
@property(copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(copy, nonatomic) NSDateComponents *displayDate; // @synthesize displayDate=_displayDate;
@property(nonatomic) __weak id <EKDayViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <EKDayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addViewToScroller:(id)arg1 isAllDay:(BOOL)arg2;
- (BOOL)isAllDayLabelHighlighted;
- (void)setAllDayLabelHighlighted:(BOOL)arg1;
- (double)highlightedHour;
- (void)highlightHour:(double)arg1;
- (float)allDayRegionHeight;
- (BOOL)scrollTowardPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointAtDate:(double)arg1 isAllDay:(BOOL)arg2;
- (double)_adjustSecondBackwardForDSTHole:(double)arg1;
- (double)_adjustSecondForwardForDSTHole:(double)arg1;
- (double)dateAtPoint:(struct CGPoint)arg1 isAllDay:(char *)arg2 requireAllDayRegionInsistence:(BOOL)arg3;
- (double)dateAtPoint:(struct CGPoint)arg1 isAllDay:(char *)arg2;
- (id)occurrenceViewAtPoint:(struct CGPoint)arg1;
- (void)_timeViewTapped:(id)arg1;
- (void)dayViewContent:(id)arg1 didTapPinnedOccurrence:(id)arg2;
- (void)dayViewContent:(id)arg1 didTapInEmptySpaceOnDay:(double)arg2;
- (void)dayViewContent:(id)arg1 didSelectEvent:(id)arg2;
- (void)dayViewContent:(id)arg1 didCreateOccurrenceViews:(id)arg2;
- (void)occurrencePressed:(id)arg1 onDay:(double)arg2;
- (void)allDayViewDidLayoutSubviews:(id)arg1;
- (void)allDayView:(id)arg1 didSelectEvent:(id)arg2;
- (void)reloadData;
- (void)setScrollerYInset:(float)arg1 keepingYPointVisible:(float)arg2;
- (void)scrollEventsIntoViewAnimated:(BOOL)arg1;
- (void)_disposeAllDayView;
- (void)_createAllDayView;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)firstVisibleSecondChanged;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_notifyDelegateOfFinishedScrollingToOccurrence;
@property(retain, nonatomic) EKEvent *dimmedOccurrence;
- (id)selectedEvent;
- (void)selectEvent:(id)arg1;
- (struct CGRect)rectForEvent:(id)arg1;
- (float)yPositionPerhapsMatchingAllDayOccurrence:(id)arg1;
- (id)occurrenceViewForEvent:(id)arg1;
- (void)resetLastSelectedOccurrencePoint;
- (id)_generateVerticalGridExtensionImage;
- (void)_clearVerticalGridExtensionImageCache;
- (struct CGRect)_scrollerRect;
- (int)_secondAtPosition:(float)arg1;
- (float)_positionOfSecond:(int)arg1;
@property(readonly, nonatomic) float scrollBarOffset;
- (float)_verticalOffset;
- (void)bringEventToFront:(id)arg1;
@property(readonly, nonatomic) NSArray *occurrenceViews;
- (void)dayAllDayView:(id)arg1 occurrenceViewClicked:(id)arg2;
- (void)dayContentView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)dayOccurrenceViewClicked:(id)arg1 atPoint:(struct CGPoint)arg2;
- (CDStruct_b0fa4487)_selectedDate;
- (void)scrollToDate:(id)arg1 animated:(BOOL)arg2 whenFinished:(id)arg3;
- (void)_finishedScrollToSecond;
- (void)_scrollToSecond:(int)arg1 animated:(BOOL)arg2 whenFinished:(id)arg3;
- (void)scrollToEvent:(id)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) UIView *allDayView;
@property(nonatomic) int occurrenceBackgroundStyle;
@property(retain, nonatomic) UIColor *occurrenceLocationColor;
@property(retain, nonatomic) UIColor *occurrenceTitleColor;
@property(retain, nonatomic) UIColor *gridLineColor;
@property(nonatomic) struct _NSRange hoursToRender;
@property(retain, nonatomic) UIColor *timeViewTextColor;
@property(nonatomic) BOOL allowsScrolling;
@property(nonatomic) unsigned int firstVisibleSecond;
@property(nonatomic) BOOL showsLeftBorder;
@property(nonatomic) BOOL eventsFillGrid;
@property(nonatomic) BOOL showsTimeLine;
- (struct CGRect)currentTimeRectInView:(id)arg1;
@property(nonatomic) BOOL showsTimeMarker;
- (void)adjustForSignificantTimeChange;
- (void)setOrientation:(int)arg1;
- (void)setTimeZone:(id)arg1;
- (void)_adjustForDateOrCalendarChange;
- (void)_stopScrolling;
- (void)adjustFrameToSpanStartDate:(id)arg1 endDate:(id)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_localeChanged;
- (id)description;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(int)arg2 displayDate:(id)arg3 backgroundColor:(id)arg4 opaque:(BOOL)arg5 scrollbarShowsInside:(BOOL)arg6;

@end

