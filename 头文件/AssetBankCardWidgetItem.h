//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface AssetBankCardWidgetItem : NSObject <NSCoding>
{
    NSString *widgetId;
    NSString *mainInfo;
    NSString *secondInfo;
    NSString *iconUrl;
    NSString *order;
    NSString *clickUrl;
}

@property(retain, nonatomic) NSString *clickUrl; // @synthesize clickUrl;
@property(retain, nonatomic) NSString *order; // @synthesize order;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl;
@property(retain, nonatomic) NSString *secondInfo; // @synthesize secondInfo;
@property(retain, nonatomic) NSString *mainInfo; // @synthesize mainInfo;
@property(retain, nonatomic) NSString *widgetId; // @synthesize widgetId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

