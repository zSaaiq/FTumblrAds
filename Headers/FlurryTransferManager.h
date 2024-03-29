//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FlurryActor.h"

#import "IFlurryTransferManager-Protocol.h"

@class NSString;
@protocol IFlurryFileTransferAgent, IFlurryNodeDataProvider;

@interface FlurryTransferManager : FlurryActor <IFlurryTransferManager>
{
    id <IFlurryFileTransferAgent> _fileTransferAgent;
    id <IFlurryNodeDataProvider> _nodeDataProvider;
    NSString *_filePath;
    NSString *_frameLogFileName;
    NSString *_crashLogFileName;
}

+ (id)transferManagerWithNodeDataProvider:(id)arg1 filePath:(id)arg2 frameLogFileName:(id)arg3 crashLogFileName:(id)arg4 fileTransferAgent:(id)arg5;
@property(retain, nonatomic) NSString *crashLogFileName; // @synthesize crashLogFileName=_crashLogFileName;
@property(retain, nonatomic) NSString *frameLogFileName; // @synthesize frameLogFileName=_frameLogFileName;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) id <IFlurryNodeDataProvider> nodeDataProvider; // @synthesize nodeDataProvider=_nodeDataProvider;
@property(retain, nonatomic) id <IFlurryFileTransferAgent> fileTransferAgent; // @synthesize fileTransferAgent=_fileTransferAgent;
- (void).cxx_destruct;
- (void)onqueue_processCrashedFileIfPresent;
- (void)onqueue_moveFrameLogFileToCrashLogFile;
- (void)onqueue_startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithNodeDataProvider:(id)arg1 filePath:(id)arg2 frameLogFileName:(id)arg3 crashLogFileName:(id)arg4 fileTransferAgent:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

