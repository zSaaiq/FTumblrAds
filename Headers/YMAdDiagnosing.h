//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class YMAdDiagnostics, YMAdLogger;
@protocol YMAdAnalytics;

@interface YMAdDiagnosing : NSObject
{
    YMAdDiagnostics *_diagnostics;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YMAdDiagnostics *diagnostics; // @synthesize diagnostics=_diagnostics;
- (id)initWithDiagnostics:(id)arg1;
@property(readonly, nonatomic) YMAdLogger *logger;
@property(readonly, nonatomic) id <YMAdAnalytics> analytics;

@end

