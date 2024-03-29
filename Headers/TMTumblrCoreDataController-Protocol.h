//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSManagedObjectContext, TMCoreDataStoreFileLocator, TMUser, _TtC9Timelines18TimelineRepository;
@protocol TMCoreDataMigrationAssistant, _TtP19NetworkAbstractions18CoreDataController_;

@protocol TMTumblrCoreDataController
- (void)resetTimelineRepository;
@property(nonatomic, readonly) _TtC9Timelines18TimelineRepository *timelineRepository;
- (id <_TtP19NetworkAbstractions18CoreDataController_>)controller;
- (void)performMainContextBlockAndWait:(void (^)(NSManagedObjectContext *))arg1;
- (void)performBackgroundBlockAndWait:(void (^)(NSManagedObjectContext *))arg1;
- (void)performUnsafeBackgroundBlockAndWait:(void (^)(NSManagedObjectContext *))arg1;
- (void)performBackgroundBlock:(void (^)(NSManagedObjectContext *))arg1;
- (id)initWithShouldWipeData:(_Bool)arg1;
- (id)initWithStoreFileLocator:(TMCoreDataStoreFileLocator *)arg1 migrationAssistant:(id <TMCoreDataMigrationAssistant>)arg2 forceWipeData:(_Bool)arg3;
@property(nonatomic, readonly) _Bool recreatedStore;
@property(nonatomic, readonly) TMUser *mainContextUser;
@property(nonatomic, readonly) NSManagedObjectContext *mainQueueContext;
@end

