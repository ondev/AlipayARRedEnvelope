//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString;

@interface GO2OShopListTableView : UITableView <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    id <GO2OShopListTableViewDelegate> _tableViewDelegate;
    NSArray *_shopListItems;
    struct CGPoint _lastContentOffset;
}

@property(nonatomic) struct CGPoint lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(retain, nonatomic) NSArray *shopListItems; // @synthesize shopListItems=_shopListItems;
@property(nonatomic) __weak id <GO2OShopListTableViewDelegate> tableViewDelegate; // @synthesize tableViewDelegate=_tableViewDelegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)reloadDataWithShopListItems:(id)arg1;
- (id)initWithShopListItems:(id)arg1;
- (_Bool)checkVisibleCell;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

