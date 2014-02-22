//
//  MMExampleCenterTableViewController.h
//  BigCityLabs
//
//  Created by Markus Kopf on 22/02/14.
//  Copyright (c) 2014 Markus Kopf. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "MMExampleViewController.h"

@interface MMExampleCenterTableViewController : MMExampleViewController <UITableViewDataSource,UITableViewDelegate>
@property (nonatomic,strong) UITableView * tableView;

@end
