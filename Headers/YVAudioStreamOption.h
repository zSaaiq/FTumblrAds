//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YVAudioStreamOption : NSObject
{
    NSString *_languageTag;
    NSString *_displayName;
    unsigned long long _index;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *languageTag; // @synthesize languageTag=_languageTag;
- (id)description;
- (id)debugDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initAsNullOption;
- (id)initWithLanguageTag:(id)arg1 displayName:(id)arg2 index:(unsigned long long)arg3;

@end

