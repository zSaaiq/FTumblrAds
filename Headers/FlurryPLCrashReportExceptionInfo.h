//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FlurryPLCrashReportExceptionInfo : NSObject
{
    NSString *_name;
    NSString *_reason;
    NSArray *_stackFrames;
}

@property(readonly, nonatomic) NSArray *stackFrames; // @synthesize stackFrames=_stackFrames;
@property(readonly, nonatomic) NSString *exceptionReason; // @synthesize exceptionReason=_reason;
@property(readonly, nonatomic) NSString *exceptionName; // @synthesize exceptionName=_name;
- (void)dealloc;
- (id)initWithExceptionName:(id)arg1 reason:(id)arg2 stackFrames:(id)arg3;
- (id)initWithExceptionName:(id)arg1 reason:(id)arg2;

@end

