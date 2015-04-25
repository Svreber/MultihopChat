//
//  DetailViewController.h
//  MultihopChat
//
//  Created by Sven Reber on 24/04/15.
//  Copyright (c) 2015 Sven Reber. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
