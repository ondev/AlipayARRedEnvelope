//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APTableView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString;

@interface GO2OSearchHistoryTableView : APTableView <UITableViewDataSource, UITableViewDelegate>
{
    id <GO2OSearchHistoryTableViewDelegate> _historyDelegate;
    NSMutableArray *_historyKeywords;
}

@property(copy, nonatomic) NSMutableArray *historyKeywords; // @synthesize historyKeywords=_historyKeywords;
@property(nonatomic) __weak id <GO2OSearchHistoryTableViewDelegate> historyDelegate; // @synthesize historyDelegate=_historyDelegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadWithHistoryKeywords:(id)arg1;
- (id)initWithHistoryKeywords:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

