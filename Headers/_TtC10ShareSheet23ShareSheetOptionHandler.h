//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MFMessageComposeViewControllerDelegate-Protocol.h"

@class MISSING_TYPE;

@interface _TtC10ShareSheet23ShareSheetOptionHandler : NSObject <MFMessageComposeViewControllerDelegate>
{
    MISSING_TYPE *imageOperationQueue;
    MISSING_TYPE *shareableValueContainer;
    MISSING_TYPE *coreDataController;
    MISSING_TYPE *fileManager;
    MISSING_TYPE *activityViewControllerProvider;
    MISSING_TYPE *twitterHandler;
    MISSING_TYPE *facebookHandler;
    MISSING_TYPE *completion;
}

- (void).cxx_destruct;
- (id)init;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;

@end
