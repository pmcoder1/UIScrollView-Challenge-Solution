//
//  RDDViewController.h
//  UIScrollView Challenge Solution
//
//  Created by Ron Duran on 9/10/14.
//  Copyright (c) 2014 RDuran. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RDDViewController : UIViewController <UIScrollViewDelegate>

@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) UIImageView *globeImageView;

@end
