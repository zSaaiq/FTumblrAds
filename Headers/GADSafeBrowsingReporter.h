//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GADAutoClickProtection, NSSet, NSString, NSURL;

@interface GADSafeBrowsingReporter : NSObject
{
    NSURL *_reportURL;
    _Bool _shouldReportMaliciousAds;
    _Bool _shouldReportBenignAds;
    _Bool _shouldSendRenderedAd;
    GADAutoClickProtection *_autoClickProtection;
    NSString *_clickString;
    NSSet *_excludedHeaders;
}

@property(readonly, nonatomic) NSSet *excludedHeaders; // @synthesize excludedHeaders=_excludedHeaders;
@property(readonly, copy, nonatomic) NSString *clickString; // @synthesize clickString=_clickString;
@property(readonly, nonatomic) GADAutoClickProtection *autoClickProtection; // @synthesize autoClickProtection=_autoClickProtection;
@property(readonly, nonatomic) _Bool shouldSendRenderedAd; // @synthesize shouldSendRenderedAd=_shouldSendRenderedAd;
@property(readonly, nonatomic) _Bool shouldReportBenignAds; // @synthesize shouldReportBenignAds=_shouldReportBenignAds;
@property(readonly, nonatomic) _Bool shouldReportMaliciousAds; // @synthesize shouldReportMaliciousAds=_shouldReportMaliciousAds;
- (void).cxx_destruct;
- (void)reportResourceCollection:(id)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end

