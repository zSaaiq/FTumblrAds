//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMAttribution.h"

@class MISSING_TYPE, NSString, NSURL;

@interface _TtC10CoreTumblr16TMAppAttribution : TMAttribution
{
    MISSING_TYPE *madeWithText;
    MISSING_TYPE *iconURL;
    MISSING_TYPE *storeURL;
    MISSING_TYPE *nativeURL;
    MISSING_TYPE *syndicationID;
    MISSING_TYPE *appStoreID;
    MISSING_TYPE *openText;
    MISSING_TYPE *installText;
}

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 URL:(id)arg2 rawURL:(id)arg3 isSubmission:(_Bool)arg4 isAnonymousSubmission:(_Bool)arg5;
@property(nonatomic, readonly) long long hash;
@property(nonatomic, readonly) NSString *submissionAuthor;
- (id)initWithName:(id)arg1 madeWithText:(id)arg2 URL:(id)arg3 nativeURL:(id)arg4 storeURL:(id)arg5 iconURL:(id)arg6 syndicationID:(id)arg7 appStoreID:(id)arg8 openText:(id)arg9 installText:(id)arg10;
@property(nonatomic, readonly) NSURL *preferredURL;
@property(nonatomic, readonly) NSString *installText;
@property(nonatomic, readonly) NSString *openText;
@property(nonatomic, readonly) NSString *appStoreID;
@property(nonatomic, readonly) NSString *syndicationID;
@property(nonatomic, readonly) NSURL *nativeURL;
@property(nonatomic, readonly) NSURL *storeURL;
@property(nonatomic, readonly) NSURL *iconURL;
@property(nonatomic, readonly) NSString *madeWithText;

@end
