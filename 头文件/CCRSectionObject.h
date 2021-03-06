//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, UIView;

@interface CCRSectionObject : NSObject
{
    int _headerHeight;
    int _footerHeight;
    UIView *_headerView;
    UIView *_footerView;
    NSMutableArray *_cellObjectArray;
}

@property(retain, nonatomic) NSMutableArray *cellObjectArray; // @synthesize cellObjectArray=_cellObjectArray;
@property(nonatomic) int footerHeight; // @synthesize footerHeight=_footerHeight;
@property(nonatomic) int headerHeight; // @synthesize headerHeight=_headerHeight;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (float)sectionHeight;
- (id)init;

@end

