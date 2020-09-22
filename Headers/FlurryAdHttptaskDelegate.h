//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FlurryAdHttpAsyncTaskDelegate-Protocol.h"

@class NSString;

@interface FlurryAdHttptaskDelegate : NSObject <FlurryAdHttpAsyncTaskDelegate>
{
    _Bool _needLogging;
    _Bool _sendYCookies;
    NSString *_adLogGUID;
    NSString *_urlString;
    NSString *_eventString;
    double _expiryTime;
    double _repeatDuration;
}

@property(nonatomic) double repeatDuration; // @synthesize repeatDuration=_repeatDuration;
@property(nonatomic) _Bool sendYCookies; // @synthesize sendYCookies=_sendYCookies;
@property(nonatomic) double expiryTime; // @synthesize expiryTime=_expiryTime;
@property(retain, nonatomic) NSString *eventString; // @synthesize eventString=_eventString;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(nonatomic) _Bool needLogging; // @synthesize needLogging=_needLogging;
@property(retain, nonatomic) NSString *adLogGUID; // @synthesize adLogGUID=_adLogGUID;
- (void).cxx_destruct;
- (void)logResponse:(id)arg1;
- (void)requestSuccessful:(id)arg1 withResponse:(id)arg2;
- (void)requestDidCancel:(id)arg1 withResponse:(id)arg2;
- (void)manageUrlStorage;
- (void)requestDidFail:(id)arg1 withResponse:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

