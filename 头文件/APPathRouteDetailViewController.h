//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AMapPath, AMapRoute, AMapTransit, NSMutableArray, NSString, UIScrollView, UITableView;

@interface APPathRouteDetailViewController : DTViewController <UITableViewDelegate, UITableViewDataSource>
{
    UIScrollView *_base;
    UITableView *_tableView;
    AMapPath *path;
    AMapTransit *transit;
    NSMutableArray *busSegments;
    AMapRoute *_route;
    long long _searchType;
    NSString *_destination;
}

@property(retain, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(nonatomic) long long searchType; // @synthesize searchType=_searchType;
@property(retain, nonatomic) AMapRoute *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)initRouteTable;
- (void)getBusTransit;
- (void)initTitleBanner;
- (void)addshadow;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

