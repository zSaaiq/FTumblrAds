//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface O2ContentVideo : NSObject
{
    CDUnknownBlockType _dispatch;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType dispatch; // @synthesize dispatch=_dispatch;
- (void)updateEndPlayback;
- (void)updateDuration:(CDStruct_1b6d18a9)arg1;
- (void)updateStreamPaused;
- (void)updateStreamResumed;
- (id)initWithDispatch:(CDUnknownBlockType)arg1;

@end
