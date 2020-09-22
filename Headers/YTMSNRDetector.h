//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableSet, SKView;
@protocol YTMSNRDetectorDelegate;

@interface YTMSNRDetector : NSObject
{
    _Bool _enabled;
    _Bool _monitoring;
    int _nTelemetrySent;
    id <YTMSNRDetectorDelegate> _delegate;
    double _lastEventTimestamp;
    long long _lastEventType;
    NSMutableSet *_lastEventViewClasses;
    double _lastReportedEventTimestamp;
    double _lastFrameTime;
    SKView *_sceneView;
    CADisplayLink *_displayLink;
    double _maxFrameDuration;
    struct CGPoint _lastEventPosition;
}

+ (id)sharedDetector;
- (void).cxx_destruct;
@property(nonatomic) int nTelemetrySent; // @synthesize nTelemetrySent=_nTelemetrySent;
@property(nonatomic) double maxFrameDuration; // @synthesize maxFrameDuration=_maxFrameDuration;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) SKView *sceneView; // @synthesize sceneView=_sceneView;
@property(nonatomic) double lastFrameTime; // @synthesize lastFrameTime=_lastFrameTime;
@property(nonatomic) double lastReportedEventTimestamp; // @synthesize lastReportedEventTimestamp=_lastReportedEventTimestamp;
@property(retain, nonatomic) NSMutableSet *lastEventViewClasses; // @synthesize lastEventViewClasses=_lastEventViewClasses;
@property(nonatomic) struct CGPoint lastEventPosition; // @synthesize lastEventPosition=_lastEventPosition;
@property(nonatomic) long long lastEventType; // @synthesize lastEventType=_lastEventType;
@property(nonatomic) double lastEventTimestamp; // @synthesize lastEventTimestamp=_lastEventTimestamp;
@property(nonatomic) _Bool monitoring; // @synthesize monitoring=_monitoring;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <YTMSNRDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)displayLinkWillDraw:(id)arg1;
- (void)stopMonitorIfEnabled;
- (void)stopMonitorAsync;
- (id)getStackInfo;
- (void)monitoringDurationEnded;
- (void)startMonitorIfEnabled;
- (void)onEvent:(id)arg1 At:(struct CGPoint)arg2 In:(id)arg3;
- (id)getViewName:(id)arg1;
- (void)disable;
- (void)enable;
- (void)enableWithMaxDurationInMs:(int)arg1;
- (void)dealloc;

@end
