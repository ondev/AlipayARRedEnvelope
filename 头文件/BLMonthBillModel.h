//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray;

@interface BLMonthBillModel : NSObject
{
    NSDictionary *_monthInfo;
    NSMutableArray *_recordList;
}

@property(retain, nonatomic) NSMutableArray *recordList; // @synthesize recordList=_recordList;
@property(retain, nonatomic) NSDictionary *monthInfo; // @synthesize monthInfo=_monthInfo;
- (void).cxx_destruct;
- (void)appendData:(id)arg1;
- (long long)recordCount;
- (id)recordAtIndex:(long long)arg1;
- (_Bool)removeRecordAtIndex:(long long)arg1;
- (id)init;

@end

