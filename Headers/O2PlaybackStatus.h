//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class O2PlaybackStatusComponent;

@interface O2PlaybackStatus : NSObject
{
    O2PlaybackStatusComponent *_content;
    O2PlaybackStatusComponent *_ad;
}

+ (id)reduce:(id)arg1 andAction:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) O2PlaybackStatusComponent *ad; // @synthesize ad=_ad;
@property(readonly, nonatomic) O2PlaybackStatusComponent *content; // @synthesize content=_content;
- (id)initWithContent:(id)arg1 ad:(id)arg2;

@end

