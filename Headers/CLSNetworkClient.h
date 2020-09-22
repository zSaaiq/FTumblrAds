//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSFileManager, FABCertificatePinner, NSOperationQueue, NSString, NSURLSession;
@protocol CLSNetworkClientDelegate;

@interface CLSNetworkClient : NSObject
{
    NSURLSession *_session;
    _Bool _canUseBackgroundSession;
    id <CLSNetworkClientDelegate> _delegate;
    NSOperationQueue *_operationQueue;
    FABCertificatePinner *_certPinner;
    CDUnknownBlockType _backgroundCompletionHandler;
    CLSFileManager *_fileManager;
}

+ (id)pinner;
@property(retain, nonatomic) CLSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(nonatomic) _Bool canUseBackgroundSession; // @synthesize canUseBackgroundSession=_canUseBackgroundSession;
@property(copy, nonatomic) CDUnknownBlockType backgroundCompletionHandler; // @synthesize backgroundCompletionHandler=_backgroundCompletionHandler;
@property(readonly, nonatomic) FABCertificatePinner *certPinner; // @synthesize certPinner=_certPinner;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak id <CLSNetworkClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)handleTaskDescription:(id)arg1 completedWithError:(id)arg2;
- (void)handleTask:(id)arg1 completedWithError:(id)arg2;
- (void)restartTask:(id)arg1;
- (void)runAfterRetryValueFromResponse:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)checkForExistingTaskMatchingDescription:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)checkSession:(id)arg1 forTasksMatchingDescription:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)taskArray:(id)arg1 hasTaskMatchingDescription:(id)arg2;
- (id)relativeTaskPathForAbsolutePath:(id)arg1;
- (id)absolutePathForRelativeTaskPath:(id)arg1;
- (id)rootPath;
- (void)startNewUploadRequest:(id)arg1 filePath:(id)arg2;
- (void)startImmediateUploadRequest:(id)arg1 filePath:(id)arg2;
- (void)startUploadRequest:(id)arg1 filePath:(id)arg2 immediately:(_Bool)arg3;
- (void)attemptToReconnectBackgroundSessionWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool supportsBackgroundRequests;
- (_Bool)NSURLSessionAvailable;
@property(readonly, nonatomic) NSURLSession *session;
- (id)initWithQueue:(id)arg1 fileManager:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

