//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APCustomStorage, SORemindSyncManager;

@interface SORemindManager : NSObject
{
    APCustomStorage *_storage;
    id <SORemindDAO> _soremindDAO;
    SORemindSyncManager *_syncManager;
}

+ (id)shareRemindManager;
@property(retain, nonatomic) SORemindSyncManager *syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) id <SORemindDAO> soremindDAO; // @synthesize soremindDAO=_soremindDAO;
@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (id)daoSelectUnreadRemindCountFromDate:(id)arg1 limit:(id)arg2;
- (id)daoClearAllReminds;
- (id)daoSelectRemindListFromDate:(id)arg1 limit:(id)arg2 read:(id)arg3;
- (id)daoSelectRemindWithMidList:(id)arg1;
- (id)daoDeleteRemindWithMidList:(id)arg1;
- (id)daoInsertRemindList:(id)arg1;
- (id)selectRemindListFromDate:(id)arg1 limit:(id)arg2 read:(id)arg3;
- (_Bool)clearAllUnreadRemind;
- (_Bool)insertRemindList:(id)arg1;
- (id)init;

@end

