//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FlurryActorStreamComponent.h"

#import "IFlurryErrorFrameSource-Protocol.h"

@class NSString;
@protocol IFlurryFrameCreator, IFlurryFrameDeserializer, IFlurryStreamBuffer;

@interface FlurryErrorFrameSource : FlurryActorStreamComponent <IFlurryErrorFrameSource>
{
    id <IFlurryStreamBuffer> _streamBuffer;
    id <IFlurryFrameCreator> _frameCreator;
    id <IFlurryFrameDeserializer> _frameDeserializer;
}

+ (id)errorFrameSource;
@property(retain, nonatomic) id <IFlurryFrameDeserializer> frameDeserializer; // @synthesize frameDeserializer=_frameDeserializer;
@property(retain, nonatomic) id <IFlurryFrameCreator> frameCreator; // @synthesize frameCreator=_frameCreator;
@property(retain, nonatomic) id <IFlurryStreamBuffer> streamBuffer; // @synthesize streamBuffer=_streamBuffer;
- (void).cxx_destruct;
- (void)onqueue_recordError:(id)arg1 message:(id)arg2 exceptionString:(id)arg3 errorType:(int)arg4 liveReport:(id)arg5;
- (void)recordError:(id)arg1 message:(id)arg2 exceptionString:(id)arg3 errorType:(int)arg4 liveReport:(id)arg5;
- (void)recordError:(id)arg1 message:(id)arg2 error:(id)arg3 liveReport:(id)arg4;
- (void)recordError:(id)arg1 message:(id)arg2 exception:(id)arg3 liveReport:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

