//
//  RecipeDetailViewController.h
//  SimpleTableOOP
//
//  Created by dev on 12/12/15.
//  Copyright © 2015 dev. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Recipe.h"
@interface RecipeDetailViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIImageView *recipePhoto;
@property (weak, nonatomic) IBOutlet UITextView *ingredientTextView;

@property (nonatomic, strong) Recipe *recipe;

@end
