//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMDictionaryUpdatableManagedObject.h"

@class NSString, TMAPIPartsForPersistence;

@interface TMSurveyItem : TMDictionaryUpdatableManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (id)initWithContext:(id)arg1 dictionary:(id)arg2;
- (void)updateWithDictionary:(id)arg1;

// Remaining properties
@property(nonatomic, retain) TMAPIPartsForPersistence *linkParts; // @dynamic linkParts;
@property(nonatomic, copy) NSString *text; // @dynamic text;

@end
