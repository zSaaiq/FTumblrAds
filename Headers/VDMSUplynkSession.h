//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, VDMSPingClient;

@interface VDMSUplynkSession : NSObject
{
    NSString *_zonePrefix;
    NSString *_sessionId;
    VDMSPingClient *_pingClient;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VDMSPingClient *pingClient; // @synthesize pingClient=_pingClient;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *zonePrefix; // @synthesize zonePrefix=_zonePrefix;

@end

