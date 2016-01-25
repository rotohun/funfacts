//
//  ViewController.m
//  funFact
//
//  Created by ronald hunter on 1/24/16.
//  Copyright © 2016 ronald hunter. All rights reserved.
//

#import "ViewController.h"
#import "FactBook.h"
#import "colorWheel.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.factbook = [[FactBook alloc] init];
    self.colorwheel = [[colorWheel alloc] init];
    self.funFactLabel.text = [self.factbook randomFact];
    
    }

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)showFunFact:(id)sender {
    UIColor *randomColor = [self.colorwheel randomColor];
    self.view.backgroundColor = randomColor;
    self.funFactButton.tintColor = randomColor;
    self.funFactLabel.text=[self.factbook randomFact];
    
    
    
}



@end
