//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GIFOperation.h"

@class NSURL;

@interface BaseGIFEncoder : GIFOperation
{
    unsigned long long _result;
    double _delayBetweenFrames;
    CDUnknownBlockType _progressChanged;
    NSURL *_gifURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *gifURL; // @synthesize gifURL=_gifURL;
@property(copy, nonatomic) CDUnknownBlockType progressChanged; // @synthesize progressChanged=_progressChanged;
@property(readonly, nonatomic) double delayBetweenFrames; // @synthesize delayBetweenFrames=_delayBetweenFrames;
@property(readonly, nonatomic) unsigned long long result; // @synthesize result=_result;
- (void)finish;
- (id)initWithGIFURL:(id)arg1 delayBetweenFrames:(double)arg2;
- (id)init;

@end

