//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "XExtensionItemCustomParameters-Protocol.h"

@class NSDictionary, NSString;

@interface XExtensionItemTumblrParameters : NSObject <XExtensionItemCustomParameters>
{
    NSString *_customURLPathComponent;
    unsigned long long _requestedPostType;
    NSString *_consumerKey;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *consumerKey; // @synthesize consumerKey=_consumerKey;
@property(readonly, nonatomic) unsigned long long requestedPostType; // @synthesize requestedPostType=_requestedPostType;
@property(readonly, nonatomic) NSString *customURLPathComponent; // @synthesize customURLPathComponent=_customURLPathComponent;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (id)initWithCustomURLPathComponent:(id)arg1 requestedPostType:(unsigned long long)arg2 consumerKey:(id)arg3;
- (id)initWithCustomURLPathComponent:(id)arg1 consumerKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

