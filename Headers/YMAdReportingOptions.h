//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIViewController, YMAdImpressionPosition;

@interface YMAdReportingOptions : NSObject
{
    _Bool _doNotPresentPage;
    UIViewController *_presentingViewController;
    YMAdImpressionPosition *_impressionPosition;
    NSString *_instrumentationTag;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool doNotPresentPage; // @synthesize doNotPresentPage=_doNotPresentPage;
@property(retain, nonatomic) NSString *instrumentationTag; // @synthesize instrumentationTag=_instrumentationTag;
@property(retain, nonatomic) YMAdImpressionPosition *impressionPosition; // @synthesize impressionPosition=_impressionPosition;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;

@end
