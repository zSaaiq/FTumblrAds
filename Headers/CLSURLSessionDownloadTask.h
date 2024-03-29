//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLSURLSessionDataTask.h"

@class NSOutputStream, NSString, NSURL;

@interface CLSURLSessionDownloadTask : CLSURLSessionDataTask
{
    CDUnknownBlockType _downloadCompletionHandler;
    NSOutputStream *_outputStream;
    NSURL *_targetURL;
}

@property(copy, nonatomic) CDUnknownBlockType downloadCompletionHandler; // @synthesize downloadCompletionHandler=_downloadCompletionHandler;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)completeForError;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)writeDataToStream:(id)arg1;
- (void)complete;
- (void)cleanup;
- (id)temporaryFileURL;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

