//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMPostParameters.h"

@class NSString;

@interface TMTextPostParameters : TMPostParameters
{
    NSString *_title;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithXExtensionItem:(id)arg1 postType:(int)arg2;
- (id)init;
- (id)dictionaryRepresentation;
- (void)fillWithPostValues:(id)arg1;

@end
