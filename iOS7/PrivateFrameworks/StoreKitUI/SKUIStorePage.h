/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, SKUIArtwork, SKUIUber, SSMetricsConfiguration;

@interface SKUIStorePage : NSObject <NSCopying>
{
    SKUIArtwork *_backgroundArtwork;
    SSMetricsConfiguration *_metricsConfiguration;
    NSString *_metricsPageDescription;
    NSArray *_pageComponents;
    NSString *_pageType;
    NSString *_title;
    SKUIUber *_uber;
    NSMutableDictionary *_values;
}

@property(retain, nonatomic) SKUIUber *uber; // @synthesize uber=_uber;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(copy, nonatomic) NSArray *pageComponents; // @synthesize pageComponents=_pageComponents;
@property(copy, nonatomic) NSString *metricsPageDescription; // @synthesize metricsPageDescription=_metricsPageDescription;
@property(retain, nonatomic) SSMetricsConfiguration *metricsConfiguration; // @synthesize metricsConfiguration=_metricsConfiguration;
@property(retain, nonatomic) SKUIArtwork *backgroundArtwork; // @synthesize backgroundArtwork=_backgroundArtwork;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)valueForPageKey:(id)arg1;
- (void)setValue:(id)arg1 forPageKey:(id)arg2;

@end

