//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MFMailComposeViewControllerDelegate-Protocol.h"

@class NSLock, NSMutableArray, NSString;

@interface YSTFileLogger : NSObject <MFMailComposeViewControllerDelegate>
{
    NSString *_documentsFolderLocation;
    NSMutableArray *_logs;
    NSLock *_lock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *logs; // @synthesize logs=_logs;
- (id)allLogs;
- (void)reset;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)sendLogsByEMail;
- (void)logEvent:(id)arg1;
- (void)alert:(id)arg1;
@property(readonly, nonatomic) NSString *documentsFolderLocation; // @synthesize documentsFolderLocation=_documentsFolderLocation;
@property(readonly, nonatomic) unsigned long long count;
- (id)initMe;
- (id)init;
- (void)p_dumpLogsToConsole;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
