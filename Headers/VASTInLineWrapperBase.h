//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, VASTAdSystem, VASTCreatives, VASTExtensions;

@interface VASTInLineWrapperBase : NSObject
{
    VASTAdSystem *_adSystem;
    NSString *_errorUri;
    NSMutableArray *_impression;
    VASTCreatives *_creatives;
    VASTExtensions *_extensions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VASTExtensions *extensions; // @synthesize extensions=_extensions;
@property(retain, nonatomic) VASTCreatives *creatives; // @synthesize creatives=_creatives;
@property(retain, nonatomic) NSMutableArray *impression; // @synthesize impression=_impression;
@property(retain, nonatomic) NSString *errorUri; // @synthesize errorUri=_errorUri;
@property(retain, nonatomic) VASTAdSystem *adSystem; // @synthesize adSystem=_adSystem;
- (id)init;

@end

