//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink;

@interface SDDisplayLink : NSObject
{
    id _target;
    SEL _selector;
    CADisplayLink *_displayLink;
}

+ (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
- (void)displayLinkDidRefresh:(id)arg1;
- (void)stop;
- (void)start;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
@property(readonly, nonatomic) _Bool isRunning;
@property(readonly, nonatomic) double duration;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;

@end
