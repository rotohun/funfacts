//
//  ViewController.h
//  funFact
//
//  Created by ronald hunter on 1/24/16.
//  Copyright © 2016 ronald hunter. All rights reserved.
//

#import <UIKit/UIKit.h>


@class FactBook;


@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;
@property (strong, nonatomic) FactBook *factbook;


@end

