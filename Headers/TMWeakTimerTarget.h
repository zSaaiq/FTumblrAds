//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TMWeakTimerTarget : NSObject
{
    NSObject *_target;
    SEL _selector;
}

- (void).cxx_destruct;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak NSObject *target; // @synthesize target=_target;
- (void)timerDidFire:(id)arg1;
- (id)init;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end
