//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC10CoreTumblr18ImpressionReceiver : NSObject
{
    MISSING_TYPE *screenID;
    MISSING_TYPE *analyticsBuffer;
}

- (void).cxx_destruct;
- (void)receiveViewableImpressionForIdentifier:(id)arg1 advertisementType:(int)arg2 additionalParameters:(id)arg3;
- (void)receiveImpressionForLoading:(id)arg1;
- (void)receiveImpression:(id)arg1 advertisementType:(int)arg2 isFilteredByUserTag:(_Bool)arg3 additionalParameters:(id)arg4;
- (void)receiveImpressionForAppAttribution:(id)arg1 isAppInstalled:(_Bool)arg2;
- (void)receiveImpression:(id)arg1 serveId:(id)arg2 advertisementType:(int)arg3 additionalParameters:(id)arg4;
- (void)receiveImpression:(id)arg1 serveId:(id)arg2 advertisementType:(int)arg3;
- (void)receiveImpression:(id)arg1 advertisementType:(int)arg2;
- (_Bool)hasTrackedImpression:(id)arg1;
- (id)init;
- (id)initWithScreenID:(id)arg1 analyticsBuffer:(id)arg2;

@end

