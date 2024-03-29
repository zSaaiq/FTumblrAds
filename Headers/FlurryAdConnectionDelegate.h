//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FlurryAdHttpAsyncTask, NSError, NSHTTPURLResponse, NSMutableData, NSMutableURLRequest, NSURL;
@protocol FlurryActionDelegate, FlurryAdHttpAsyncTaskDelegate;

@interface FlurryAdConnectionDelegate : NSObject
{
    _Bool _done;
    int _redirectCount;
    int _adAction;
    int _eventOnStartLoad;
    int _eventOnFinishLoad;
    NSMutableURLRequest *_originalRequest;
    NSHTTPURLResponse *_response;
    NSMutableData *_body;
    NSError *_error;
    id <FlurryAdHttpAsyncTaskDelegate> _httpTaskDelegate;
    FlurryAdHttpAsyncTask *_httpTask;
    NSURL *_referralURL;
    NSURL *_lastURL;
    id <FlurryActionDelegate> _actionDelegate;
}

@property(nonatomic) int eventOnFinishLoad; // @synthesize eventOnFinishLoad=_eventOnFinishLoad;
@property(nonatomic) int eventOnStartLoad; // @synthesize eventOnStartLoad=_eventOnStartLoad;
@property(nonatomic) int adAction; // @synthesize adAction=_adAction;
@property(retain, nonatomic) id <FlurryActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) NSURL *lastURL; // @synthesize lastURL=_lastURL;
@property(retain, nonatomic) NSURL *referralURL; // @synthesize referralURL=_referralURL;
@property(nonatomic) int redirectCount; // @synthesize redirectCount=_redirectCount;
@property(retain, nonatomic) FlurryAdHttpAsyncTask *httpTask; // @synthesize httpTask=_httpTask;
@property(retain, nonatomic) id <FlurryAdHttpAsyncTaskDelegate> httpTaskDelegate; // @synthesize httpTaskDelegate=_httpTaskDelegate;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSMutableData *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSMutableURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
- (void).cxx_destruct;
- (id)constructResponse;
- (void)connectionCanceled;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (id)openReferralURL:(id)arg1 actionDelegate:(id)arg2 adAction:(int)arg3 eventOnStartLoad:(int)arg4 eventOnFinishLoad:(int)arg5;
- (_Bool)isDone;
- (id)initWithTaskDelegate:(id)arg1 taskParent:(id)arg2;
- (id)init;

@end

